#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    long long n, digit = 0, i = 10, j = 0;    
    int counter = 0, number_of_digits = 0;

    cin >> n;
    vector<long long> digits;
    long long temp = n;

    do {
     ++number_of_digits; 
     temp /= 10;
    } while (temp);

    while(number_of_digits > j){
        digit = (n % i) / (i/10);
        digits.push_back(digit);
        i = i * 10;
        j++;
    }

    for (int i = 0; i < digits.size(); i++)
    {
        if(digits[i] == 7 || digits[i] == 4){
            counter++;
        }
    }
    
    if(counter == 7 || counter == 4){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}