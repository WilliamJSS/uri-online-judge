#include <iostream>
#define tam 1000

using namespace std;

int main()
{
	int T, N[tam], cont=0;
	
	cin >> T;
	
	for(int i=0; i<tam; i++)
	{
		N[i]=cont;
		cont++;
		
		if(cont==T)
			cont = 0;
	}
	
	for(int i=0; i<tam; i++)
		cout << "N[" << i << "] = " << N[i] << endl;

	return 0;
}

