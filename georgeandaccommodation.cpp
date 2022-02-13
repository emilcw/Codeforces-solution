#include<iostream>
using namespace std;

int main(){
    int n, p, q, free_spaces = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p >> q;
        if(q-p >= 2){
            free_spaces++;
        }
    }
    cout << free_spaces;



    return 0;
}