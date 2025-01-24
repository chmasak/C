/*
  A
  b C
  D e F
  g H i J 
*/
#include <ctype.h>
#include <stdio.h>
int main() 
{
int i,j,n;
int a=65; //b=98;
printf("Enter a limit: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    for(j=0;j<=i;j++)
    {
        if ((i+j)%2==0)
        {
            printf("%c ",a);
            a++;
        }
        else
        {
            printf("%c ",tolower(a));
            a++;
        }
    }
    printf("\n");   
}
}