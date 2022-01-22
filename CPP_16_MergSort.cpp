#include<bits/stdc++.h>
using namespace std;
int merg(int a[],int lb,int mid,int ub)
{   
    int b[10];
    int i=lb;
    int j=mid+1;
    int k=lb;
    while(i<=mid && j<=ub){
        if(a[i] < a[j]){
            b[k]=a[i];
            i++;
            k++;
        }
        else{
            b[k]=a[j];
            j++;
            k++;
        }
    }
    if(j>ub){
        while(i<=mid){                //if second array fill than condition for 1 array to be copied
            b[k]=a[i];
            i++;
            k++;
        }
    }
    else if(i>mid){
        while(j<=ub){
            b[k]=a[j];
            j++;
            k++;
        }
    }
    for(int i=lb;i<k;i++){
        a[i]=b[i];
    }
}
int mergsort(int a[],int lb,int ub)
{
    if(lb < ub){
        int mid = (lb + ub)/2;
        mergsort(a,lb,mid);               //formation of array 1
        mergsort(a,mid+1,ub);             //formation of array 2
        merg(a,lb,mid,ub);                //function of merging array
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int lb=0;
    mergsort(a,lb,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}