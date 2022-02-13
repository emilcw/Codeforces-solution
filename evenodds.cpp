#include<iostream>
using namespace std;
// Code works but way to slow when n,k is big (10^12)

int main(){

    long long n, k;
    cin >> n >> k;
    if(k <= (n+1)/2){
        cout << k*2 - 1<< endl;
    }else{
        cout << (k -(n+1)/2)*2 << endl;
    }

    /*
    int n, k, j = 1;
    bool countOdd = true;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        if(countOdd){
            if(i % 2 != 0){
                if(j == k){
                    cout << i << endl;
                    return 0;
                }
                j++;
            }
        }

        if(i >= n){
            countOdd = false;
            i = 1;
        }

        if(!countOdd){
            if(i%2 == 0){
                if(j == k){
                    cout << i << endl;
                    return 0;
                }
                j++;
            }
        }
    }
    */
    return 0;
}