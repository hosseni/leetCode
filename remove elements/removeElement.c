

int removeElement(int* nums, int numsSize, int val)
{
int i, valid = 0;
   
    
     
    for (i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[valid] = nums[i];
            valid++;
        }
    }


    return valid;
}