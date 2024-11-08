#include "Utils.h"
#include <iostream>
void reverse(int* nums, unsigned int size)
{
	for (int i = 0; i < size/2 ; i++)
	{
		int temp = nums[i];
		nums[i] = nums[size - 1 - i];
		nums[size - 1 - i] = temp;
	}
}
int* reverse10()
{
	int* nums = new int[10];
	for (int i = 9; i >= 0; i--)
	{
		std::cout << "Enter the " << 10 - i << "number: " << std::endl;
		std::cin >> nums[i];
	}
}