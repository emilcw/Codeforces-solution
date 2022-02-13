#include<iostream>
#include<vector>
#include<string>
using namespace std;


int main(){
    int n;
    string word;
    string abb;
    string curr_word;
    vector<string> words;

    // Read the words
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> word;
        words.push_back(word);
    }

    // Make abbreviations
    for(int j = 0; j < n; j++){
        curr_word = words[j];
        if(curr_word.length() > 10){
            abb = curr_word.front() + to_string((curr_word.length()- 2)) + curr_word.back();
            cout << abb << endl;
        }else{
            cout << curr_word << endl;
        }
    }
    return 0;
}