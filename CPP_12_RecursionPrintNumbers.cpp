#include<bits/stdc++.h>
using namespace std;
int func(int n)
{
    if(n==0){
        return 1;
    }
    else{                   //5
        int shorti_pro=func(n-1); 
        int badi_pro= n * shorti_pro;
        return badi_pro;
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<func(n);
    return 0;
}