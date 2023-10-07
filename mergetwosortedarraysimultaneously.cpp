//Taking two sorted array and merge and sort them simultaneously in c++

#include<bits/stdc++.h>
using namespace std;

//Global variable declaration

int n1,n2,n3;
int i=0,j=0,k=0;

int main(void)
{
    int a[1000],b[1000],c[2000];

    cout << "Enter the size of first array:";
    cin >> n1;
    cout << "Enter the elements of first array:";
    for(i=0;i<n1;i++)
    {
        cin >> a[i]; 
    }

    cout << "Enter the size of second array:";
    cin >> n2;
    cout << "Enter the elements of second array:";
    for(i=0;i<n2;i++)
    {
        cin >> b[i]; 
    }

    n3=n1+n2;

    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            c[k++]=a[i++];
        }
        else c[k++]=b[j++];
    }

    while(i<n1)
    {
        c[k++]=a[i++];
    }

    while(j<n2)
    {
        c[k++]=b[j++];
    }

    cout << "Final array after merging: ";
    for(i=0;i<n3;i++)
    {
        cout << c[i] << " " ;
    }
    return 0;
}