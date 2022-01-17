//palindrome or not
#include<bits/stdc++.h>
using namespace std;
/*int main()
{
    string str,temp_str;
    getline(cin.str);

    for(int i= str.size()-1 ; i>=0 ;i--){
        temp_str.push_back(str[i]);
    }

    if(temp_str==str){
        cout<<"Palindrome String";
    }
    else{
        cout<<"NOn Palindrome String";
    }
    return 0;
}*/

int main()
{
    string str;
    getline(cin,str);

    for(int i=0;i<(str.size())/2 ;i++){
        if(str[i] != str[str.size()-1-i]){
            cout<<"Non Palindrome String";                     //only valid for even length strings
            break;
        }
        else if( i == (str.size()-1)/2){
            cout<<"Palindrome String";
        }
    }
    return 0;
}