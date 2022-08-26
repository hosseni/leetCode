#include <stdio.h>
/*

int searchInsert(int* nums, int numsSize, int target){
    int counter = 0;
    for (counter = 0; counter < numsSize ; counter ++)
    {
        if (nums[counter] >= target)
            return counter;
    }

    return numsSize;
}
*/


int searchInsert(int* nums, int numsSize, int target){
    int counter = 0;
    for (counter = 0; counter < numsSize ; counter ++)
    {
        if (*(nums+counter) == target) { return counter;}
        else if ((target < *(nums+counter+1)) && (target > *(nums+counter))) { counter +=1; return counter;}
    }

    return counter;
}

int main(int argc, char const *argv[])
{
    int arr [] = {1,3,5,6};
    int result = searchInsert(arr, 4, 5);
        printf("%d", result);
    return 0;
}
