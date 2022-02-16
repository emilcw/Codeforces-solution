#include<iostream>
using namespace std;

int main(){
    int n, m, res;
    cin >> n >> m;
    if(n > m){
        res = m;
    }else{
        res = n;
    }

    if(res % 2 == 0){
        cout << "Malvika" << endl;
    }else{
        cout << "Akshat" <<endl;
    }
    return 0;
}