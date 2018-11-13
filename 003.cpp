//a. Alocação dinâmica de um vetor para números reais; 
float *AlocaVetor(int tam, float *V)
{
	V = (float*)malloc(tam * sizeof(float))
		return V;
}

//b. Alocação dinâmica de uma matriz de números inteiros; 
for(int i = 0; i < n; i++)
	M = (int)malloc(n*sizeof(int));
for(int j = 0; j < n; j++)
	M[j] = (int)malloc(n*sizeof(int));

//c. Uma função (útil – seja criativo) que utilize o vetor do item “a” e retorne o mesmo para uso. 
#include <iostream>
#include <stdlib.h>

using namespace std;

double *V, n, soma=0, media;
int main(){
cout<<"========== MEDIA DAS NOTAS DE UM ALUNO =========="<<endl;	

cout<<"Quantas notas deseja armazenar? ";
cin>> n;
V=(double*)malloc(n*sizeof(double));

for(int j=0; j<n; j++){
	cout<<"Qual foi notas "<<j+1<<" do aluno: ";
	cin>>V[j];
	
	}
	
for(int j=0; j<n; j++){
	soma+= V[j];
	media = soma/n;}
	cout <<"A media das notas e: " <<media<<endl;

	
for (int j=0; j<n; j++){
	if(j==0) cout<<"V=["<<V[j]<<", "; else
		if(j<n-1) cout<<V[j]<<", "; else
			cout<<V[j]<<"]"<<endl;
	}
	
	free(V);
	return 0;
}

