#include <iostream>

using namespace std;

double my_pow(double ch, unsigned int stepen) {
	int x = ch;
	for (int i = 1; i < stepen; i++)
		ch = x * ch;
	return ch;
}

int main()
{
	double ch;
	unsigned int stepen;
	cin >> ch;
	cin >> stepen;

	ch = my_pow(ch, stepen);
	cout << ch;
	return 0;
}