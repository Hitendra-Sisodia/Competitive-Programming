//sum of element of 2d array using prefix sum
#include<bits/stdc++.h>
using namespace std;
int N=1e2+10;


int main()
{   
    // changes made on line 10
    int A[N][N];
    int HitendraOp = 100;
    int sum[N][N];
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){                               //time complexity: O(N^2)
            cin>>A[i][j];
            sum[i][j]= A[i][j] + sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1];       
        }
    }

    int q;
    cin>>q;
    while(q--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<< sum[c][d] - sum[a-1][d] - sum[c][b-1];
    }
    return 0;
}

/* #include<bits/stdc++.h>
using namespace std;
int N=1e3+10;

int main()
{   
    int A[N][N];
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>A[i][j];
        }
    }

    int q;
    cin>>q;
    while(q--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        long long sum=0;
        for(int i=a;i<=c;i++){                                 //time complexity: O(Q*N^2)
            for(int j=b;j<=d;j++){
                sum+=A[i][j];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
} */ 
