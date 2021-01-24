/**
给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序
**/

void moveZeroes(int* nums, int numsSize){
    int j=0;
    int i=0;

    if(numsSize<=1)//排除特殊情况
    {
        if(nums[0]==0)
        {

        }
    }
    else
    {

        if(nums[0]==0)
        {
            j=0;
        }
        else
        {
            j=1;
            i++;
        }

        for(;j<numsSize;j++)//双指针法将非零元素移到左侧
        {
            if(nums[j]!=0)
            {
                nums[i]=nums[j];
                i++;
            }
        }
        int k;

        if(i!=0)//将剩下元素置零
        {
            for(k=numsSize-1;k>=i;k--)
            {
                nums[k]=0;
            }
        }
    }
}