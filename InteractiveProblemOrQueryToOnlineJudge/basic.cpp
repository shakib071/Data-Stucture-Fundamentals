//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     //guess the num

        int lo=1,hi=1000000;
        int ans=-1;

        while(lo<=hi){
            int mid= (lo+hi)/2;
            cout<<mid<<endl;
            cout<<flush;

            string s;cin>>s;

            if(s == "<"){
                hi=mid-1;
            }
            else{
                ans=max(ans,mid);
                lo = mid+1;
            }

        }

        cout<<"! "<<ans<<endl;
        cout<<flush;
     
    return 0;

//chatgpt
    //   int low = 1, high = 100; // Range of numbers
    // int guess;

    // while (true) {
    //     // Make a guess in the middle of the current range
    //     guess = (low + high) / 2;
    //     cout << guess << endl; // Send the guess to the judge
    //     cout.flush(); // Flush the output to ensure it's sent

    //     string response;
    //     cin >> response; // Receive the response from the judge

    //     if (response == "Correct") {
    //         cout << "Guessed the number: " << guess << endl;
    //         break; // Exit the loop if the guess is correct
    //     } else if (response == "Too Low") {
    //         low = guess + 1; // Adjust the lower bound
    //     } else if (response == "Too High") {
    //         high = guess - 1; // Adjust the upper bound
    //     }
    // }

}