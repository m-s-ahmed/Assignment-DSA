#include<stdio.h>
int main(void)
{
    int ara[10];
    int i;

    printf("Enter the ten value of an array: \n");

    //scanning array element

    for(i=0; i<10;i++)
    {
        printf("The %d element of an array is : ",i+1);
        scanf("%d",&ara[i]);
    }

    //printing array element

    for(i=0;i<10;i++)
    {
        printf("\n");
        printf("The %d element of ar array is %d\n ",i+1,ara[i]);
    }

    return 0;

}
