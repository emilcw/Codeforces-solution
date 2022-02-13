#include<iostream>
#include<utility>
using namespace std;

int main(){
    int n, h, a, counter = 0;
    pair<int, int> teamhome, teamaway;
    cin >> n;
    pair<int, int> foo[30];

    for (int i = 0; i < n; i++){
        cin >> h >> a;
        pair<int, int> team (h, a);
        foo[i] = team;
    }
    
    for (int i = 0; i < n; i++){
        teamhome = foo[i];
        for (int j = 0; j < n; j++){
            teamaway = foo[j];
            if (teamhome != teamaway){
                if(teamaway.second == teamhome.first){
                    counter++;
                }
            }
        } 
    }
    cout << counter << endl;
    return 0;
}