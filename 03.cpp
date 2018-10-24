#include <iostream>
#include <math.h>
#include <stdlib.h> 

using namespace std;

int *A, n, maior;

int *GeraVetor(int tam, int *vetor){
	vetor=(int*)malloc(tam*sizeof(int));
	return vetor;
}

int *EntraVetor(int tam, int *vetor){
	for(int j=0; j<tam; j++){
		cout<<"Digite o valor da posição: "<<j+1<<": ";
		cin>>vetor[j];
		}
		return vetor;	
	}
	
void MostraMaior(int tam, int *vetor){
	maior = vetor[0];
	for(int j=0; j<tam; j++){
		if(vetor[j]>maior) maior = vetor[j];
	}
	cout <<"O maior elemento do vetor é: "<<maior<<endl;
}

int main(){
	cout << "Qual o tamanho do vetor? ";
	cin>> n;
	A = GeraVetor(n,A);
	A = EntraVetor(n,A);
	MostraMaior(n,A);
	
	free(A);
	return 0;
	}
