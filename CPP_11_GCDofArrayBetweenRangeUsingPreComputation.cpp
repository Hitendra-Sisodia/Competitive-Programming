//GCD of numbers using pre computation method for t test cases and number of element in array and q qureys. 
#include<bits/stdc++.h>
using namespace std;
int N=1e5+10;
int main()
{
    int a[N+10];
    int forward[N+10];
    int backward[N+10];
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<n;i++){
            forward[i]=__gcd(forward[i-1],a[i]);                    //Time Complexity: O(T * (N + N + N +Q))
        }                                                                //O(T * N)
        for(int i=n;i>=1;i--){
            backward[i]=__gcd(backward[i+1],a[i]);
        }
        while(q--){
            int L,R;
            cin>>L>>R;
            cout<<__gcd(forward[L-1],backward[R+1]);
        }
    }
    return 0;
}





/* #include<bits/stdc++.h>
using namespace std;
int N=1e5+10;
int main()
{
    int a[N+10];
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }

        while(q--){
            int L,R;
            cin>>L>>R;
            int gcd=0;                      //Time complexity : O( T(N + Q(N)))
            for(int i=1;i<=L-1;i++){               // O(T*N + T*Q*N)
                gcd=__gcd(gcd,a[i]);               // O(N^3)
            }

            for(int j=R+1;j<=n;j++){
                gcd=__gcd(gcd,a[j]);
            }

            cout<<gcd<< endl;
        }
    }
    return 0;
} */