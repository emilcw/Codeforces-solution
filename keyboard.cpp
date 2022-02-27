#include<iostream>
#include<string>
using namespace std;

const string alphabet = "qwertyuiopasdfghjkl;zxcvbnm,./";

int main(){
    char LeftOrRight;
    string word, newword;
    cin >> LeftOrRight;
    cin >> word;

    for (int i = 0; i < word.length(); i++)
    {
        char character = word[i];
        for (int j = 0; j < alphabet.length(); j++)
        {
            if(character == alphabet[j]){
                if(LeftOrRight == 'R'){
                    if(j == 0) {
                    newword.push_back(alphabet[j]);
                    }else{
                        newword.push_back(alphabet[j-1]);
                    }
                }else{
                     if(j == alphabet.length()-1) {
                        newword.push_back(alphabet[j]);
                    }else{
                        newword.push_back(alphabet[j+1]);
                    }
                }
            }
        }
    }
    
    cout << newword << endl;
    return 0;
}