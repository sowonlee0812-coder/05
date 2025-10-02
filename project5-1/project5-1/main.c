
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[])
{
    
    int answer = 59;
    int num;
    int trial=0;
    
    do
    {
        printf("Guess a number : ");
        scanf("%d", &num);
        
        if(num > answer)
            printf("high!\n");
        
        else if (num < answer)
            printf("low!\n");
        
        trial++;
        
    }
    while (num != answer);
    
    printf("Congratulation! trial: %i", trial);
    
    
    system("PAUSE");
    return 0;
    
}
