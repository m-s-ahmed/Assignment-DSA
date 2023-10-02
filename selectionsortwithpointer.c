//doing selection sort using pointer and function 
#include<stdio.h>

// create swap function 

void swap(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

// create selection sort function 

void selectionsort ( int ara[], int n)
{
    int i,j,min;
    
    for(i=0;i<n-1;i++)
    {
        min=i; //taking index
        for(j=i+1;j<n;j++)
        {
            if(ara[j]<ara[min])//compare value kore index set korbo.
            {
                min=j;//taking index
            }
        }

        if(min != i )
        {
            swap(&ara[min], &ara[i]);// as taking pointer , so passing this syntax . actually mean passing address of those arrays .
        }
    }
}

// creating function for print sorted array 

void printarray(int ara[], int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d , ",ara[i]);
    }
}

//driver code for run the program 

int main(void)
{
    int n,i;

    printf("Enter the size of an array : ");
    scanf("%d",&n);

    int ara[n];
    //loop for taking arrays element
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    
    //int size=sizeof(ara)/sizeof(ara[0]);//array ar size pawa jay 
    selectionsort(ara,n);//calling sort function 

    printf("The sorted array is : ");
    printarray(ara,n); //calling print function 

    return 0;
}