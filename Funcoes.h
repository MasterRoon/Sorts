#ifndef funcoes_h
#define funcoes_h
#include<stdio.h>
#include<stdlib.h>
#include"preenche.h"
void insertion_sort(int *elementos, int n){
	int i,j;
	for(i=0;i<n;i++){
		j = i-1;
		int x = elementos[i];
		while(x<elementos[j] && j >= 00){
			elementos[j+1] = elementos[j];
			elementos[j] = x;
			j--;
		}
	}
}

void bubble_sort(int *elementos, int n){
	int i,j;
  for( i = 0; i < n; i++ ){
    for(j=i+1;j<n;j++){
      if ( elementos[j] < elementos[i] )
      {
         int aux = elementos[j];
         elementos[j] = elementos[i];
         elementos[i] = aux;
      }
    }
  }
}

void selection_sort(int *elementos, int n){
	int i,j;
	for(i=0;i<n-1;i++){
		int min_index=i;
		for(j=i+1;j<=n-1;j++){
			if(elementos[min_index] > elementos[j]){
				min_index =j;
			}
		}
		int temp = elementos[i];
		elementos[i] = elementos[min_index];
		elementos[min_index]= temp;
	}
}

void shell_sort(int* elementos, int n){
	int i, j, h=0;
	do{
		h =3*h +1;
	}while(h<n);

	do{
		h /= 3;
		for(i=h; i<n; i++){
			int x = elementos[i];
			j=i;
			while(elementos[j - h] > x){
				elementos[j] = elementos [j - h];
				j -= h;
				if(j<=h)
					goto L999;
			}
			L999: elementos[j] = x;
		}
	}while( h != 1);
}

void merge(int vetor[], int inicio, int meio, int fim) {

 	int com1 = inicio, com2 = meio+1, comAux = 0, vetAux[fim-inicio+1];
	while(com1<=meio && com2<=fim){
 		if(vetor[com1] <= vetor[com2]){
 			vetAux[comAux] = vetor[com1];
 			com1++;
 	}else{
 			vetAux[comAux] = vetor[com2];
 			com2++;
	   }
 	comAux++;
	}
	while(com1<=meio){
 			vetAux[comAux] = vetor[com1];
 			comAux++;
			com1++;
		}
	while(com2<=fim){
 			vetAux[comAux] = vetor[com2];
 			comAux++;com2++;
		}
 	for(comAux=inicio;comAux<=fim;comAux++){
 		vetor[comAux] = vetAux[comAux-inicio];
 	}
 }

 void mergeSort(int* vetor, int inicio, int fim){
	if (inicio < fim) {
 		int meio = (inicio+fim)/2;
 		mergeSort(vetor, inicio, meio);
		mergeSort(vetor, meio+1, fim);
		merge(vetor, inicio, meio, fim);
 	}
}


void particao(int* elementos, int esq,int dir , int *i,int *j){
	int x,w;
	*i = esq;
	*j = dir;
	x = elementos[(*i + *j) / 2];
	do{
		while( x > elementos[*i])(*i)++;
		while( x < elementos[*j])(*j)--;
		if(*i <= *j){
			w = elementos[*i];
			elementos[*i] = elementos[*j];
			elementos[*j] = w;
			(*i)++;
			(*j)--;
		}
	}while(*i <= *j);
}

void ordena(int *elementos, int esq, int dir){
	int i,j;
	particao(elementos,esq,dir,&i,&j);
	if(esq < j){
		ordena(elementos,esq,j);
	}
	if(i< dir){
		ordena(elementos,i,dir);
	}
}

void quick_sort(int *elementos,int n){
	ordena(elementos,0,n-1);
}

void particaoMEDIA(int* elementos, int esq,int dir , int *i,int *j){
	int x,w;
	*i = esq;
	*j = dir;

	int result,t,minpos=0,maxpos=0;
	int aux[3];
	aux[0]=*i+(rand()%(*j-*i));
	aux[1]=*i+(rand()%(*j-*i));
	aux[2]=*i+(rand()%(*j-*i));

	for(t=0;t<3;t++){
		if(elementos[aux[t]]< elementos[minpos]){
			minpos=t;
		}
		if(elementos[aux[t]]>elementos[maxpos]){
			maxpos=t;
		}
	}

	for(t=0;t<3;t++){
		if(t!= minpos && t != maxpos){
			result =aux[t];
		}
	}
		x = elementos[result];
	do{
		while( x > elementos[*i])
			(*i)++;
		while( x < elementos[*j])
			(*j)--;
		if(*i <= *j){
			w = elementos[*i];
			elementos[*i] =elementos[*j];
			elementos[*j] = w;
			(*i)++;
			(*j)--;
		}
	}while(*i <= *j);
}
void ordenaMEDIA(int *elementos, int esq, int dir){
	int i,j;
	particaoMEDIA(elementos,esq,dir,&i,&j);
	if(esq < j){
		ordenaMEDIA(elementos,esq,j);
	}
	if(i<dir){
		ordenaMEDIA(elementos,i,dir);
	}
}
void quick_sortMEDIA(int *elementos,int n){
	ordenaMEDIA(elementos,0,n-1);
}

void heapify(int *elementos,int n,int tamanho1) {
    int l =  2*n;
    int r =  2*n+1;
    int largest = n;
    if (l <= tamanho1 && elementos[l] > elementos[n]) {
        largest = l;
    }
    if (r <= tamanho1 && elementos[r] > elementos[largest]) {
        largest = r;
    }
    if (largest != n) {
        int temp = elementos[n];
        elementos[n] = elementos[largest];
        elementos[largest] = temp;
        heapify(elementos, largest,tamanho1);
    }
}
void buildHeap(int *elementos,int tamanho1) {
	int i;
    for (i=tamanho1/2; i >= 1; i--) {
        heapify(elementos, i,tamanho1);
    }
}

void heapSort(int *elementos,int tamanho1) {
    buildHeap(elementos,tamanho1);
    int i;
    for (i=tamanho1; i >= 2; i--) {
        int temp = elementos[1];
        elementos[1] = elementos[i];
        elementos[i] = temp;
        tamanho1--;
        heapify(elementos, 1,tamanho1);
    }
}


#endif
