#include <iostream>
using namespace std;
 
int main()
{
    int w;
    cin >> w;
    // If even and not 2, we can split water melon.
    if((w % 2 == 0) && w != 2){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}