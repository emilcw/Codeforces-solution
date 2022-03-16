#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t, burles, left;
    cin >> t;
    while(t--){
        int spent = 0;
        cin >> burles;
        while(true){
            int x = (burles/10) * 10;
            spent += x;
            left = burles - x;
            burles = (burles/10) + left;

            if(burles < 10){
                spent += burles;
                break;
            }
        }
        cout << spent << endl;
    }

    return 0;
}


