//fibonacii series using Pre Computation for Q qurey
#include<iostream>
using namespace std;

int N=1e5+10;
int main()
{   
    int fib[N];
    fib[0]=0;                                   //fibonacii series starting with 0 counting
    fib[1]=1;                                   //complexity: O(N)
    for(int i=2;i<=N;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    int  q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        cout<<fib[n]<<" ";
    }
    return 0;
}

//fibonacii series using Noraml method for Q qurey
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        int a=0;
        int b=1;
        int c;
        for(int i=2;i<=n;i++){                        //Time Complexity :O(N^2)
            c=a+b;
            a=b;
            b=c;
        }
        cout<<c;
    }
    return 0;
}*/