#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();                //cin.ignore() set the cursor to the new lines
    while(n--){
        string str;
        getline(cin,str);        //takes whole line as an input 
        cout<<str<<endl;
    }
    return 0;
}