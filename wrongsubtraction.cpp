#include<iostream>
#include<string>
using namespace std;

int main(){
    int n, k, last_digit;
    cin >> n >> k;

    for (int i = 0; i < k; i++)
    {
           last_digit = n % 10;
           if(last_digit != 0){
               n = n - 1;
           }else{
               n = n/10;
           }
    }
    cout << n;
    return 0;
}
