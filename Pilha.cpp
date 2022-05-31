#include "Pilha.h"
#include <iostream>
using namespace std;

Pilha::Pilha(int elems[50], int novoTop){
	*this->elems = elems[50];
	this->top = novoTop;
}
void Pilha::push(Pilha *pilha, int i){
	pilha->elems[pilha->top++] = i;
}

int Pilha::pop(Pilha *pilha){
	return pilha->elems[--(pilha->top)];
};

int Pilha::empty(Pilha *pilha){
	return pilha->top == 0;
}

int Pilha::getop(Pilha* pilha, int *n1, int *n2){
	if (empty(pilha))
	{
		cout << ("empty stack!\n");
		return 0;
	}
	*n2 = pop(pilha);
	if (empty(pilha))
	{
		push(pilha, *n2);
		cout << ("Precisa de dois operadores!\n");
		return 0;
	}
	*n1 = pop(pilha);
	return 1;

}