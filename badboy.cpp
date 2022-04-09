#include<iostream>
using namespace std;

int main(){
    int t;
    long long n, m, i, j;
    cin >> t;
    while(t--){
        cin >> n >> m >> i >> j;
        if((i == 1 && j == 1) || (i == n && j == m)){
            cout << 1 << " " <<m<< " " <<n<< " " << 1 << " "<<endl; 
        }else{
            cout << 1 << " " << 1 << " " <<n<< " " << m << " "<<endl; 
        }
    }
    return 0;
}