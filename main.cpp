#include <iostream>
#include "Pilha.h"
#include <stdio.h>
#include <locale>
using namespace std;

int main(void){
	setlocale(LC_ALL, "");
	int val[50], i = 0;
	Pilha *pilhaCalc = new Pilha(val, i);
	while(true)
	{
		char str[31];
		cin >> str;
		if (sscanf(str, " %d", &i) == 1){
			pilhaCalc->push(pilhaCalc, i);
		}
		else
		{
      int n1, n2;
			char c;
			sscanf(str, "%c", &c);
			switch (c)
			{
			case '+':
				if (pilhaCalc->getop(pilhaCalc, &n1, &n2)) 
          pilhaCalc->push(pilhaCalc, n1 + n2);
				break;
			case '-':
				if (pilhaCalc->getop(pilhaCalc, &n1, &n2))
          pilhaCalc->push(pilhaCalc, n1 - n2);
				break;
			case '/':
				if (pilhaCalc->getop(pilhaCalc, &n1, &n2)){
          pilhaCalc->push(pilhaCalc, n1 / n2);}
				break;
			case '*':
				if (pilhaCalc->getop(pilhaCalc, &n1, &n2)){
          pilhaCalc->push(pilhaCalc, n1 * n2);}
				break;
			case 'q':
				return 0;
			default:
				cout << "erro!" << endl;
			}
		}
		for (int a = 0; a < pilhaCalc->top; a++){
			cout << a << ":" << pilhaCalc->elems[a];
			cout << endl;
		}
	}
	return 0;
}