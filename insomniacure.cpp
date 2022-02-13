#include<iostream>
using namespace std;

int main(){
    int k, l, m, n, counter = 0;
    long long d;
    cin >> k >> l >> m >> n >> d;
    for (int i = 0; i < d; i++)
    {
        if(d % k == 0){counter++;}
        if(d % l == 0){counter++;}
        if(d % m == 0){counter++;}
        if(d % n == 0){counter++;}
    }
    cout << counter;

    return 0;
}