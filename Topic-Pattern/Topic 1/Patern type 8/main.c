#include<stdio.h>
int main()
{ while(1)
{
     int n,row,col;
    printf("Enter the n: ");
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("   %c", col+64);
        }
        printf("\n\a");
    }
    getch();
}
}
