// Tyuiu.AramaAG.CoursControl_0.StaticLib.Task1.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include "..//Tyuiu.CoursControl_0/Tyuiu.CoursControl_0.cpp"

class  Service : public ISprint0Task8V0
{
	virtual int Control(int a) override
	{
		int s1 = a / 100;
		int s2 = a / 10 % 10;
		int s3 = a % 10;
		return s1 * s2 * s3;
	}
};