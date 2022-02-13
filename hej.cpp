#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    string b;
    cin >> t;
    while(t--){
        cin >> b;
        string a;
        if(b.length() <= 2){
            cout << b << endl;
        }else{
             for (int i = 0; i < b.length(); i+=2)
        {
           if(i == b.length()-2){
               a.push_back(b[i]);
               a.push_back(b[i+1]);
               break;
            }
            a.push_back(b[i]);
            }
        cout << a << endl;
        }
    }
    return 0;
}