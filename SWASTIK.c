#include <stdio.h>
int main()
{
    int row;
    printf("Enter rows:");
    scanf("%d",&row);
    int mid=(row/2)+1;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            if((j==mid) || (i==mid)||
            (i==1&&j<mid)||
            (i==row &&j>mid)||
            (j==1&&i>mid)||
            (j==row && i<mid))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }return 0;
}