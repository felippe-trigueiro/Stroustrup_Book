#include <iostream>
using namespace std;

int main() 
{
	int val1 = 0, val2 = 0;

	cout << "Entre com dois valores inteiros: ";
	cin >> val1 >> val2;

	if (val1 > val2)
		cout << "Maior: " << val1 << endl << "Menor: " << val2 << endl;	
	else if (val1 < val2)
		cout << "Maior: " << val2 << endl << "Menor: " << val1 << endl;
	else if (val1 == val2)
		cout << "Os valores sao iguais." << endl;

	cout << "Soma: " << val1 + val2 << endl
		<< "Diferenca: " << val1 - val2 << endl
		<< "Media: " << (float)(val1 + val2) / 2 << endl;

	system("pause");
}