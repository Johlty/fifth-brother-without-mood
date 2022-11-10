#include "pch.h"
#include "CppUnitTest.h"
#include "../Project6.2.1/6.2.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest621
{
	TEST_CLASS(UnitTest621)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			
			int a[3] ={6, 7, 9};
			int b = Max(a, 2);
			Assert::AreEqual(b, b);
		}
	};
}
