#include<iostream>
#include <stdlib.h>
using namespace std;


int main(){
    //Takes too long time, better solution can be seen below
    int t,a,b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        cout << ((abs(a-b)+9)/10) << endl;
    }

    /*
    long long t, a, b, i = 0;
    int arr[20000];
    cin >> t;
    int t2 = t;
    while (t--)
    {
        int moves = 0;
        int k1 = 10;
        int k2 = 10;
        cin >> a >> b;
        if(b > a){
            while(b != a){
                a = a + k1;
                if(a > b){
                    a = a - k1;
                    k1--;
                }else{
                    moves++;
                }
                
            }

        }else if(b < a){
            while(b != a){
                a = a - k2;
                if(a < b){
                    a = a + k2;
                    k2--;
                }else{
                    moves++;
                }
            }
        }else{
            //a == b
        } 
        arr[i] = moves;
        i++;
    }
    
    for (int i = 0; i < t2; i++)
    {
        int a = arr[i];
        cout << a << endl;
    }
    */

    return 0;
}