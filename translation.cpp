
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    reverse(t.begin(), t.end());
    if (s == t)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

/*
Varför funkar inte det nedan? Jag vet inte

#include<iostream>
#include<string>
#include <stdio.h>
using namespace std;

//Working

int main(){
    string s, t, rev_s = "";
    cin >> s;
    cin >> t;

    if(s.length() != t.length()){
        cout << "NO" << endl;
        return 0;
    }

    if(s.length()==1){
        if(s == t){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        return 0;
    }

    for (int i = s.length(); 0 < i; i--)
    {
        rev_s.push_back(s[i]);
    }

    for (int i = 0; i < s.length(); i++)
    {
        char rev_s_char = rev_s[i]; 
        char t_char = t[i];
    

        if(rev_s_char == t_char){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}


*/