#include <iostream>

using namespace std;

double my_pow(double num, int degree)
{
    if (degree == 0) {
        return 1;
    }

    double res = 1;
    
    if (degree < 0) {
        for (int i = degree; i < 0; i++) {
            res /= num;
        }

    }
    else {
        for (int i = 0; i < degree; i++) {
            res *= num;
        }
    }
    
    return res;
}

int main()
{
    int degree;
    double indicator;

    cin >> indicator >> degree;
    double number = my_pow(indicator, degree);

    cout << number;

    return 0;
}