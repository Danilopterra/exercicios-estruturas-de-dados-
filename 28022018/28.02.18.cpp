 #include <stdlib.h>
 #include <stdio.h>
 
//Faça um programa que leia um valor inteiro n e crie dinamicamente
//um vetor de n elementos do tipo inteiro.
//Em seguida o programa deve ler os elementos desse vetor.
//Depois, o vetor preenchido deve ser impresso.
//Além disso, antes de finalizar o programa, 
//deve-se liberar a área de memória alocada.
    
void lerElementos(int *vetor, int n);
int main(){
int *elementos, n, j;

printf("Digite um valor 'n': ");
scanf("%d", &n);
elementos = (int *) malloc(sizeof(int)*n);

if(elementos==NULL){
printf(".");
exit(1);
}

lerElementos(elementos, n);

for(j=0;j<n;j++){
printf("%d ", *(elementos+j));
}

free(elementos);
return(0);
}
void lerElementos(int *vetor, int i){
int j;
for(j=0;j<i;j++){
printf(" %d: ", j);
scanf("%d", vetor+j);
}
;}
