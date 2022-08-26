#include <stdio.h>

int romanToInt(char *s) {
    
    if (*s == '\0') return 0;

        char *temp = s;
        int result = 0;
        int x = 0, y = 0;

        while(*temp != '\0')
        {
            
            switch(*temp) {
        case 'I': x = 1;   break;
        case 'V': x = 5;   break;
        case 'X': x = 10;  break;
        case 'L': x = 50;  break;
        case 'C': x = 100; break;
        case 'D': x = 500; break;
        case 'M': x = 1000;break;
        default:  x = 0;   break;
    }

          switch(*(temp+1)) {
        case 'I': y = 1;   break;
        case 'V': y = 5;   break;
        case 'X': y = 10;  break;
        case 'L': y = 50;  break;
        case 'C': y = 100; break;
        case 'D': y = 500; break;
        case 'M': y = 1000;break;
        default:  y = 0;   break;
    }

    temp ++;
    if (x>=y) { result += x;}
    else {result -= x;}
    
    }
    return result;    
}
int main(int argc, char const *argv[])
{
    
    int y = romanToInt("MCMXCIV");
    printf("%d", y);
    return 0;
}
