#include <stdio.h>
#include <string.h>
unsigned char arr1[] = {"elhosseni gamal nour eldeen"};
unsigned char arr2[] = {"merna ahmed elnaml"};

void *my_memset(void *_dest, int value, unsigned int _byte_len);
void *my_memcpy(void *_dest, const void *scr, unsigned int _byte_len);
void *my_strcat(void *_dest, const void *scr);



int main(int argc, char const *argv[])
{

    return 0;
}

void *my_memset(void *_dest, int value, unsigned int _byte_len)
{
    unsigned char *temp_ptr = _dest;
    if (NULL == temp_ptr)
    {
        printf("\n faild Null pointer");
    }
    else
    {
        while (_byte_len--)
        {
            if (*temp_ptr == ' ')
            {
                *temp_ptr = ' ';
                temp_ptr++;
            }
            else
            {
                *temp_ptr = (unsigned char)value;
                temp_ptr++;
            }
        }
    }

    return _dest;
}

void *my_memcpy(void *_dest, const void *scr, unsigned int _byte_len)
{
    unsigned char *dest_temp = (unsigned char *)_dest;
    const unsigned char *scr_temp = (const unsigned char *)scr;

    if ((dest_temp == NULL) || (scr_temp == NULL))
    {
        printf("faild null pointer \n");
    }
    else
    {
        while (_byte_len--)
        {
            *(dest_temp++) = *(scr_temp++);
        }
    }
    return _dest;
}

void *my_strcat(void *_dest, const void *scr)
{
    unsigned char *dest_temp = (unsigned char *)_dest;
    const unsigned char *scr_temp = (const unsigned char *)scr;
    

    if ((dest_temp == NULL) || (scr_temp == NULL))
    {
        printf("faild null pointer \n");
    }
    
   else
   {
    while (*scr_temp != '\0')    
    {
        *dest_temp = *scr_temp;
        dest_temp++;
        scr_temp++;
    }

    *dest_temp = '\0';
    
   } 
return _dest;
}

