#include "pch.h"

//iterative solution
//TC = O(log(n)) | SC = O(1)
int binarySearchIterative(std::vector<int> arr, int target)
{
	int leftPointer = 0, rightPointer = arr.size() - 1;
	while (leftPointer <= rightPointer)
	{
		int middlePointer = std::floor((leftPointer + rightPointer) / 2);
		int potentialMatch = arr[middlePointer];
		if (target == potentialMatch)
		{
			return middlePointer;
		}
		else if (target < potentialMatch)
		{
			rightPointer = middlePointer - 1;
		}
		else
		{
			leftPointer = middlePointer + 1;
		}
	}
	return -1;
}

TEST(BinSearTests, TestCaseOne)
{
	std::vector<int> arr = { 0, 1, 21, 33, 45, 45, 61, 71, 72, 73 };
	int output = binarySearchIterative(arr, 33);
	EXPECT_EQ(3, output);
}
#if 0
TEST(BinSearTests, TestCaseTwo)
{

}

TEST(BinSearTests, TestCaseThree)
{

}

TEST(BinSearTests, TestCaseFour)
{

}

TEST(BinSearTests, TestCaseFive)
{

}

TEST(BinSearTests, TestCaseSix)
{

}

TEST(BinSearTests, TestCaseSeven)
{

}

TEST(BinSearTests, TestCaseEight)
{

}

TEST(BinSearTests, TestCaseNine)
{

}

TEST(BinSearTests, TestCaseTen)
{

}

TEST(BinSearTests, TestCaseEleven)
{

}

TEST(BinSearTests, TestCaseTwelve)
{

}

TEST(BinSearTests, TestCaseThirteen)
{

}

TEST(BinSearTests, TestCaseFourteen)
{

}

TEST(BinSearTests, TestCaseFifteen)
{

}

TEST(BinSearTests, TestCaseSixteen)
{

}

TEST(BinSearTests, TestCaseSeventeen)
{

}
#endif
int main(int argc, char** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}