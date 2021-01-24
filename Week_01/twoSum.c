

/**
 * 给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 的那 两个 整数，并返回它们的数组下标。

你可以假设每种输入只会对应一个答案。但是，数组中同一个元素不能使用两遍。

你可以按任意顺序返回答案。

 */

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i;
    int j;
    int *result=NULL;
    for(i=0;i<numsSize;i++)
    {
        for(j=i+1;j<numsSize;j++)
        {
            int sum;
            sum=nums[i]+nums[j];
            if(sum==target)
            {
                result=(int*)malloc(sizeof(int)*2);
                result[0]=i;
                 result[1]=j;
                 *returnSize=2;
                 return result; 
            }
        }
    }

    return result;
}