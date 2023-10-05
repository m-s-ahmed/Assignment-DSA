//Doing insertion sort

#include<stdio.h>

void insertionSort(int ara[], int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=ara[i];
        j=i-1;
        while(j>=0 && ara[j]>key)
        {
            ara[j+1]=ara[j];
            j--;
        }
        ara[j+1]=key;
    }
}

//creating a printing function

void printArray(int ara[], int size)
{
    int i ;
    for(i=0;i<size;i++)
    {
        printf("%d ,", ara[i]);
    }
}

//Driver code

int main(void)
{
    int ara[]={12,11,13,5,6};
    int n=sizeof(ara)/sizeof(ara[0]);

    insertionSort(ara,n);
    printArray(ara,n);
    return 0;
}