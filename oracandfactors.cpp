#include<iostream>
using namespace std;

int smallestDivisor(int n){
    if(n % 2 == 0){
        return 2;
    }
    for (int i = 3; i*i <= n; i+=2)
    {
        if(n % i == 0){
            return i;
        }
 
    }
    return n;
}

int main(){
    int t;
    long long int n, i, j, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        long long int v;
        for (i = 2; i <= n; i++)
        {
            if(n%i == 0){
                v = i;
                break;
            }
        }
        k--;
        n+=v;
        n+=(2*k);
        cout << n << endl;


       // for (int i = 0; i < k; i++)
       // {
       //     n += smallestDivisor(n);
       //}
       //cout << n << endl;   
       }
    return 0;
}