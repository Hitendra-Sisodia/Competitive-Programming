//factorial of an number using pre computation 
#include<bits/stdc++.h>
using namespace std;
int N=10e5+10;
int main()
{   
    long long fact[N]; 
    fact[0]=fact[1]=1;               
    for(int i=2;i<=N;i++){              //time complexity: O(N)  
        fact[i]=fact[i-1]*i;            //All values are pre computed and stored in fact[i];
    }
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<fact[n];
    }
    return 0;
}



//factorial of an number using Noraml Method
/* #include<bits/stdc++.h>
using namespace  std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;                                          //Time Complexity: O(N^2)
        int fact=1;
        for(int i=2;i<=n;i++){
            fact=fact*i;
        }
        cout<<fact<<" ";
    }
    return 0;
} */
