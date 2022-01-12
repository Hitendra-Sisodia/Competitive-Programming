#include<bits/stdc++.h>
using namespace std;
int main()
{   
    cout<< 100/1.5 <<endl;
    int a=100/1.5;
    cout<<a<<endl;

    //int range : -10^9 to 10^9
    //long int range : -10^12 to 10^12
    //long long int range : -10^19 to 10^19

    int x=1000000000;
    int y=1000000000;
    cout<< x*1ll*y <<endl;                   //1ll convert int into long long int and avoid error

    double n=100000;
    double m=100000;
    cout<< m*n <<endl;                         // It will print 10e10 because double has no limit as such int for convertting in power of ten we use fixed keyword
    cout<< fixed  <<  m*n <<endl;              // It will print 10000000000.00000 as it is double format
    cout<< fixed << setprecision(0) << m*n;    // It will print 10000000000 as setprecision(0) removes all zero after points
    return 0;
}