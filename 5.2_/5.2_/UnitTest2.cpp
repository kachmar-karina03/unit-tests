

#include "pch.h"
#include "CppUnitTest.h"
#include "../5.2_/5.2_.cpp"
//#include "../5.2_/5.2_.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
    TEST_CLASS(UnitTest2)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            int t=0;
            t = A(2, 2, 2);
            Assert::AreEqual(t, 1);
        }
    };
}