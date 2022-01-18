//count the number in arary using Hashing 
#include<iostream>
using namespace std;

int E=1e5+10;  // Always 10 mother than the number of elements

int main()
{   
    int hsh[E];
    int N;
    cin>>N;
    int a[N];
    for(int i=0;i<N;i++){                           //Time Complexity: O(N)
        cin>>a[i];
        hsh[a[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        cout<<hsh[n];
    }
    return 0;
}


//count the number in arary using noral method
/* #include<iostream>
using namespace std;

int main()
{   
    int N;
    cin>>N;
    int a[N];
    for(int i=0;i<N;i++){   
        cin>>a[i];
    }

    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        int count=0;     
        for(int i=0;i<N;i++){                            //Time complexity: O(N^2)
            if(n==a[i]){
                count++;
            }
        }
        cout<<count;
    }
    return 0;
} */