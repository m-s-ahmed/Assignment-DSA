//Taking two random arrays and merge them. Also sort them using any sorting method in c++

#include<bits/stdc++.h>
using namespace std;

void mergearray(int ara1[], int ara2[], int n1, int n2, int ara3[])
{
    int i=0,j=0,k=0;
    //traverse the ara1 and insert its element in ara3
    while(i<n1)
    {
        ara3[k++]=ara1[i++];
    }

    //traverse the ara2 and insert its elements in ara3

    while(j<n2)
    {
        ara3[k++]=ara2[j++];
    }

    //sort the whole array
    
    sort(ara3, ara3+n1+n2);
}

//Driver code 
int main(void)
{
    int ara1[]={1,3,5,7};
    int n1=sizeof(ara1)/sizeof(ara1[0]);

    int ara2[]={2,4,6,8};
    int n2=sizeof(ara2)/sizeof(ara2[0]);

    int ara3[n1+n2];

    mergearray(ara1,ara2,n1,n2,ara3);
    cout << "Array after merging ";
    for(int i=0;i<n1+n2;i++)
    {
        cout << ara3[i] << " ";
    }
    return 0;

}