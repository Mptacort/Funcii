#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int poloj(int a) {
     if (a > 0) {
        return a;
    }
}
int otr(int a)
{
    if (a < 0) {
        return a;
    }
}
int srz(int a, int b) 
{ 
    int srznach = (a + b) / 2;
    return srznach;
}

int chet(int a) 
{ 
    if (a % 2 == 0) {
        return 0;
    }
    else if (a % 2 != 0) {
        return 1;
    }
}

int nechet(int a)
{
     if (a % 2 != 0) {
        return 1;
    }
}

int sum(int a, int b) 
{
    return a + b;
}

int raznost(int a, int b) 
{
    return a - b;
}

int proiz(int a, int b) 
{
    return a * b;
}

float delenie(float a, float b) 
{
    return a / b;
}

int Min(int a, int b) 
{
    if (a < b) {
        return a;
    }
    else {
        return 0;
    }
}

int Max(int a, int b) 
{
    if (a > b) {
        return a;
    }
    else {
        return 0;
    }
}


int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a;
    cout << "Введите число на проверку положотильного:" << endl;
    cin >> a;
    cout << poloj(a) << endl;

    int b;
    cout << "Введите число на проверку отрицательного:" << endl;
    cin >> b;
    cout << otr(b) << endl;

    int d, c;
    cout << "Введите два числа для поиска среднего:" << endl;
    cin >> d >> c;
    cout << srz(d, c) << endl;

    int l;
    cout << "Введите число на проверку чётности:" << endl;
    cin >> l;
    cout << chet(l) << endl;

    int p;
    cout << "Введите число на проверку нечётности:" << endl;
    cin >> p;
    cout << nechet(p) << endl;

    int f, e;
    cout << "Введите числа для арифметических операций:" << endl;
    cin >> f >> e;
    cout << "Сумма = " << sum(f, e) << endl;
    cout << "Разность = " << raznost(f, e) << endl;
    cout << "Произведение = " << proiz(f, e) << endl;
    cout << "Частное = " << delenie(f, e) << endl;

    int g, h;
    cout << "Введите два числа для проверки на минимальную:" << endl;
    cin >> g >> h;
    cout << Min(g, h) << endl;

    int x, z;
    cout << "Введите два числа для проверки на максимальную:" << endl;
    cin >> x >> z;
    cout << Max(x, z) << endl;

}
