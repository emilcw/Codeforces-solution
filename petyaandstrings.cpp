#include<iostream>
#include<string>
//#include <boost/algorithm/string.hpp>
using namespace std;

int main(){
    // Read in 
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    
    for (int i = 0; i < s1.length(); i++)
    {
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }
    
    if(s1 == s2){
        cout << 0;
    }

    for (int i = 0; i < s1.length(); i++){
        if(s1[i] != s2[i]){
            if(s1[i] < s2[i]){
                cout << -1;
                break;
            }else{
                cout << 1;
                break;
            }
        }
    }
    
    return 0;
}