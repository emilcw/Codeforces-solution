#include<iostream>
#include<string>
using namespace std;

int main(){
    int n, c_a = 0, c_d = 0;
    string results;
    cin >> n >> results;
    for (int i = 0; i < n; i++)
    {
        char person = results[i];
        if(person == 'A'){
            ++c_a;
        }else{
            ++c_d;
        }
    }

    if(c_a > c_d){
        cout << "Anton"; 
    }else if (c_a < c_d){
        cout << "Danik";
    }else{
        cout << "Friendship";
    }
    return 0;
}