#include "pch.h"
#include "CppUnitTest.h"
#include "../Project6.1.1/6.1.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest611
{
	TEST_CLASS(UnitTest611)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[4] = { -8 , 7 , 3 , 5 };
			int t = count(a, 4);
			Assert::AreEqual(2, t);
		}
	};
}