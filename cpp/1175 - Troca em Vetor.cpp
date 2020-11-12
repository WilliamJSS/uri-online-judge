#include <iostream>
#define tam 20

using namespace std;

int main()
{
	int N[tam], aux;
	
	for(int i=0; i<tam; i++)
		cin >> N[i];
		
	for(int i=0; i<tam/2; i++)
	{
		aux=N[i];
		N[i]=N[tam-1-i];
		N[tam-1-i]=aux;
	}
	
	for(int i=0; i<tam; i++)
		cout << "N[" << i << "] = " << N[i] << endl;
	
	return 0;
}

