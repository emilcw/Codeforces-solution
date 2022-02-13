#include<iostream>
#include<string>
using namespace std;

int main(){
    string sum;
    string newsum;
    int ones = 0, twos = 0, threes = 0;
    char plus = '+';
    char one = '1';
    char two = '2';
    char three = '3';

    cin >> sum;

    for (int i = 0; i < sum.length(); i++)
    {
        if(sum[i] == '1'){
            ones++;
        }else if(sum[i] == '2'){
            twos++;
        }else if(sum[i] == '3'){
            threes++;
        }else{
            // Do nothing, its a "+" sign.
        }
    }

    for (int i = 0; i < sum.length(); i++)
    {
        if (ones >= 1){
            newsum.push_back(one);
            if(ones != 1 || twos + threes > 0){
                newsum.push_back(plus);
            }
            ones--;
        }else if(ones == 0 && twos >= 1){
            newsum.push_back(two);
            if(twos != 1 || threes > 0){
                newsum.push_back(plus);
            }
            twos--;
        }else if(ones == 0 && twos == 0 && threes >= 1){
            newsum.push_back(three);
            if(threes != 1){
                newsum.push_back(plus);
            }
            threes--;
            
        }
    }
    
    cout << newsum;
    
    return 0;
}