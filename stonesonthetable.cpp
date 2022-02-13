#include<iostream>
#include<string>
using namespace std;

int main(){
    int nr_of_stones, counter = 0;
    string stones;
    char new_color;

    cin >> nr_of_stones;
    cin >> stones;

    for (int i = 0; i < nr_of_stones; i++)
    {
        new_color = stones[i];
        if(stones[i+1] == new_color){
            counter++;
        }

    }

    cout << counter;

    return 0;
}