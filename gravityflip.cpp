#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    //An even easer solution would be just to sort the row we take in, 
    //but whats the fun in that?

    int xmax, i = 0, count = 0, moves = 1;
	cin >> xmax;
    int cols [100];
    
    // Read in cols
    for (int i = 0; i < xmax; i++)
    {
        cin >> cols[i];
    }
    
    // Decide max row
    int ymax = *max_element(cols, cols+xmax);

    //Init the box
    vector<vector<int>> box (xmax);

    //Build box according to max rows
    for (int i = 0; i < xmax; i++)
    {
        box[i].resize(ymax);
    }
    
    //Fill the box with squares
    for (int x = 0; x < xmax; x++)
    {
        int squares_for_col = cols[x];
        for (int y = ymax-1; y >= 0; y--)
        {
            if(squares_for_col){
                box[x][y] = 1;
                squares_for_col--;
            }
        }
    }
    
    //Make gravity flip
    while (moves != 0)
    {
        moves = 0;
        for (int y = 0; y < ymax; y++)
            {
            for (int x = 0; x < xmax; x++)
            {
                if(box[x][y] == 1){
                    //Found a square, time to move it
                    if((x+1) < xmax){
                        // Not out of bounds
                        if(box[x+1][y] == 0){
                        //If square to the right free, move this one
                        box[x][y] = 0;
                        box[x+1][y] = 1;
                        moves++;
                        }
                    }
                }
            }
        }
    }

    for (int x = 0; x < xmax; x++)
    {
        for (int y = 0; y < ymax; y++)
        {
            if(box[x][y] == 1){
                count++;
            }
        }
        cout << count << " ";
        count = 0; 
    }
    
    //Debug code to print box
 /*    for (int y = 0; y < max_y; y++)
    {
        if(y != 0) cout << endl;     
        for (int x = 0; x < max_x; x++)
        {
            cout << box[x][y];
        }
    } */

    return 0;
}