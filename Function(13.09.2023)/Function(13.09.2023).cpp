#include <iostream>
using namespace std;

template <typename T > T Task1(T Z, T X, T C) //Task1
{
    return (Z + X + C) / 3;
}

template<typename T> //Task2
void Task2(T a,T b)
{
    if (a == 0)
    {
        cout << "No root" << endl;
        return;
    }
    
    cout << -b / a << endl;
}

template<typename T>
void Task2(T a,T b,T c)
{
    int D = b * b - 4 * a * c;

    if (D < 0)
    {
        cout << "No roots" << endl;
        return;
    }
    cout << "x1 = " << (-b - sqrt(D)) / (2 * a) << endl;
    cout << "x2 = " << (-b + sqrt(D)) / (2 * a) << endl;
}

double Task3(double num, int round)
{
    if (round < 0)
    {
        cout << "Cant be round this number" << endl;
        return num;
    }
    int counter = (pow(10, round) * num);
    return counter / pow(10, round);
}

int main()
{
    ////Task1 Написать шаблон функции для поиска среднего арифметического значений массива.  
    cout << Task1(10,21,33) << endl;
    //Task2Написать перегруженные шаблоны функций для нахождения корней линейного (a*x + b = 0) и квадратного (a*x*x+b*x + c = 0) уравнений.
    //Примечание: в функции передаются коэффициенты уравнений.
    Task2(4, 8);
    Task2(4,4,1);
    //Task3 Написать функцию, которая принимает в качестве параметров вещественное число и количество знаков после десятичной точки, которые должны остаться.
    //Задачей функции является округление вышеуказанного вещественного числа с заданной точностью.
    cout << Task3(3.1412, 1) << endl;


}
