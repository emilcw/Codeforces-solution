#include<iostream>
#include<string>
using namespace std;

int main(){
    int unique_char = 0;
    char character;
    bool seen_before = false;
    string username, foo = "";

    cin >> username;

    for (int i = 0; i < username.length(); i++)
    {
        character = username[i];
        if(foo.length()==0){
            foo.push_back(character);
            unique_char++;
        }

        for (int j = 0; j < foo.length(); j++)
        {
            if(character == foo[j]){
                seen_before = true;
            }
        }
        if(!seen_before){
            unique_char++;
            foo.push_back(character);
            seen_before = false;
        }
        seen_before = false;
    }

    if(unique_char % 2 == 0){
        cout << "CHAT WITH HER!";
    }else{
        cout << "IGNORE HIM!";
    }


    return 0;
}