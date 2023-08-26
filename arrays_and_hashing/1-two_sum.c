#include <stdio.h>

/**
 * twoSum - return indices of the two numbers
 * @nums: the array
 * @numSize: the size of the given array
 * @target: the targeted number
 * @retrunSize: array of how man elements to be returned
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
	int *array, i, j;
	*returnSize = 2;
	
	array = malloc(sizeof(int) * 2);
	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < numsSize; i++)
	{
		for (j = i + 1; j < numsSize; j++)
		{
			if (nums[i] + nums[j] == target)
			{
				array[0] = i;
				array[1] = j;
				return (array);
			}
		}
	}
	return (-1);

}
