#include <iostream>

using namespace std;

int main()
{
	int T, N;
	long long int Fib[61]={0,1};
	
	cin >> T;
	
	for(int i=0; i<T; i++)
	{
		cin >> N;
		
		for(int j=2; j<=N; j++)
			Fib[j] = Fib[j-2] + Fib[j-1];
			
		cout << "Fib(" << N << ") = " << Fib[N] << endl;
	}

	return 0;
}

