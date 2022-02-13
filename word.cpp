#include<iostream>
#include<string>
using namespace std;

int main(){
    string word, newword;
    int counter_upper = 0, counter_lower = 0;
    cin >> word;
    for (int i = 0; i < word.length(); i++)
    {
        char character = word[i];
        if(isupper(character)){
            counter_upper++;
        }else{
            counter_lower++;
        }
    }

        for (int i = 0; i < word.length(); i++)
        {
             if(counter_lower >= counter_upper){
                newword.push_back(tolower(word[i]));
             }else{
                newword.push_back(toupper(word[i]));
             }
        }
    cout << newword;
    return 0;
}