#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;
int *V, n, maior, menor;

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
    
void MostraMenor(int tam, int *vetor){
	menor = vetor[0];
	for(int j=0; j<tam; j++){
		if(vetor[j]<menor) menor = vetor[j];
	}
	cout<<"O menor elemento é: "<<menor << endl;
    }
    
void MostraMaior(int tam, int *vetor){
	maior = vetor[0];	
	for(int j=0; j<tam; j++){
		if(vetor[j]> maior) maior = vetor[j];
	}
	cout<<"O maior elemento é: "<<maior << endl;
    }

void MostraVetor(int tam, int *vetor){
    cout<<"IMPRIMINDO VETOR COM "<<tam<<" POSICOES"<<endl<<endl;
    for(int j=0; j<tam; j++){
    if (j==0) cout<<"v=["<<vetor[j]<<","; else
        if(j<n-1) cout << vetor[j] << ","; else
            cout<<vetor[j]<<"]"<< endl;
    }
    
    cout<<"------------------------------------------------" <<endl;    
}
int main()
{
    cout <<"Qual o tamanho do vetor? ";
    cin >> n;
    V =GeraVetor(n,V);
    V =EntraVetor(n,V);
    MostraVetor(n,V);
    MostraMaior(n,V);
    MostraMenor(n,V);    
    free(V);
    return 0;
}
