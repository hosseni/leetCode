int strStr(char *haystack, char *needle)
{
    int len_of_haystack = strlen(haystack);
    int len_of_needle   = strlen(needle);
    int i = 0, j = 0;

    if (len_of_needle == 0) {return 0;}// return 0 if the needle is empty
    if (len_of_haystack == 0) { return -1;}// return -1 if haystack is empty that mean needle not in haystack
    
    for (i = 0; i < len_of_haystack; i++)
    {
        if (haystack[i] == needle[0])
        {
            for (j = 1; j < len_of_needle; j++)
            {
                if (haystack[i + j] != needle[j]){break;}
            }

            if (j == len_of_needle){return i;}
        }
    }
    return -1; // return -1 if needle is not part of haystack.
}
