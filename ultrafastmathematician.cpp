#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1, s2,res = "";
    cin >> s1 >> s2;
    for (int i = 0; i < s1.length(); i++)
    {
        if(s1[i] != s2[i]){
            res.push_back('1');
        }else{
            res.push_back('0');
        }
    }
    cout << res << endl;

    return 0;
}