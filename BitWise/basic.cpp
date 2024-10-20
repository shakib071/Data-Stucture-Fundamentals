//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

int getBit(int n,int pos){
    //pos starts from 0 and from left
    return (n & (1<<pos)) !=0;
}

int setBit(int n,int pos){
    return (n | (1<<pos));
    //set bit 1 in a certain position
}

int clearBit(int n, int pos){
    int mask=~(1<<pos);
    //example postion is 2 then 0100 and 1s complement is 1011
    //if we and with n then the pos number will be zero others remaining same
    return (n & mask);
}


int updateBit(int n,int pos,int value){
    //clear bit then set bit
    //value 1 or 0
    int mask=~(1<<pos);
    n = n & mask;
    return n| (value<<pos);

}
//https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqazVuWXhDZHoxR1VmNHVtZ0tkNkxzWlo3a21tUXxBQ3Jtc0tsWEpoRXBVem0xaWlpdHlJNms1RXdFNnYtRU9lTnY2WnF1T29GNEtBaTgzUFQ0MlB3UWZEaVlVTERuaFJuNVhGQlozVUtveTBnR1I3TkxEYmlRUktlaVpYYWpxVG9QeHhXV1JaOFpQenR1ZUtyZFZGZw&q=https%3A%2F%2Fdrive.google.com%2Ffile%2Fd%2F1IEF5o6w5dpUXH20F_fH58WVQOIJoOd_U%2Fview%3Fusp%3Dsharing&v=s8l8NWII3qw
//https://www.youtube.com/watch?v=s8l8NWII3qw&ab_channel=ApnaCollege


bool isPowerOf2(int n){
    return (n && !(n & n-1));
    //n && because if n is zero then then ans is zero
    // so we and this 
    // if n is power of 2 then  n&n-1 is zero
}



int numberOfOnes(int n){
    int count=0;
    while(n){
        n=n&n-1;
        count++;
    }
    return count;
    //n and n-1 korle setbit mane n er last er theke 1st 1  chole jabe
    //evabe jotobar kore n zero hobe totota 1 acea 
    //done
}

void subsets (int arr[],int n){
    //algo 2 khata
    for(int i=0;i<(1<<n);i++){
        for (int j=0;j<n;j++){//because n th bit er por shob zero

            if(i & (1<<j)){//getbit if true mane 1 acea tahole string er substring acea
                cout<<arr[j]<<" ";

            }
            cout<<endl;
        }
    }
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
    //  cout<<getBit(5,2)<<endl;
    // cout<<setBit(5,1)<<endl;
    cout<<clearBit(5,2)<<endl;
    cout<<updateBit(5,1,1)<<endl;
     
    return 0;

}