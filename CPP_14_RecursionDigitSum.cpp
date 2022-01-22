#include<bits/stdc++.h>
using namespace std;
int digit_sum(int n)
{
    if(n==0){
        return 0;
    }
    else{
        int last_digit = n % 10;
        int cp = digit_sum(n/10);
        int bp = last_digit + cp;
        return bp;
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<digit_sum(n);
    return 0;
}