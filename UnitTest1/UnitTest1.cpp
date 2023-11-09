#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_7.1(it) -a/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int rowCount = 3;
			int colCount = 3;
			int** a = new int* [rowCount];
			for (int i = 0; i < rowCount; i++)
				a[i] = new int[colCount];

			
			Create(a, rowCount, colCount, 2, 10);

	
			Assert::AreEqual(7, a[0][0]);
		}
	};
}
