#include<iostream>
using namespace std;

int main(){
    int t, a, b, w;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if(a % b == 0){
            cout << 0 << endl;
        }else{
            w = a % b;
            cout << b - w << endl;
        }
    }
    return 0;
}