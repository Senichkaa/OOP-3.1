#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP 3.1/Traid.cpp"
#include "../OOP 3.1/Triangle.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UTOOP31
{
	TEST_CLASS(UTOOP31)
	{
	public:
		
		TEST_METHOD(TestMethod2)
		{
			Triangle T(3, 4, 5);
			Assert::AreEqual(T.Square(), 6.0);
		}
	};
}
