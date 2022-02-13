#include<iostream>
using namespace std;

int main(){
    int y, thousand, hundred, tenth, unit;
    cin >> y;
    bool isDistinct = false;

    while(!isDistinct){
        y++;
        thousand = y % 10000 / 1000;
        hundred = y % 1000 / 100;
        tenth = y % 100 / 10;
        unit = y % 10;

        if(thousand != hundred && thousand != tenth && thousand != unit && hundred != tenth && hundred != unit && tenth != unit){
            isDistinct = true;
        }
    }
    cout << y;

    return 0;
}