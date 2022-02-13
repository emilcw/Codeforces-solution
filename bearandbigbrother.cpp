#include<iostream>
#include<string>
using namespace std;

int main(){
    int limak = 0, bob = 0, counter = 0;
    cin >> limak >> bob;

    while(limak <= bob){
        limak = 3*limak;
        bob = 2*bob;
        counter++;
    }

    cout << counter;

    return 0;
}