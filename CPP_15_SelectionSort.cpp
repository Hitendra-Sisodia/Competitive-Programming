//selection sorting
#include<bits/stdc++.h>
using namespace std;
int selection_sort(int a[],int n)
{
    for(int i=0;i<n;i++){
        int minindex = i;
        for(int j=i+1;j<n;j++){
            if(a[minindex]>a[j]){                   
                minindex = j;
            }
        }
        swap(a[i],a[minindex]);
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    selection_sort(a,n);
    return 0;
}
