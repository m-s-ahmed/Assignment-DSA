#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    
    int i,j;
    int ara[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ara[j]<ara[i])
            {
                int temp=ara[j];
                ara[j]=ara[i];
                ara[i]=temp;
            }
        }
    }

    printf("The sorted array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ,",ara[i]);
    }
    return 0;
}