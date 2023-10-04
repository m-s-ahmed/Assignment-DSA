//doing bubble sort using function and pointer
#include<stdio.h>
#include<stdbool.h>//bool use korsi se jonno 

//creating swap function
void swap(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
//creating bubble sort function
void bubblesort(int ara[],int n)
{
    int i,j;
    bool swapped=false;

    for(i=0;i<n-1;i++)//iteration or number of passed indicate 
    {
        for(j=0;j<n-i-1;j++)//compare loop
        {
            if(ara[j]>ara[j+1])
            {
                swap(&ara[j],&ara[j+1]);
                swapped=true;
            }
        }
        
        //ending a jokhn r swap hobe na tokhn iteration loop theke ber hoye jete hobe

        if(swapped==false)
        {
            break;
        }
    }

} 
//crating function for print array 
void printArray(int ara[], int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d, ",ara[i]);
    }
}
//Driver program to test above functions 
int main(void)
{
    /*int ara[]={64,34,25,12,22,11,90};
    int n=sizeof(ara)/sizeof(ara[0]);
    */

     int n;
    scanf("%d",&n);
    int ara[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }

    bubblesort(ara,n);//calling function
    printf("Sorted Array: \n");
    printArray(ara,n);//calling function
    return 0;
    

}