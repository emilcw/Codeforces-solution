#include<iostream>
using namespace std;
int main(){
    int n, a, last_one, counter = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if(i == 0){
            last_one = a;
        }
        if(a != last_one){
            counter++;
        }
        last_one = a;
    }
    counter++;
    cout << counter;
    return 0;
}