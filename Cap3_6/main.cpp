#include <iostream>
using namespace std;

int main()
{
	int val1 = 0, val2 = 0, val3 = 0, maior, menor;

	maior = val1;
	menor = val1;

	cout << "Entre com tres valores inteiros: ";
	cin >> val1 >> val2 >> val3;

	if (val1 <= val2 && val2 <= val3)
		cout << "A sequencia em ordem crescente eh: " << val1 << ", " << val2 << ", " << val3 << endl;
	else if (val3 <= val2 && val2 <= val1)
		cout << "A sequencia em ordem crescente eh: " << val3 << ", " << val2 << ", " << val1 << endl;
	else if (val1 <= val3 && val3 <= val2)
		cout << "A sequencia em ordem crescente eh: " << val1 << ", " << val3 << ", " << val2 << endl;
	else if (val3 <= val1 && val1 <= val2)
		cout << "A sequencia em ordem crescente eh: " << val3 << ", " << val1 << ", " << val2 << endl;
	else if (val2 <= val3  && val3 <= val1)
		cout << "A sequencia em ordem crescente eh: " << val2 << ", " << val3 << ", " << val1 << endl;
	else if (val2 <= val1 && val1 <= val3)
		cout << "A sequencia em ordem crescente eh: " << val2 << ", " << val1 << ", " << val3 << endl;

	system("pause");
}