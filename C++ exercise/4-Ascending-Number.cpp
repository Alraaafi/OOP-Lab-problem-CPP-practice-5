#include<bits/stdc++.h>
using namespace std;
int main() {
    int a[10],i,j,n,m=0;
    cout<<"Enter 10 random numbers: ";
    for(i=0; i<10 ; i++)
    cin>>a[i];

    cout<<"Unsorted numbers: ";
    for(i=0; i<10 ; i++)
    cout<<a[i]<<" ";
cout<<endl;

    //to using selection sort:
    for(i=0; i<9 ; i++)
    {
        m = i;
        for(j=i; j<10; j++)
        {
            if(a[m]<a[j])
                m = j;
        }
        swap(a[m],a[i]);
    }

    cout<<"sorted numbers: ";
    for(i=0; i<10 ; i++)
    cout<<a[i]<<" ";
cout<<endl;

}