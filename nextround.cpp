#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, k, participant_score, threshold;
    vector<int> scores;

    cin >> n >> k;
    
    for(int i = 0; i < n; i++){
        cin >> participant_score;
        scores.push_back(participant_score);
    }    

    int counter = 0;  
    threshold = scores[k-1];
    for(int i = 0; i < n; i++){
        if(scores[i] >= threshold && scores[i] > 0){
            counter++;
        }
    }
    cout << counter;

    return 0;
}