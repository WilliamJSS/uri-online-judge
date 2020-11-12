#include <iostream>

using namespace std;

int main()
{
	int N;
	
	cin >> N;
	
	do{
		int M[N][N], aux, digit=1, space;
		
		//Preenchendo a matriz...
		
		M[0][0]=1;
		
		for(int i=1; i<N; i++)
			M[i][0] = 2 * M[i-1][0];     //preenche a primeira coluna
			
		for(int i=0; i<N; i++){
			for(int j=1; j<N; j++)
				M[i][j] = 2 * M[i][j-1]; //preenche as linhas
		}
		
		//Contando a qnt de digitos do maior numero...
		
		aux = M[N-1][N-1];

		while(aux>=10)
		{
			aux/=10;
			digit++;
		}
		
		//Imprimindo a matriz...
		
		for(int i=0; i<N; i++)
		{
			//Contando espaços do primeiro numero dessa linha
			space = digit - 1;
			aux = M[i][0];
			
			while(aux>=10){
				aux/=10;
				space--;
			}
			
			while(space>0){
				cout << " ";
				space--;
			}
			
			cout << M[i][0];
			
			//Restante da linha...
			
			for(int j=1; j<N; j++)
			{
				space = digit;
				aux = M[i][j];
				
				while(aux>=10){
					aux/=10;
					space--;
				}
				
				while(space>0){
					cout << " ";
					space--;
				}
				
				cout << M[i][j];
			}
			
			cout << endl;
		}
		
		cout << endl;
		
		cin >> N;
		
	}while(N!=0);

	return 0;
}

