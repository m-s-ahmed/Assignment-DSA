//Taking two random arrays and merge them. Also sort them using any sorting method.
#include<stdio.h>
int main(void)
{
    int n1,n2,n3;
    int i,j,k;
    int a[1000],b[1000],c[2000];

    printf("Enter the size of first array:");
    scanf("%d",&n1);
    printf("Enter the elements of first array: ");
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the size of second array: ");
    scanf("%d",&n2);
    printf("Enter the elements of second array: ");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }

    n3=n1+n2;

    for(i=0;i<n1;i++)
    {
        c[i]=a[i];
    }

    for(i=0;i<n2;i++)
    {
        c[i+n1]=b[i];
    }

//Doing selection sort

    for(i=0;i<n3-1;i++)
    {
        for(j=i+1;j<n3;j++)
        {
            if(c[i]>c[j])
            {
                int temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    
    printf("Final sorted array is : ");
    for(i=0;i<n3;i++)
    {
        printf("%d ",c[i]);
    }

    return 0;



}