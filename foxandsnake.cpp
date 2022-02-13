#include<iostream>
#include<string>
using namespace std;

int main(){
    int n, m;
    bool rightSide = true;
    cin >> n >> m;
    for (int r = 0; r < n; r++){

        string line = "";
        for (int c = 0; c < m; c++){
            if(r % 2 != 0){
                line.append(".");       
            }else{
                line.append("#");
            }
        }

        if(r % 2 != 0){
            if(rightSide){
                line.pop_back();
                line.append("#");
                rightSide = false;
            }else{
                line.pop_back();
                line = "#" + line;
                rightSide = true;
            }
        }

        cout << line << endl;
    }
    return 0;
}