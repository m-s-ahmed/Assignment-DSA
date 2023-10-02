//create additional function for doing summation,average,find minimum and maximum of an array . 

#include<stdio.h>

//creating a sum function

int sum(int ara[], int size)
{
    int i;
    int summ=0;

    for(i=0;i<size;i++)
    {
        summ=summ+ara[i];
    }
    return summ;
}

//creating a min function 

int min(int ara[],int size)
{
    int minn=ara[0];
    int i;
    for(i=1;i<size;i++)
    {
        if(ara[0]>ara[i])
        {
            minn=ara[i];
        }
    }
    return minn;
}

//creating a max function 

int max(int ara[],int size)
{
    int maxx=ara[0];
    int i;
    for(i=1;i<size;i++)
    {
        if(maxx<ara[i])
        {
            maxx=ara[i];
        }
    }
    return maxx;
}

//Driver code to run the program 

int main(void)
{
    int ara[10]={10,20,30,40,50,60,70,80,90,100};
    int n=sizeof(ara)/sizeof(ara[0]);

    int result=sum(ara,n); //calling sum function and store it to result variable
    float avg=(float)result/n;//doing average 
    int minimum=min(ara,n);//calling min funciton to find the minimum value of an array
    int maximum=max(ara,n);//calling max function to fine the maximum value of an array

    printf("The sum of an array  is %d\n",result);
    printf("The average value of an array is %f\n",avg);
    printf("The minimum value of an array is %d\n",minimum);
    printf("The maximum value of an array is %d\n",maximum);

    return 0;
}
