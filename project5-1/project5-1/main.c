
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[])
{
    
    int a, b;
    char op;
    int result;
    
    printf("Enter the calculation : ");
    scanf("%i %c %i", &a, &op, &b);
    
    printf("%i %c %i", a, op, b);
    
    switch (op)
    {
        case '+':
            result = a+b;
            break;
            
        case '-':
            result = a-b;
            break;
            
        case '*':
            result = a*b;
            break;
            
        case '/':
            result = a/b;
            break;
            
        default:
            break;
    }
    
    
    printf("= %i", result);
    
    system("PAUSE");
    return 0;
    
}
