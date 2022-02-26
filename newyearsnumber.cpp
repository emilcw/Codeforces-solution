#include<iostream>
using namespace std;


int gcd(int a, int b){
    if(b == 0) 
    return a;
    return gcd(b, a % b);
}

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin>>n;
        long long mod = n % 2020;
        long long div = n / 2020;

        if( mod <= div){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

