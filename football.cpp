#include<iostream>
#include<string>
using namespace std;

int main(){
    int one_in_row = 0, zero_in_row = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        char player = s[i];
        if(player == '0'){
            zero_in_row++;
            one_in_row = 0;
        }else{
            one_in_row++;
            zero_in_row = 0;
        }

        if(one_in_row == 7 || zero_in_row == 7){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}