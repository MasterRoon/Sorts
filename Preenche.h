#ifndef preenche_h
#define preenche_h
#include<stdio.h>
#include<stdlib.h>
#include"funcoes.h"

int imprimeinic(FILE *arq,int escolha,int *elementos,char *opera,char *func){
    int i=0;
    switch(escolha){
        case 10:
        arq=fopen("10\\Operação.txt","w");
        fprintf(arq,"%s",func);
        fflush(stdin);
        fprintf(arq,"%s",opera);
        arq=fopen("10\\entrada.txt","w");
        fprintf(arq,"%d",escolha);
        for(i=0;i<escolha;i++){
            fprintf(arq,"\n%d",elementos[i]);
        }
        fclose(arq);
        break;
    case 100:
        arq=fopen("100\\Operação.txt","w");
        fprintf(arq,"%s",func);
        fflush(stdin);
        fprintf(arq,"%s",opera);
        arq=fopen("100\\entrada.txt","w");
        fprintf(arq,"%d",escolha);
        for(i=0;i<escolha;i++){
            fprintf(arq,"\n%d",elementos[i]);
        }
        fclose(arq);
        break;
    case 1000:
        arq=fopen("1000\\Operação.txt","w");
        fprintf(arq,"%s",func);
        fflush(stdin);
        fprintf(arq,"%s",opera);
        arq=fopen("1000\\entrada.txt","w");
        fprintf(arq,"%d",escolha);
        for(i=0;i<escolha;i++){
            fprintf(arq,"\n%d",elementos[i]);
        }
        fclose(arq);
        break;
    case 10000:
        arq=fopen("10000\\Operação.txt","w");
        fprintf(arq,"%s",func);
        fflush(stdin);
        fprintf(arq,"%s",opera);
        arq=fopen("10000\\entrada.txt","w");
        fprintf(arq,"%d",escolha);
        for(i=0;i<escolha;i++){
            fprintf(arq,"\n%d",elementos[i]);
        }
        fclose(arq);
        break;
    case 100000:
        arq=fopen("100000\\Operação.txt","w");
        fprintf(arq,"\n%s",func);
        fflush(stdin);
        fprintf(arq,"\n%s",opera);
        arq=fopen("100000\\entrada.txt","w");
        fprintf(arq,"%d",escolha);
        for(i=0;i<escolha;i++){
            fprintf(arq,"\n%d",elementos[i]);
        }
        fclose(arq);
        break;
    case 1000000:
        arq=fopen("1000000\\Operação.txt","w");
        fprintf(arq,"%s",func);
        fflush(stdin);
        fprintf(arq,"%s",opera);
        arq=fopen("1000000\\entrada.txt","w");
        fprintf(arq,"%d",escolha);
        for(i=0;i<escolha;i++){
            fprintf(arq,"\n%d",elementos[i]);
        }
        fclose(arq);
        break;
    default:
        break;
 }
}

void imprimeFim(FILE *arq,int escolha,int *elementos){
    int i=0;
    switch(escolha){
    case 10:
        arq=fopen("10\\Saida.txt","w");
        for(i=0;i<escolha;i++){
            fprintf(arq,"\n%d",elementos[i]);
        }
        fclose(arq);
        break;
    case 100:
        arq=fopen("100\\Saida.txt","w");
        for(i=0;i<escolha;i++){
            fprintf(arq,"\n%d",elementos[i]);
        }
        fclose(arq);
        break;
    case 1000:
        arq=fopen("1000\\Saida.txt","w");
        for(i=0;i<escolha;i++){
            fprintf(arq,"\n%d",elementos[i]);
        }
        fclose(arq);
        break;
    case 10000:
        arq=fopen("10000\\Saida.txt","w");
        for(i=0;i<escolha;i++){
            fprintf(arq,"\n%d",elementos[i]);
        }
        fclose(arq);
        break;
    case 100000:
        arq=fopen("100000\\Saida.txt","w");
        for(i=0;i<escolha;i++){
            fprintf(arq,"\n%d",elementos[i]);
        }
        fclose(arq);
        break;
    case 1000000:
        arq=fopen("1000000\\Saida.txt","w");
        for(i=0;i<escolha;i++){
            fprintf(arq,"\n%d",elementos[i]);
        }
        fclose(arq);
        break;
    default:
        break;
 }
}

void imprimeTemp(FILE *arq,int escolha,float tempoResult){
    int i=0;
    switch(escolha){
    case 10:
        arq=fopen("10\\TempoGasto.txt","w");
        fprintf(arq,"%.4f",tempoResult);
        fclose(arq);
        break;
    case 100:
        arq=fopen("100\\TempoGasto.txt","w");
        fprintf(arq,"%.4f",tempoResult);
        fclose(arq);
        break;
    case 1000:
        arq=fopen("1000\\TempoGasto.txt","w");
        fprintf(arq,"%.4f",tempoResult);
        fclose(arq);
        break;
    case 10000:
        arq=fopen("10000\\TempoGasto.txt","w");
        fprintf(arq,"%.4f",tempoResult);
        fclose(arq);
        break;
    case 100000:
        arq=fopen("100000\\TempoGasto.txt","w");
        fprintf(arq,"%.4f",tempoResult);
        fclose(arq);
        break;
    case 1000000:
        arq=fopen("1000000\\TempoGasto.txt","w");
        fprintf(arq,"%.4f",tempoResult);
        fclose(arq);
        break;
    default:
        break;
 }
}




#endif
