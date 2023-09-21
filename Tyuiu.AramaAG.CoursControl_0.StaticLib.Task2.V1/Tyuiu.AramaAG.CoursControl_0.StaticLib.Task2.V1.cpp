// Tyuiu.AramaAG.CoursControl_0.StaticLib.Task2.V1.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "..//Tyuiu.CoursControl_0/Tyuiu.CoursControl_0.cpp"
#include <math.h>
class  Service : public ISprint0Task8V2
{
	virtual int Rezultat(int x, int y, int z) override
	{
		return 5 + ((2 * x - z) /  (3 + pow(y, 2)));
	}
};
