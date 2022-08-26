
#include <stdio.h>
#include <string.h>

int lengthOfLastWord(char *s)
{
    char *temp = s;
    char *space = " ";
    int counter = 0;

   while(*s != '\0'){ s++; }
  
    s = s-1;

    while (*(s) == *space)
    {
        s--;
    }

    while (*(s) != *space  )
    {
        if (s == temp){ counter++; break;}
        else{
        s--;
        counter++;
        }
    }

    return counter;
}

int main(int argc, char const *argv[])
{
    char s[] = "aa adsadw ";
    int x = lengthOfLastWord(s);
    printf("\n%d", x);
    return 0;
}
