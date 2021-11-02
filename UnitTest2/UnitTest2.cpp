#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6_1_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int t;
			const int n = 6;
			int a[n] = { 9, 8, 7, 6, 5, 4 };
			t = Number(a, n, 0, 0);
			Assert::AreEqual(3, t);
		}
	};
}
