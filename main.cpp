// github1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

double my_pow(double num, unsigned int iter) {
    double tempnum = num;
    for (unsigned int j = 0; j < iter; j++) {
        tempnum = tempnum * num;
    }
    return tempnum;
}

int main()
{
    int y; double x;
    cin >> x>>y;
    cout << my_pow(x, y);
}

