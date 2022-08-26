    #include <stdlib.h>

    int* plusOne(int* digits, int digitsSize, int* returnSize)
    {

        /*increase size by 1 if first element is 9*/
        int *arr = (int *) malloc (digitsSize * sizeof(int));
        
        for (int i = digitsSize -1 ; i >= 0 ; i--)
        {
            if (digits[i] < 9)
            {
                arr[i] = digits[i] +1;
                for (int j = i-1; j >= 0; j--)
                {
                    arr[j] = digits[j];
                }
                *returnSize = digitsSize;
                return arr;
            }
            else
            {
                arr[i] = 0;
            }
        }
        int *newArray = (int*) malloc((digitsSize+1) * sizeof(int));
            newArray[0] = 1;
            for (int k = 1; k<=digitsSize; k++)
            {
                newArray[k] = 0;
            }
            *returnSize = digitsSize+1;
            return newArray; 
    }