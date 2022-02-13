#include<iostream>
using namespace std;

int main(){
    int n, ce = 0, pile = 0;
    cin >> n;
    int bills [5]  = {100, 20, 10, 5, 1};
    for (int i = 0; i < 5; i++)
    {
       if(pile == n){
           break;
       }
       while (!(n < pile + bills[i]))
       {
        pile += bills[i];
        ce += 1;        
       }
        
    }
    cout << ce << endl;


    return 0;
}