#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int n, ai, bi, curr_pass = 0, minimum_cap = 0;
    vector<pair<int, int>> stations;
    pair<int, int> current_station;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> ai >> bi;
        stations.push_back(make_pair(ai, bi));
    }
    
    for (int i = 0; i < n; i++)
    {
        current_station = stations[i];
        curr_pass = curr_pass - current_station.first;
        curr_pass = curr_pass + current_station.second;

        if(curr_pass >= minimum_cap){
            minimum_cap = curr_pass;
        }
    }
    cout << minimum_cap;
    return 0;
}