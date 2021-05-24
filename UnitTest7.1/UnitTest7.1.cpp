#include "pch.h"
#include "CppUnitTest.h"
#include "../Project7.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest71
{
	TEST_CLASS(UnitTest71)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			vector<int> u = { -1, 0, 1 };
			auto min = *std::min_element(u.begin(), u.end(), myfn);
			Assert::AreEqual(min, -1);
		}
	};
}
