#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

int main()
{
	int n,h;
	double v;
	
	cin >> n >> h >> v;
	
	cout << fixed << setprecision(2);
	cout << "NUMBER = " << n << endl;
	cout << "SALARY = U$ " << h*v << endl;

	system("pause");
	return 0;
}

