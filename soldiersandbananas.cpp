#include <iostream>
#include <string>
using namespace std;

int main(){
    int k, n, w, total_cost = 0, borrow = 0;
    cin >> k >> n >> w;
    for (int i = 0; i < w; i++)
    {
        total_cost += (i+1) * k;
    }
    borrow = total_cost - n;
    if(borrow < 0){
        cout << 0;
    }else{
        cout << borrow;
    }
    return 0;
}