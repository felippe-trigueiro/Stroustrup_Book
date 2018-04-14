#include <iostream>
using namespace std;

int main() 
{
	float milhas = 0;
	
	cout << "Entre com o valor em milhas: ";
	cin >> milhas;

	cout << endl << "O valor em quilometros eh: " << milhas * 1609 << endl;

	system("pause");
}