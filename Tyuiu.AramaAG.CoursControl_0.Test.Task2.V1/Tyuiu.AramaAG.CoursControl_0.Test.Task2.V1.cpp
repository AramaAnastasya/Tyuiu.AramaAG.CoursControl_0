#include "pch.h"
#include "CppUnitTest.h"
#include "..//Tyuiu.AramaAG.CoursControl_0.StaticLib.Task2.V1/Tyuiu.AramaAG.CoursControl_0.StaticLib.Task2.V1.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuAramaAGCoursControl0TestTask2V1
{
	TEST_CLASS(TyuiuAramaAGCoursControl0TestTask2V1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task8V2* rezult = new Service(); 
			int x = 4;
			int y = 2;
			int z = 1;
			int c = rezult->Rezultat(x, y, z);
			Assert::AreEqual(6, c);
		}
	};
}
