#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include"funcoes.h"
#include<string.h>
#include"preenche.h"

void preencheVetor(int vet[], int escolha,int escolha2){
    int i=0,g=0;
    g=rand()%1000000;
    switch(escolha2){
        case 1:
            for(i=0;i<escolha;i++){
                vet[i]=g++;
            }
            break;
        case 2:
            for(i=0;i<escolha;i++){
                vet[i]=g--;
            }
            break;
        case 3:
            for(i=0;i<escolha;i++){
                vet[i]=rand()%1000000;
            }
            break;
        default:
            break;
    }
}


int main(){
int i=0,g=0,escolha=0,escolha2=0,p,opcao=0;
int *vet;
char opra[50];
char func[50];
char nome[50];
double tempoFinal=0,tempoInic=0,tempoResult=0;
printf("\n//Digite a opcao deseja:");
printf("\n//(1)Insertion Sort");
printf("\n//(2)Bubble Sort");
printf("\n//(3)Selection Sort");
printf("\n//(4)Shell Sort");
printf("\n//(5)Merge Sort");
printf("\n//(6)Quick Sort");
printf("\n//(7)QuickMedia Sort");
printf("\n//(8)Heap Sort\n");
scanf("%d",&opcao);
printf("\n//Digite a opcao deseja:");
printf("\n//(1)10 valores");
printf("\n//(2)100 valores");
printf("\n//(3)1000 valores");
printf("\n//(4)10000 valores");
printf("\n//(5)100000 valores");
printf("\n//(6)1000000 valores\n");
scanf("%d", &escolha);
printf("\n//Digite a opcao deseja:");
printf("\n//(1)crescente valores");
printf("\n//(2)decrescente valores");
printf("\n//(3)randomico valores\n");
scanf("%d", &escolha2);
switch(escolha){
    case 1:
        escolha=10;
        break;
    case 2:
        escolha=100;
        break;
    case 3:
        escolha=1000;
        break;
    case 4:
        escolha=10000;
        break;
    case 5:
        escolha=100000;
        break;
    case 6:
        escolha=1000000;
        break;
    default:
        break;
 }
 switch(opcao){
    case 1:
        fflush(stdin);
        strcat(func,"Insertion Sort");
        break;
    case 2:
        fflush(stdin);
        strcat(func,"Bubble Sort");
        break;
    case 3:
        fflush(stdin);
        strcat(func,"Selection Sort");
        break;
    case 4:
        fflush(stdin);
        strcat(func,"Shell Sort");
        break;
    case 5:
        break;
    case 6:
        break;
    default:
        break;
 }
 switch(escolha2){
    case 1:
        fflush(stdin);
        strcat(opra,"Crescente");
        break;
    case 2:
        fflush(stdin);
        strcat(opra,"Decrescente");
        break;
    case 3:
        fflush(stdin);
        strcat(opra,"Aleatorio");
        break;
 }
srand(time(NULL));
FILE *arq;
vet = (int *) malloc(escolha * sizeof(int));
sprintf(nome, "%d", escolha);
mkdir(nome);
switch(opcao){
    case 1:
        printf("Realizando o Insertion..");
        preencheVetor(vet,escolha,escolha2);
        imprimeinic(arq,escolha,vet,opra,func);
        tempoInic=clock();
        insertion_sort(vet,escolha);
        imprimeFim(arq,escolha,vet);
        tempoFinal = clock();
        tempoResult = ((tempoFinal-tempoInic)/(double)CLOCKS_PER_SEC);
        imprimeTemp(arq,escolha,tempoResult);
        printf("\nInsertion Terminado");
        break;
    case 2:
        printf("Realizando o Bubble..");
        preencheVetor(vet,escolha,escolha2);
        imprimeinic(arq,escolha,vet,opra,func);
        tempoInic=clock();
        bubble_sort(vet,escolha);
        imprimeFim(arq,escolha,vet);
        tempoFinal = clock();
        tempoResult = ((tempoFinal-tempoInic)/(double)CLOCKS_PER_SEC);
        imprimeTemp(arq,escolha,tempoResult);
        printf("\nBubble Terminado");
        break;
    case 3:
        printf("Realizando o Selection..");
        preencheVetor(vet,escolha,escolha2);
        imprimeinic(arq,escolha,vet,opra,func);
        tempoInic=clock();
        selection_sort(vet,escolha);
        imprimeFim(arq,escolha,vet);
        tempoFinal = clock();
        tempoResult = ((tempoFinal-tempoInic)/(double)CLOCKS_PER_SEC);
        imprimeTemp(arq,escolha,tempoResult);
        printf("\nSelection Terminado");
        break;
    case 4:
        printf("Realizando o Shell..");
        preencheVetor(vet,escolha,escolha2);
        imprimeinic(arq,escolha,vet,opra,func);
        tempoInic=clock();
        shell_sort(vet,escolha);
        imprimeFim(arq,escolha,vet);
        tempoFinal = clock();
        tempoResult = ((tempoFinal-tempoInic)/(double)CLOCKS_PER_SEC);
        imprimeTemp(arq,escolha,tempoResult);
        printf("\nShell Terminado");
        break;
    case 5:
        printf("Realizando o Merge..");
        preencheVetor(vet,escolha,escolha2);
        imprimeinic(arq,escolha,vet,opra,func);
        tempoInic=clock();
        mergeSort(vet,0,escolha);
        imprimeFim(arq,escolha,vet);
        tempoFinal = clock();
        tempoResult = ((tempoFinal-tempoInic)/(double)CLOCKS_PER_SEC);
        imprimeTemp(arq,escolha,tempoResult);
        printf("\nMerge Terminado");
        break;
    case 6:
        printf("Realizando o Quick..");
        preencheVetor(vet,escolha,escolha2);
        imprimeinic(arq,escolha,vet,opra,func);
        tempoInic=clock();
        quick_sort(vet,escolha);
        imprimeFim(arq,escolha,vet);
        tempoFinal = clock();
        tempoResult = ((tempoFinal-tempoInic)/(double)CLOCKS_PER_SEC);
        imprimeTemp(arq,escolha,tempoResult);
        printf("\nQuick Terminado");
        break;
    case 7:
        printf("Realizando o QuickMedia..");
        preencheVetor(vet,escolha,escolha2);
        imprimeinic(arq,escolha,vet,opra,func);
        tempoInic=clock();
        quick_sortMEDIA(vet,escolha);
        imprimeFim(arq,escolha,vet);
        tempoFinal = clock();
        tempoResult = ((tempoFinal-tempoInic)/(double)CLOCKS_PER_SEC);
        imprimeTemp(arq,escolha,tempoResult);
        printf("\nQuickMedia Terminado");
        break;
    case 8:
        printf("Realizando o Heap Sort..");
        preencheVetor(vet,escolha,escolha2);
        imprimeinic(arq,escolha,vet,opra,func);
        tempoInic=clock();
        quick_sortMEDIA(vet,escolha);
        imprimeFim(arq,escolha,vet);
        tempoFinal = clock();
        tempoResult = ((tempoFinal-tempoInic)/(double)CLOCKS_PER_SEC);
        imprimeTemp(arq,escolha,tempoResult);
        printf("\nHeap Sort Terminado");
        break;
    default:
        break;

 }
 free(vet);
}


