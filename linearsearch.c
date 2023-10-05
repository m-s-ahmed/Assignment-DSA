//Doing linear search 

#include<stdio.h> /*for c++ : #include<bits/stdc++.h>
                              Using namespace std;*/

//creating linear search function 

int linearSearch(int ara[], int size, int key)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(ara[i]==key)
        {
            return i;
        }
    }
    return -1;
}

//Driver program 

int main(void)
{
    int arraySize;
    printf("Enter the array size: ");
    scanf("%d",&arraySize);

    int ara[arraySize];
    int i;
    for(i=0;i<arraySize;i++)
    {
        scanf("%d",&ara[i]);
    }
    
    int key;
    printf("Enter the key value that you want to search: ");
    scanf("%d",&key);

    int result=linearSearch(ara,arraySize,key);

    (result==-1)
                    ?printf("Element is not present in array")
                    :printf("Element is present at index %d",result);

                    return 0;

}