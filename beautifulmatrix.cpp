#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    int matrix[5][5];
    int counter = 0;
    int xpos, ypos;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
  }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if(matrix[i][j] == 1){
                xpos = i;
                ypos = j;
            } 
        }
  }

    while(true){
        if(xpos > 2){
            xpos--;
            counter++;
        }else if(xpos < 2){
            xpos++;
            counter++;
        }else if(ypos > 2){
            ypos--;
            counter++;
        }else if(ypos < 2){
            ypos++;
            counter++;
        }else{
            break;
        }
    }
    cout << counter;
    return 0;
}