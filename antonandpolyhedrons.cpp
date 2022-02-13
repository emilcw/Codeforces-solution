#include<iostream>
#include<string>
using namespace std;

int main(){
    int n, counter = 0;
    string word;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> word;
        if (word == "Tetrahedron"){
            counter+= 4;
        }else if(word == "Cube"){
            counter+= 6;
        }else if(word == "Octahedron"){
            counter+= 8;
        }else if(word == "Dodecahedron"){
            counter+= 12;
        }else if(word == "Icosahedron"){
            counter+= 20;
        }
    }
    cout << counter << endl;
    return 0;
}