#include <iostream>
#include <Windows.h>

using namespace std;

long long fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    SetConsoleOutputCP(1251);

    int num = 0;
    cout << "Введите число: ";
    cin >> num;

    cout << "Числа Фибоначчи : ";
    for (int i = 0; i < num; ++i) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}