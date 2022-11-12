#include <iostream>
using namespace std;

int main()
{
    int n;
    setlocale(0, "");

    cout << "Введите количество чисел: ";
    cin >> n;

    int *numbers = new int[n];
    
    for (int i = 0; i < n; i++) {
        numbers[i] = rand();
        cout << "Записали число в массив: " << numbers[i] << endl;
    }

    cout << numbers;
}