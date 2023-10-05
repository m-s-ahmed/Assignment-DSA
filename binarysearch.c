#include<stdio.h>
int binarySearch(int ara[], int low, int high, int key)
{
    while(low<=high)
    {
        int mid=low+(high-low)/2; //middle point ar index mean korse

        //check if key is present at mid

        if(ara[mid]==key)
        {
            return mid;
        }

        //If key is greater than mid , ignore left half

        if(ara[mid]<key)
        {
            low=mid+1;
        }

        //If key is less than mid, ignore right half

        else
        {
            low=mid-1;
        }
    }
    //If we reach here , then element was not present 

    return -1;

}
//Driver code 

int main(void)
{
    int ara[]={10,20,30,40,50,-6,70,80};
    int key=-6;
    int n=sizeof(ara)/sizeof(ara[0]);
    int result = binarySearch(ara,0,n-1,key);

    (result== -1)
                ?printf("Element is not present in array.")
                :printf("Element is present at index %d",result);

                return 0;
}