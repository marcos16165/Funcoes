#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;
int *V, n, maior, posicao;

int *GeraVetor(int tam, int *vetor){
	vetor=(int*)malloc(tam*sizeof(int));
	return vetor;
}

int *EntraVetor(int tam, int *vetor){
    for(int j=0; j<tam; j++){
    maior = 0;
    do {
    cout<<"Digite o valor da posi��o "<<j+1<<": ";
    cin>>vetor[j];}
    while (vetor[j] < 0);
	}
          
    return vetor;
}
	
void MostraMaiorePos(int tam, int *vetor){
	maior = vetor[0];	
	for(int j=0; j<tam; j++){
		if(vetor[j]> maior) maior = vetor[j];
		posicao = vetor[j];
	}
	cout<<"O maior elemento �: "<<maior <<"\nNa posi��o: "<< posicao <<endl;
    }

void MostraVetor(int tam, int *vetor){
    cout<<"IMPRIMINDO VETOR COM "<<tam<<" POSICOES"<<endl<<endl;
    for(int j=0; j<tam; j++){
    if (j==0) cout<<"v=["<<vetor[j]<<","; else
        if(j<n-1) cout << vetor[j] << ","; else
            cout<<vetor[j]<<"]"<< endl;
    }
}

int main(){
    cout <<"Qual o tamanho do vetor? ";
    cin >> n;
    V =GeraVetor(n,V);
    V =EntraVetor(n,V);
	MostraVetor(n,V);
    MostraMaiorePos(n,V);
    
	free(V);
	return 0;
}