#include "Auxil.h"
#include <ctime>
#include <iostream>
#include <locale>
#include <vector>

#define CYCLE 1000000

using namespace auxil;
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    cout << "������� 1: ������������ ��������� ��������� �����" << endl;

    start();

    double random_double = dget(0.0, 1.0);
    cout << "��������� �������������� ����� (0.0 - 1.0): " << random_double << endl;

    int random_int = iget(1, 10);
    cout << "��������� ����� ����� (1 - 10): " << random_int << endl;

    cout << endl << "������� 2: ����� ����������������� �������� ����������" << endl;

    double av1 = 0, av2 = 0;
    clock_t t1 = 0, t2 = 0;

    start();

    t1 = clock();

    for (int i = 0; i < CYCLE; i++) {
        av1 += static_cast<double>(iget(-100, 100)); 
        av2 += dget(-100, 100);
    }

    t2 = clock();

    cout << endl << "���������� ������:         " << CYCLE;
    cout << endl << "������� �������� (int):    " << av1 / CYCLE;
    cout << endl << "������� �������� (double): " << av2 / CYCLE;
    cout << endl << "����������������� (�.�):   " << (t2 - t1);
    cout << endl << "                  (���):   " << static_cast<double>(t2 - t1) / CLOCKS_PER_SEC;
    cout << endl;

    cout << "������� 3: ������������ ������������ ��������� (���������� ����� ���������)" << endl;

    vector<int> fibonacci_indices = { 20, 25, 30, 35, 40 };
    for (int idx : fibonacci_indices) {
        t1 = clock();
        long long result = fibonacci(idx);
        t2 = clock();
        cout << "��������� (" << idx << "): " << result;
        cout << " | ����� (�.�): " << (t2 - t1);
        cout << " | ����� (���): " << static_cast<double>(t2 - t1) / CLOCKS_PER_SEC;
        cout << endl;
    }

    system("pause");

    return 0;
}