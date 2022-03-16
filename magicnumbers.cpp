#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    bool flag = true;
    cin >> s;

    for (long long i = 0; i < s.length();)
    {
        if(s[i] == '1' && s[i+1] == '4' && s[i+2] == '4'){ //Check if number is 144
            i+=3; //Go forward 3 steps

        }else if(s[i] == '1' && s[i+1] == '4'){ //Check if number is 14
            i+=2; //Go forward 2 steps

        }else if(s[i] == '1'){ //Check if number is 1
            i++; //Go forward 1 step
        }else{
            //It was none of the given numbers! Cant be a magic number!
            flag = false;
            break;
        }
    }
    
    if(flag){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}