#include "pch.h"
#include "CppUnitTest.h"
#include "dod.h"
#include "var.h"
#include "../lab13.1/dod.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest131
{
	TEST_CLASS(UnitTest131)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			double x = 0;
			double n = 0;
			double a = 1;
			t = dod(x, n, a);

		}
	};
}
