#include<bits/stdc++.h>
using namespace std;

int main(){
     
     set<int> s;
    //  s.insert(10);

    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        s.insert(x);//O(Log(N));
        //insert er por sort oo kore fele
        //duplicate rakhe na 
        //BST er moto
    }

    // for(auto it=s.begin();it!=s.end();it++){
    //     cout<<*it<<endl;
    //     //derefernce kore print

    // }


    //logN a search kora jay count function diye

    if(s.count(10)) cout<<"Yes"<<endl;//O(LogN);
    else cout<<"No"<<endl;
    //true false dey
    //ekahne asole count dey
    //0 thake if chole na ..0 mane false
    // 1-> joto integer value acea take true vabe
    //ekhane duplicate thake na 
    //tai count 1 ei asbe jodi thake
    //na thakle 0

     
    return 0;

}