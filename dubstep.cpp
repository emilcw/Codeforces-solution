#include<iostream>
#include<string>
using namespace std;

int main(){
    int flag = 1;
    string word;
    cin >> word;
    for (int i = 0; i < word.length(); i++)
    {
        if( (word[i] == 'W' && word[i+1] == 'U' && word[i+2] == 'B')  ){ 
            i = i + 2;
            if(!flag){
                cout << " ";
            }
            continue;
        }else{
            flag = 0;;
            cout << word[i];
        }
    }
    return 0;
}