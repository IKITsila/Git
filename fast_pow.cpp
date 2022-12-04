#include <iostream>

using namespace std;

double fast_pow(double num, unsigned int power) {
	if (power == 0) {
		return 1;
	}

	if (power % 2 == 0){
		return fast_pow(num * num, power / 2);
	}

	return num * fast_pow(num, power - 1);
}

int main()
{
	double num;
	unsigned int power;

	cin >> num >> power;
	double res = fast_pow(num, power);
	cout << res;
	

	return 0;
}
