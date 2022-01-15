//program to reverse an string with two different methods//
#include<iostream>
using namespace std;
/*int main()
{
    string str;
    getline(cin,str);
    string rev_string;
    for(int i= str.size()-1 ; i>=0 ; i--){        
        rev_string+=str[i];                     //more time complexity
    }
    cout<<rev_string<<endl;
    return 0;
}*/



int main()
{
    string str;
    getline(cin,str);
    string empty_string;
    for(int i= str.size()-1 ; i>=0 ;i--){
        empty_string.push_back(str[i]);              //push back fucntion pushes the char at last position of the string//
    }

    cout<<empty_string;
    return 0;
}