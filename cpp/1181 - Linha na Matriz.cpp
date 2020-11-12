#include <iostream>
#include <iomanip>
#define tam 12

using namespace std;

int main()
{
	int L;
	char T;
	float M[tam][tam], acum=0;
	
	cin >> L >> T;
	 
	for(int lin=0; lin<tam; lin++){     //Leitura da matriz
		for(int col=0; col<tam; col++)
			cin >> M[lin][col];
	}
	
	for(int col=0; col<tam; col++)   //Somatório da linha 'T'
		acum+=M[L][col];
	
	cout << fixed << setprecision(1);
	
	if(T=='S')
		cout << acum << endl;      //soma
	else if(T=='M')
		cout << acum/tam << endl;  //média

	return 0;
}

