#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int escolha, SCH;
	float lado;
	do{
	do{
	cout <<"\n\nOlá, posso te ajudar a calcular a área ou a altura de um triângulo equilátero. \nPara calcular a altura, pressione 1. \nPara calcular a área, pressione 2\n";
	cin >> escolha;
	cin.ignore();
	switch(escolha){
	case 1:
	cout <<"Qual é a medida do lado do lado do triângulo equilátero?\n";
	cin >> lado;
	cin.ignore();
	cout << "A fórmula é H = L√3/2. \nA altura do triângulo é: "<< lado/2 <<"√3 \n\nTentar novamente?\n1 para sim. \nE para não, pressione qualquer outro número.\n";
	cin >> SCH;
	cin.ignore();
	break;
	case 2:
		cout <<"Qual é a medida do lado do triângulo equilátero?\n";
		cin >> lado;
		cin.ignore();
		cout <<"A fórmula da área do triângulo equilátero é A = L²√3/4 \nA área do triângulo equilátero é: "<< pow(lado, 2)/4 <<"√3 \n\nTentar novamente?\n1 para sim. \nE para não, pressione qualquer outro número.\n";
		cin >> SCH;
		cin.ignore();
		break;
	default:
		cout << "Tente novamente\n";
	break;
	}
	}while(escolha > 2);
	}while(SCH == 1);
	cout <<"Obrigado e até mais!!";
	return 0;
}
