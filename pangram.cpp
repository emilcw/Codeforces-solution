#include<iostream>
#include<string>
#include<set>
using namespace std;

int main(){
    int n;
    set<char> alphabet;
    string word;
    cin >> n;
    cin >> word;
    for (int i = 0; i < n; i++)
    {
        word[i] = tolower(word[i]);
    } 
    for (int i = 0; i < n; i++)
    {
        if((word[i] >= 'a' && word[i] <= 'z') ||  
        (word[i] >= 'A' && word[i] <= 'Z')){
            alphabet.insert(word[i]);
        }
    }
    if(alphabet.size() == 26){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}