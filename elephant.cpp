#include<iostream>
#include<string>
using namespace std;

int main(){
    int coord, steps = 0, home = 0;
    bool wait = false;
    cin >> coord;

    while(home != coord){
        wait = false;
       
        if(home + 5 <= coord && wait == false){
            home = home + 5;
            steps++;
            wait = true;
        }else if(home + 4 <= coord && wait == false){
            home = home + 4;
            steps++;
             wait = true;
        }else if(home + 3 <= coord && wait == false){
            home = home + 3;
            steps++;
            wait = true;
        }else if(home + 2 <= coord && wait == false){
            home = home + 2;
            steps++;
            wait = true;
        }else if(home + 1 <= coord && wait == false){
            home = home + 1;
            steps++;
            wait = true;
        }else{
            // add nothing
        }
    }
    cout << steps;
    return 0;
}