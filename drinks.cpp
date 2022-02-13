#include<iostream>
using namespace std;

int main(){
    int n, p;
    float res;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        res+= p;
    }
    res = res / n;
    cout << res << endl;

    return 0;
}