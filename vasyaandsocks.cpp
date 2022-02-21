#include<iostream>
using namespace std;

int main(){

    int n, m, days;
    cin >> n >> m;

    for (int day = 1; day < 200; day++)
    {
        n--;
        if(day % m == 0){
            n++;
        }
        if(n == 0){
            days = day;
            break;
        }
    }
    cout << days << endl;
    return 0;
}