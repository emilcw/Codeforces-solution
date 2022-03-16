#include<iostream>
using namespace std;

int main(){
    int t, A, distance; 
    cin >> t;
    while(t--){
        cin >> A >> distance;
        if(A<=distance)
	    {
		cout<<distance-A<<endl;
	    }
	    else{
		cout<<((A%2)^(distance%2))<<endl;
    	}

        //Denna fungerar teoretiskt, men tar så inte helvete med tid.
        //Denna över är betydligt smartare men också snodd.
        /*
        int counter = 0;
        int B = 0;
        cin >> A >> distance;
        while(abs(B-A) != distance && B != distance){
            A++;
            counter++;
        }
        cout << counter << endl;
    }
    */
   
    }
 return 0;
}