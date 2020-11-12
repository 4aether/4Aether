#include <iostream>
#include <cmath>

using namespace std;

<<<<<<< HEAD
double my_pow(double ch, int stepen) {
=======
double my_pow(double ch, unsigned int stepen) {
>>>>>>> feature_fast
	ch = pow(ch, stepen);
	return ch;
}

int main()
{
	double ch;
	int stepen;
	cin >> ch;
	cin >> stepen;

	ch = my_pow(ch, stepen);
	cout << ch;
	return 0;
}