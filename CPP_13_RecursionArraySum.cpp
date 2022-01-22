#include<bits/stdc++.h>
using namespace std;

int sum(int a[],int n)
{   if(n<0){
        return 0;
    }
    else{                  //2
        int choti_pro=sum(a,n-1);
        int badi_pro= a[n] + choti_pro;
        return badi_pro;
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
    cout<<sum(a,n-1);
    return 0;
}