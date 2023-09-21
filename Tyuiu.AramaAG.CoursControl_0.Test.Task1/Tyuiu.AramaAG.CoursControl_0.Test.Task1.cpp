#include "pch.h"
#include "CppUnitTest.h"
#include "..//Tyuiu.AramaAG.CoursControl_0.StaticLib.Task1/Tyuiu.AramaAG.CoursControl_0.StaticLib.Task1.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuAramaAGCoursControl0TestTask1
{
	TEST_CLASS(TyuiuAramaAGCoursControl0TestTask1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task8V0* rezult = new Service();
			int a = 245;
			int c = rezult->Control(a);
			Assert::AreEqual(40, c);
		}
	};
}
