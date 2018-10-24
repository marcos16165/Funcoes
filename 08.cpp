#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int *V, *z, *V3, *V1, *V2, n, n1, n2, n3, maior, menor;

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
int *NovoVetor(int n1, int *V1, int *V2, int *vetor){
	for(int i=0; i<n1; i++){
		if(i%2==0){
			vetor[i]=V1[i/2];}
		else{
			vetor[i]=V2[i/2];
			}
		}
		return vetor; 
}

void MostraVetor(int tam, int *vetor){
    cout<<"IMPRIMINDO VETOR COM "<<tam<<" POSICOES"<<endl<<endl;
    for(int j=0; j<tam; j++){
    if (j==0) cout<<"v=["<<vetor[j]<<","; else
        if(j<tam-1) cout << vetor[j] << ","; else
            cout<<vetor[j]<<"]"<< endl;
    }
    
    cout<<"------------------------------------------------" <<endl;    
}


int main()
{
    cout <<"Qual o tamanho do primeiro vetor? ";
    cin >> n1;
    V1 =GeraVetor(n1,V1);
    V1 =EntraVetor(n1,V1);
    
	cout <<"Qual o tamanho do segundo vetor? ";
    cin >> n1;
    V2 =GeraVetor(n1,V2);
    V2 =EntraVetor(n1,V2);
    
    cout<<"-----PRIMEIRO VETOR-----\n";
    MostraVetor(n1,V1);
    cout<<"-----SEGUNDO VETOR-----\n";
    MostraVetor(n1,V2);
    
    cout<<"-----NOVO VETOR-----\n";
    n2=n1*2;
    V3 =GeraVetor(n2,V3);
    V3 =NovoVetor(n2,V1,V2,V3);
    MostraVetor(n2,V3);
    	
	
    free(V1);
    free(V2);
    free(V3);
    return 0;

}

