#include <stdlib.h>
#include <stdio.h>

#define TAMANHO 100
struct pilha {
	int topo;
	char item[TAMANHO];
};

Pilha* criapilha(){
	Pilha* p = (Pilha*) malloc(sizeof(Pilha));
	if(p!=NULL)
		p->topo = 0;
	return p;
}

void liberar(Pilha* p){
	free(p);
}

void push(Pilha* p, char item){
	p->item[(p->topo)++] = item;
}

char pop(Pilha* p){
	if (empty(p)) {
		printf("pilha vazia");
		exit(1);
	}
	return(p->item[--(p->topo)]);
}

int empty(Pilha* p){
	return (p->topo <= 0);
}
//1) Se a pilha 1 estiver vazia, então imprima mensagem de erro. 
//2) Desempilhe um item da pilha 1 e o retorne.
void dequeue(){
	int aux;
	if(empty(pilha1))
		printf("erro");
	else {
		return pop(pilha1);
	}
}

/*
enQueue (q, x) 
  1) Enquanto a pilha 1 não está vazia, empilhe tudo da pilha 1 para a pilha 2. 
  2) Empilhe x na pilha 1. 
  3) Empilhe tudo de volta para a pilha 1. 
*/
void enqueue(int x){
	int aux;
	while(!empty(pilha1)){
		aux = pop(pilha1);
		push(pilha2,aux);
	}
	push(pilha1,x);
	while(!empty(pilha2){
		aux = pop(pilha2);
		push(pilha1,aux);
	}	
}

Pilha *pilha1 = criapilha();
Pilha *pilha2 = criapilha();

int main() {
	
}
