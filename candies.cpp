#include<iostream>
#include <math.h> 
using namespace std;

/* 

We have that x + 2x + ... = n
Which means that x(1+2+4...) = n
This sum can be written as
x * (2^k-1) = n
Dvs att x = n / (2^k - 1)
Om n mod power == 0 så har divisionen gått jämnt ut.
Då returnerar vi x = n / power.
Vi känner till n och loopar över k för att få x.

*/ 


int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        for (int k = 2; k < 10000; k++)
        {
            int power = pow(2,k);
            power--;
            if(n % power == 0){
                cout << n / power << endl;
                break;
            }
        }
        
    }

    return 0;
}