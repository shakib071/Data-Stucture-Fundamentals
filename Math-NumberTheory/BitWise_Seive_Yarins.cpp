//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;
//algo 2



int getBit(vector<int>& bits ,int index){
    
    return (bits[index/32] & (1<<(index % 32)));
    
}




void setBit(vector<int>& bits ,int index){
    
    bits[index/32] =  (bits[index/32] | (1<<(index%32)));
    
}


vector<int> bitwiseSeive(int n){
    int size = (n/32)+1;//each int can hold 32 bit so 1 index can store 32 values flag
    vector<int> bits(size,0);//store the flags
    //bit 0 is flag as prime

    vector<int> primes;
    
    //2 is the only even prime number
    //tahole amar ar even gulay iterate kora lagbe na
    if(n>=2){
        primes.push_back(2);
        
    }

    //all odd buner are prime initially ie 0 marked

    for(int i=3;i<=n;i+=2){
        if(!getBit(bits,i)){
            //getbit theke 0 paile tar mane prime  and
            //multiple of prime is composite
            primes.push_back(i);

            for(int j=i*i;j<=n;j+=2*i){//odd gula shudhu iterate korci
                setBit(bits,j);
                //set the bit to 1 so we can flag non prime


            }
        }
    }

    return primes;


}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     int n=100;

     vector<int> primes = bitwiseSeive(n);

     cout<<"Primes are :"<<endl;

     for(int prime: primes){
        cout<<prime<<" ";
     }
     cout<<endl;
     
    return 0;

}