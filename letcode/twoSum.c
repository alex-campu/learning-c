#include <stdio.h>
#include <stdlib.h>

/**  return indices of the two numbers such that they add up to target
 * Input: nums = [2,7,11,15], target = 9
 * Output: [0,1]
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{

    int sum;
    int length = numsSize;
    // {3, 2, 4};
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                int *result = (int *)malloc(2 * sizeof(int));
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0;
    return 0;
}

int main()
{
    int nums[] = {3, 2, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target = 6;
    int returnSize;

    // Call the twoSum function
    int *result = twoSum(nums, numsSize, target, &returnSize);

    // Print the result
    if (result != NULL && returnSize == 2)
    {
        printf("Indices: [%d, %d]\n", result[0], result[1]);
    }
    else
    {
        printf("No solution found.\n");
    }

    // Free the allocated memory
    free(result);

    return 0;
}