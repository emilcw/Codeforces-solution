#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    int n, sum;
    string statement;
    vector<string> statements;
   
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> statement;
        statements.push_back(statement);
    }
    
    sum = 0;
    for (int i = 0; i < n; i++){
        if(statements[i] == "++X"){
            sum++;
        }else if (statements[i] == "X++"){
            sum++;
        }else if (statements[i] == "X--"){
            sum--;
        }else if(statements[i] == "--X"){
            sum--;
        }else{
            sum = sum;
        }
    }
    
    cout << sum;
    
    return 0;
}