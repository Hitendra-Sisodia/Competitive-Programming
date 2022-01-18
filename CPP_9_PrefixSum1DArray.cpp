//Sum Of element in array for q qurey in each qurey taking l and R as input usig prefix sum
#include<bits/stdc++.h>
using namespace std;
int N=1e5+10;
int main()
{   
    int a[N];
    int sum[N];
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){             //while using prefix sum always use 1 base index array               
        int x;                         //Time complexity : O(N)
        cin>>x;
        sum[i]=sum[i-1] + x;                          
    }

    int q;
    cin>>q;
    while(q--){
        int L,R;
        cin>>L>>R;
        cout<< sum[R] - sum[L-1];
    }
    return 0;
}

//Sum Of element in array for q qurey in each qurey taking l and R as input
/* #include<bits/stdc++.h>
using namespace std;
int N=ie5+10;
int main()
{   
    int a[N];
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    int q;
    cin>>q;
    while(q--){
        int L,R;
        cin>>L>>R;
        long long sum=0;
        for(int i=L;i<=R;i++){                         //Time complexity: O(N^2)
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
} */ 