#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
// You should compile

int main(){
    string w1, w2, mixed, s;
    cin >> w1 >> w2 >> mixed;
    s = w1 + w2;
    sort(s.begin(), s.end());
    sort(mixed.begin(), mixed.end());

    if(s == mixed){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}