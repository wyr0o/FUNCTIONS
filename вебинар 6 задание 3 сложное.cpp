#include <iostream>
#include <Windows.h>

using namespace std;

long long fibonacciopt(int n) {
    if (n <= 1) {
        return n;
    }

    long long a = 0;
    long long b = 1;
    long long temp =0;

    for (int i = 2; i <= n; ++i) {
        temp = a + b;
        a = b;
        b = temp;
    }

    return b;
}

int main() {
    SetConsoleOutputCP(1251);

    int num;
    cout << "Введите число: ";
    cin >> num;

    cout << "Числа Фибоначчи (opt): ";
    for (int i = 0; i <= num; ++i) {
        cout << fibonacciopt(i) << " ";
    }
    cout << std::endl;

    return 0;
}