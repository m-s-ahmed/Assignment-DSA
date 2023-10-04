//doing bubble sort easier way

#include<stdio.h>
int main(void)
{   //taking array size
    int n;
    scanf("%d",&n);

    int i, ara[n];
    //taking array elements 
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }

    //iteration ar jonno counter variable nilam
    // less than n manei bujhasse n-1 porjonto, karon n obdi to jabe na

    int counter=1;
    while(counter<n)
    {
        for(i=0;i<n-counter;i++)//n-counter manei n-i porjonto compare hobe
        {
            if(ara[i]>ara[i+1])
            {
                int temp=ara[i];
                ara[i]=ara[i+1];
                ara[i+1]=temp;
            }
        }
        counter++;
    }

    //loop for printing array element 

    printf("The sorted element is : ");
    for(i=0;i<n;i++)
    {
        printf("%d, ",ara[i]);
    }
    return 0;

}