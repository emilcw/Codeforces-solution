#include<iostream>
#include<tuple>
#include<vector>
using namespace std;


int main(){
    int n, p, v, t;
    tuple<int, int, int> view;
    tuple<int, int, int> curr_view;
    vector<tuple<int,int,int>> views;
    cin >> n;

    // Read in views.
    for(int i = 0; i < n; i++){
        cin >> p >> v >> t;
        view = make_tuple(p,v,t);
        views.push_back(view);
    }

    // Count the cases where they can solve it.
    int counter = 0;
    int sum = 0;
    for(int j = 0; j < n; j++){
        curr_view = views[j];
        sum = get<0>(curr_view) + get<1>(curr_view) + get<2>(curr_view);
        if(sum >= 2){
            counter++;
        }
        sum = 0;
    }
    cout << counter;
    return 0;
}