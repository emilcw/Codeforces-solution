#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    long long n, time;
    cin >> t;
    while(t--){
        cin >> n;
        long long nr_of_small_pizzas = n / 6; //Antal små pizzor som måste göras för att uppnå behovet
        long long y = n % 6;
        if(n <= 6){
            cout << "15" << endl;
        }else if(y == 0){
            //Antalet slices är jämnt delbart med sex
            //Gör bara sådana pizzor, ty det är snabbast
            cout << nr_of_small_pizzas * 15 << endl;
        }else if(y <= 2){
            //We simply need to add a medium pizza to this 
            cout << nr_of_small_pizzas * 15 + 5 << endl;
        }else if(y <= 4){
                //We simply need to adda large pizza to this
            cout << nr_of_small_pizzas * 15 + 10 << endl;
        }else{
            nr_of_small_pizzas++;
            cout << nr_of_small_pizzas*15 << endl;
        }
       
    }
    return 0;
}