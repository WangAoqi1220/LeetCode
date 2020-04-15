#include<stdio.h> 
int* twoSum(int* nums, int numsSize, int target, int* returnSize){

    int i,k;
    for(i = 0;i < numsSize-1;i++)
    {
        for(k = i+1;k < numsSize;k++)
        {
            if(nums[i]+nums[k]==target)
            {
            	printf("Play\n");
                returnSize[0] = i;
                returnSize[1] = k;
                return returnSize;
            }
        }
	}   
    return 0;
}

void main()
{
	int x[4] = {2,7,11,15};
	int f[2] = {0};
	twoSum(x,4,9,f);
	printf("%d,%d",f[0],f[1]);
	
}
