#include <iostream>
#include <iomanip>
#define tam 12

using namespace std;

int main()
{
	char O;
	double M[tam][tam], acum=0;
	int cont=0;
	
	cin >> O;
	
	for(int i=0; i<tam; i++){
		for(int j=0; j<tam; j++)
		{
			cin >> M[i][j];
			if(j<tam-1-i)
			{
				acum+=M[i][j];
				cont++;
			}
		}
	}
	
	cout << fixed << setprecision(1);
	
	if(O=='S')
		cout << acum << endl;
	else if(O=='M')
		cout << acum/cont << endl;

	return 0;
}

