// Tyuiu.AramaAG.CoursControl_0.Console.Task2.V1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "..//Tyuiu.AramaAG.CoursControl_0.StaticLib.Task2.V1/Tyuiu.AramaAG.CoursControl_0.StaticLib.Task2.V1.cpp"
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Введите целое значение числа x =  ";
    int x, y, z;
    cin >> x;
    cout << "Введите целое значение числа y =  ";
    cin >> y;
    cout << "Введите целое значение числа z =  ";
    cin >> z;
    ISprint0Task8V2* rezult = new Service();
    int c = rezult->Rezultat(x, y, z);
    cout << "Значение выражеия 5+((2*x-z)/(3+y^2)) = " << c;
}
