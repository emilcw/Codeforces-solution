#include<iostream>
using namespace std;

int main(){
    int n, k, sum = 0, total = 240, counter = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + 5*i;
        if(sum + k > total){
            break;
        }
        counter++;
    }
    cout << counter << endl;
    return 0;
}