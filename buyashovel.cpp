#include<iostream>
using namespace std;

int main(){
    int price, single, counter = 0, i = 0;
    cin >> price >> single;
    bool b = true;
    while(b){
        i++;
        int res = i * price;
        if(res % 10 == 0 || res % 10 == single){
            counter = i;
            break;
        }
    }
    
    cout << counter << endl;
    
    return 0;
}