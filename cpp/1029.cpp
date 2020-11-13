#include <iostream>

using namespace std;

int fib(int num);
int cont;

int main()
{
	int n, x;
	
	cin >> n;
	
	for(int i=0; i<n; i++)
	{
		cin >> x;
		
		cont = 0;
		
		cout << "fib(" << x << ") = " << cont << " calls = " << fib(x) << endl;
	}

	return 0;
}

int fib(int x)
{	
	if(x>=2){
		cont+=2;
		return fib(x-1)+fib(x-2);
	}
	else if(x==1)
		return 1;
	else
		return 0;
}

