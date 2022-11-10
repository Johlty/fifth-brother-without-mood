#include "pch.h"
#include "CppUnitTest.h"
#include "../Project6.4.1/6.4.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest64
{
	TEST_CLASS(UnitTest64)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[3] = { -58 , 74 , 7 };
			int C = 4;
			int t = Count(a, 4, 0);
			Assert::AreEqual(2, t);
		}
	};
}
