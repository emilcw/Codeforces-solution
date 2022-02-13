#include<iostream>
#include<string>
using namespace std;

int main(){
    int n, t;
    string line, a = "";
    char curr_pos, next_pos;
    cin >> n >> t;
    cin >> line;

    for (int sec = 0; sec < t; sec++)
    {
        for (int pos = 0; pos < n; pos++)
        {
            curr_pos = line[pos];
            next_pos = line[pos + 1];
            if(curr_pos == 'B' &&  next_pos == 'G'){
                a.push_back(line[pos+1]);
                a.push_back(line[pos]);
                pos = pos + 1;
            }else{
                a.push_back(line[pos]);
            }
        }
        line = a;
        a = "";
    }
    cout << line;

    return 0;
}