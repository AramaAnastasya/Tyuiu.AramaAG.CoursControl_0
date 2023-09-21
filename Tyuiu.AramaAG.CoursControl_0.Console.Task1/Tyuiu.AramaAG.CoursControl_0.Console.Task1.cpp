// Tyuiu.AramaAG.CoursControl_0.Console.Task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "..//Tyuiu.AramaAG.CoursControl_0.StaticLib.Task1/Tyuiu.AramaAG.CoursControl_0.StaticLib.Task1.cpp"
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Введите целое трехзначное число  ";
    int a;
    cin >> a;
    ISprint0Task8V0* rezult = new Service();
    int c = rezult->Control(a);
    cout << "Произведение цифр числа " << a << " = " << c;
}


