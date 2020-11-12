#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int cod, num;
	float valor, total;
	
	cin >> cod >> num >> valor;
	
	total = num*valor;
	
	cin >> cod >> num >> valor;
	
	total += num*valor;
	
	cout << fixed << setprecision(2);
	cout << "VALOR A PAGAR: R$ " << total << endl;

	return 0;
}

