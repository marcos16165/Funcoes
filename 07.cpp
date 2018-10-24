#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;
int *V, n, x, maior, menor, encontra=0, pos;

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
	
void AchaPosicao(int tam, int *vetor){
	for(int i=0;i<tam;i++){
		if(vetor[i] == x){
			encontra = 1;
			pos=i+1;
		}
	}
	if (encontra == 0){
		cout << "Numero nao encontrado" << endl;
	}
	else{
		cout << "Numero encontrado na posicao " << pos << endl;
	}
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
	cout <<"Digite o elemento que deseja procurar: ";
	cin >> x;
    
    V =GeraVetor(n,V);
    V =EntraVetor(n,V);
    MostraVetor(n,V);
    AchaPosicao(n,V);
    free(V);
    return 0;
}
