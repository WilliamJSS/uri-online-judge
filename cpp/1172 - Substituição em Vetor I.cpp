#include <iostream>
#define tam 10

using namespace std;

int main()
{
	int X[tam];
	
	for(int i=0; i<tam; i++)
	{
		cin >> X[i];
		
		if(X[i]<=0)
			X[i]=1;
	}
		
	for(int i=0; i<tam; i++)
		cout << "X[" << i << "] = " << X[i] << endl;	

	return 0;
}

