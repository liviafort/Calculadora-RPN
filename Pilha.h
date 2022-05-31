#ifndef PILHA_H
#define PILHA_H

class Pilha{
public:
	int top;
	int elems[50];

	Pilha(int elems[50], int top);
	
	void push(Pilha *pilhaAux, int i);
	int pop(Pilha* pilhaAux);
	int empty(Pilha* pilhaAux);
	int getop(Pilha* pilhaAux, int *n1, int *n2);
};
#endif
