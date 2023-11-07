//Selection , Bubble and insertion sort together

#include<stdio.h>
#include<stdbool.h>

//swap function 

void swap (int *a,int *b)
{
    int temp=*a;
        *a=*b;
        *b=temp;
}

// print function 

void printarray(int ara[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d",ara[i]);
        printf("\n");
    }
}

//selection sort

void selectionsort(int ara[],int n)
{
    int i,j,min;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(ara[min]>ara[j])
            {
                min=j;
            }
        }
        if(min != i)
        {
            swap(&ara[min], &ara[i]);
        }
    }
}

//Bubble Sort

void bubblesort(int ara[], int n)
{
    int i,j;
    bool swapped;
    for(i=0;i<n-1;i++)
    {
        swapped=false;
        for(j=0;j<n-i-1;j++)
        {
            if(ara[j]>ara[j+1])
            {
                swap(&ara[j], &ara[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
        {
            break;
        }
    }
}

void insertionsort(int ara[], int n)
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



int  main(void)
{

     int i,n,size;
    int ara[1000];

    printf("Enter the size of an array : ");
    scanf("%d",&size);

    printf("Enter the element of an array : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&ara[i]);
    }

    printf("1:Selection Sort\n");
    printf("2:Bubble Sort\n");
    printf("3: Insertion Sort\n");
    printf("Choose the method which one you want to use: ");
    scanf("%d",&n);

    switch(n)
    {
        //for selecetion sort
        case 1: selectionsort(ara,size);
                printarray(ara,size);
                break;
        
        //for bubble sort
        case 2: bubblesort(ara,size);
                printarray(ara,size);
                break;

        //for insertion sort
        case 3: insertionsort(ara,size);
                printarray(ara,size);
                break;


        default: printf("Choosing value is Wrong.Choose the correct one.");
                break;
    }
    return 0;
    
    
}
