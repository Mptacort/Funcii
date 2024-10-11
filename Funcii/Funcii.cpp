#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void proverka(int a) {    
    if (a < 0) {
        cout << a << " - число отрицательное" << endl;
    }
    else if (a > 0) {
        cout << a << " - положительное" << endl;
    }
}

void srz(int a, int b) { 
    int srz = (a + b) / 2;
    cout << "Среднее значение = " << srz << endl;
}

void chet_nechet(int a) { 
    if (a % 2 == 0) {
        cout << "Число чётное" << endl;
    }
    else if (a % 2 != 0) {
        cout << "Число нечётное" << endl;
    }
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a;
    cout << "Введите число:" << endl;
    cin >> a;
    proverka(a);

    int b, c;
    cout << "Введите два числа для поиска среднего:" << endl;
    cin >> b >> c;
    srz(b, c);

    int d;
    cout << "Введите число на проверку чётности:" << endl;
    cin >> d;
    chet_nechet(d);
}