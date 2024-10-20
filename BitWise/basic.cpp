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
    // Count set bits in integer 
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



//https://www.youtube.com/watch?v=WEpLyOc0bCE&ab_channel=ApnaCollege

int unique(int arr[],int n){
    //if one is unique and others present twice
    int xorsum=0;

    for (int i=0;i<n;i++){
        xorsum = xorsum ^ arr[i];
    }
    return xorsum;
}

void unique2(int arr[],int n){
    //2 numbers are unique and others are present twice

    int xorsum=0;
    for (int i=0;i<n;i++){
        xorsum = xorsum ^ arr[i];
    }
    int tempxor= xorsum;
    int setbit =0;
    int pos=0;
    while(setbit!=1){
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
        //getbit 
        //algo2  khata

    }
    int newxor=0;
    for (int i=0;i<n;i++){
        if(setBit(arr[i],pos-1)){
            newxor = newxor ^ arr[i];
        }
    }

    //newxor is one unique number

    cout<<newxor<<endl;
    cout<<(newxor ^ tempxor)<<endl;


}


int unique3(int arr[],int n){
    // one is unique others 3 times
    int result =0;
    for(int i=0;i<64;i++){//64 bit
        int sum=0;
        for(int j=0;j<n;j++){
            if(getBit(arr[j],i)){
                sum++;
            }
        }

        if(sum%3!=0){
            result= setBit(result,i);

        }
    }
    return result;

}


void printBinary(int n){
    for(int i=10;i>=0;i--){//10 bits
        cout<<((n>>i) & 1);
    }
    cout<<endl;
}

void evenOdd(int n){
    if(n&1!=0)cout<<"Odd"<<endl;
    else cout<<"Even"<<endl; // 0 
    //algo 2

}

int divby2(int n){
    return (n>>1);//integer divition
}

int mulby2(int n){
    return (n<<1);
}

char  upperToLower(char c){
    c =  setBit(c,5);
    return c;
}

char lowerToUpper(char c){
    c = clearBit(c,5);
    return c;
}

int clearLSB(int n,int range ){
    // Clear all bits from LSB to ith bit 
    //ekta range a least significant bit clear kora
    //jemon 0 - 4 porjonto bit clear kora 
    // 0 thekei suru hbe
    //single operation a
    int mask = ~((1<<(range+1))-1);
    int ans = n & mask;
    return ans;

    //algo 2

}

int clearMSB(int n,int range){
    //Clearing all bits from MSB to i-th bit
    // jemon 3 number bit theke porer shobgula 0 korbo
    //range tahole hbe 3
    //0 - 3 thakbe same bakigula zero
    //algo 2

    int mask = (1<<range)-1;
    int ans = n & mask;
    return ans;


}

void swap2number(int a,int b){
    int temp = a ^ b;//XOR
     a= (a ^ temp); // a^a^b==b 
    //beacuse a^a=0 and 0^b==b 
    //swap 1 ta holo same vabe arekta swap
     b= (b ^ temp);
    cout<<a<<" "<<b<<endl;
}

int clearLSBlast(int n){

    //last set bit
    return (n&(n-1));
}

int extractLSBlast(int n){
    return (n & (~(n-1)));
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
    //  cout<<getBit(5,2)<<endl;
    // cout<<setBit(5,1)<<endl;
    // cout<<clearBit(5,2)<<endl;
    // cout<<updateBit(5,1,1)<<endl;
    // evenOdd(5);
    // cout<<upperToLower('A')<<endl;
    // cout<<lowerToUpper('a')<<endl;

    // printBinary(59);
    // printBinary(clearLSB(59,4));
    // printBinary(60);
    // printBinary(clearMSB(60,3));//0,1,2 num bit same bakigula 0
    //  swap2number(4,5);
    return 0;

}