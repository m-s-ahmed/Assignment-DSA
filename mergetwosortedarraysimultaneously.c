//Doing merge two sorted array in c 
//Remember we are taking two sorted array and then merge those arrays and sort them simultaneously .
#include<stdio.h>

//int i,j,k;//global variable declaration 
//int n1,n2,n3;//global variable declaration 

int main(void)
{
    int n1,n2,n3;
    int a[1000], b[1000], c[2000];


    printf("Enter the size of first array:");
    scanf("%d",&n1);
    printf("Enter the array element: ");
    for( int i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }


    printf("Enter the size of second array:");
    scanf("%d",&n2);
    printf("Enter the array element: ");
    for( int i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }


    n3=n1+n2;
    
     int i=0,j=0,k=0;

    //This loop will run till a or b is completely traversed 
    while(i<n1 && j<n2)
    {
        //Taking the smallest one 
        if(a[i]<b[j])
        {
            c[k++]=a[i++];  /* Here , as soon as we copy an element in c 
                                array.Then we increment the iterator so that the  next element is coppied at next index in c array.*/
                            
                            //when we copy an element form a to c , we increment i also because now we will compare with the next element of a.
        }
        else
        {
            c[k++]=b[j++];
        }
    }

    // copying the leftover element ,if any

    while(i<n1)
    {
        c[k++]=a[i++];
    }

    // copying the leftover element , if any

    while(j<n2)
    {
        c[k++]=b[j++];
    }

    printf("Final array after merging: ");
    //print the sorted arrays
    for(int i=0;i<n3;i++)
    {
        printf("%d",c[i]);
    }
    return 0;



     
}