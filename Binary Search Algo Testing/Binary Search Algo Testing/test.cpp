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

TEST(BinSearTests, TestCaseTwo)
{
	std::vector<int> arr = {1, 5, 23, 111};
	int output = binarySearchIterative(arr, 111);
	EXPECT_EQ(3, output);
}

TEST(BinSearTests, TestCaseThree)
{
	std::vector<int> arr = { 1, 5, 23, 111 };
	int output = binarySearchIterative(arr, 5);
	EXPECT_EQ(1, output);
}

TEST(BinSearTests, TestCaseFour)
{
	std::vector<int> arr = { 1, 5, 23, 111 };
	int output = binarySearchIterative(arr, 35);
	EXPECT_EQ(-1, output);
}

TEST(BinSearTests, TestCaseFive)
{
	std::vector<int> arr = { 0, 1, 21, 33, 45, 45, 61, 71, 72, 73 };
	int output = binarySearchIterative(arr, 0);
	EXPECT_EQ(0, output);
}

TEST(BinSearTests, TestCaseSix)
{
	std::vector<int> arr = { 0, 1, 21, 33, 45, 45, 61, 71, 72, 73 };
	int output = binarySearchIterative(arr, 1);
	EXPECT_EQ(1, output);
}

TEST(BinSearTests, TestCaseSeven)
{
	std::vector<int> arr = { 0, 1, 21, 33, 45, 45, 61, 71, 72, 73 };
	int output = binarySearchIterative(arr, 21);
	EXPECT_EQ(2, output);
}

TEST(BinSearTests, TestCaseEight)
{
	std::vector<int> arr = { 0, 1, 21, 33, 45, 45, 61, 71, 72, 73 };
	int output = binarySearchIterative(arr, 45);
	EXPECT_EQ(4, output);
}

TEST(BinSearTests, TestCaseNine)
{
	std::vector<int> arr = { 0, 1, 21, 33, 45, 45, 61, 71, 72, 73 };
	int output = binarySearchIterative(arr, 61);
	EXPECT_EQ(6, output);
}

TEST(BinSearTests, TestCaseTen)
{
	std::vector<int> arr = { 0, 1, 21, 33, 45, 45, 61, 71, 72, 73 };
	int output = binarySearchIterative(arr, 71);
	EXPECT_EQ(7, output);
}

TEST(BinSearTests, TestCaseEleven)
{
	std::vector<int> arr = { 0, 1, 21, 33, 45, 45, 61, 71, 72, 73, 100, 103, 140, 145, 146, 180, 181, 185, 190, 201, 202, 220, 234, 300, 340 };
	int output = binarySearchIterative(arr, 200);
	EXPECT_EQ(-1, output);
}

int main(int argc, char** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}