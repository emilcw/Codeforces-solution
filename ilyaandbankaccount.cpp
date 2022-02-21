#include<iostream>
using namespace std;

int main(){
    long long n, n_without_last, n_without_second_last;
    cin >> n;

    if(n == 0){
        cout << 0 << endl;
        return 0;
    }

    n_without_last = n / 10;
    n_without_second_last = n / 100 * 10 + n % 10;

    if(n > n_without_last && n > n_without_second_last){
        cout << n << endl;
    }else{
        if(n_without_last > n_without_second_last){
            cout << n_without_last << endl;
        }else{
            cout << n_without_second_last << endl;
        }
    }

    return 0;
}