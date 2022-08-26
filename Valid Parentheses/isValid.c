#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool isValid(char * s){
    int s_len = strlen(s);
    int stack_size = 0;

    char *stack = (char *)malloc(s_len * sizeof(char));
    
    for (int i = 0; i < s_len; i++) {
        char c = s[i];
        if (c == '(' || c == '[' || c == '{') {
            // push onto the stack
            stack[stack_size++] = c;
            if (stack_size > s_len / 2) 
                return false;
        } else {
            // pop from the stack
            if (stack_size == 0) return false; 
            switch (c) {
                case ')':
                    if (stack[--stack_size] != '(') {
                        return false;
                    }
                    break;
                case ']':
                    if (stack[--stack_size] != '[') {
                        return false;
                    }
                    break;
                default:
                    if (stack[--stack_size] != '{') {
                        return false;
                    }
                    break;
            }
        }
    }
    
    free(stack);
    
    return (stack_size == 0);
}
int main(int argc, char const *argv[])
{
    
    char result = 0;
    result = isValid("([)]}");
    printf("%i", result);
    return 0;
}
