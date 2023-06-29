
#include<stdio.h>
 
// hello
int div(int,int);
 
int main()
{
    int a,b;
    printf("\nEnter The Value of A & B : ");
    scanf("%d%d",&a,&b);
    
    div(a,b); 
    return 0;
}

int div(int x,int y)  
{
    int c;
    c=x+y;
    printf("\nTotal : %d",c);
}