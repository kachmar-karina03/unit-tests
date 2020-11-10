#include "pch.h"
#include "CppUnitTest.h"
#include "../5.3_/5.3_.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = f(1);
			Assert::AreEqual(t, 1);
		}
	};
}
