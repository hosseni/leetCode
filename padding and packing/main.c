#include <stdio.h>

#pragma pack(4)
typedef struct  
{
    char x;
    long long y;
    char z;
}obj;

#pragma pack(4)

int main(int argc, char const *argv[])
{
    printf("%d\n", sizeof (long long)); 
    printf("%d\n", sizeof (obj));
return 0;
}
