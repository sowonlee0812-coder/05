
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[])
{
    
    int x;
    int i;
    int sum=0;
    
    printf("Input an number : ");
    scanf("%d", &x);
    
    for(i=1;i<=x;i++)
        sum = sum + i;
    
    printf("sum is %i\n", sum);
   
    
    system("PAUSE");
    return 0;
    
}
