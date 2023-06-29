#include<stdio.h> 
int main()
{
    int a,b,i,j;
      
    for (a = 0; a < 3; a++)
    {
        for (b= 0; b< 3; b++)
        {
            
            if (a== b)
                printf("%d ", 1);
            else
                printf("%d ", 0);
        } 
        printf("\n");
    }
    return 0;
}