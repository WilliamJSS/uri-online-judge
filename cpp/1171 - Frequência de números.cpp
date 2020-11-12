#include <iostream>

using namespace std;

int main()
{
	//... Inicialização e entrada
	
	int N, cont, aux; 
	
	cin >> N;
	
	int V[N]; 
	
	for(int i=0; i<N; i++)
		cin >> V[i];
	
	//... Ordenar de forma crescente

	for(int i=0; i<N-1; i++)
	{
		for(int j=i+1; j<N; j++)
		{
			if(V[i]>V[j])
			{
				aux=V[i];
				V[i]=V[j];
				V[j]=aux;
			}
		}
	}

	//... Contagem
	
	for(int i=0; i<N; i+=cont)
	{
		cont = 1;
		
		for(int j=i+1; j<N; j++)
		{
			if(V[i]==V[j])
				cont++;
			else
				break;
		}
		
		cout << V[i] << " aparece " << cont << " vez(es)" << endl;
	}
	
	/*... Impressão do vetor...
	
	cout << "\n V: " << endl;
	
	for(int i=0; i<N; i++)
		cout << V[i] << " ";
	
	cout << "\n\n";
	
	..........................*/

	return 0;
}

