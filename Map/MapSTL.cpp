#include<bits/stdc++.h>
using namespace std;

int main(){
     
     map<string,int>mp;
    //  //ekhane index hbe string er kintu value hobe integer;
    //  mp.insert({"Shakib hasan",7});
    //  mp.insert({"Tamim iqbal",19});
    //  mp.insert({"shamim",22});
     
    // //  for(auto it=mp.begin();it!=mp.end();it++){
    // //     cout<<it->first<<" "<<it->second<<endl;
    // //  }
    // //  //egula kono rule follow kore value dey na 
    // //  //eta hasing er technique a ekekjaygay value rakhe
    // //  //serial maintain kore na

    // cout<<mp["shamim"]<<endl;
    // //ekhane shamim holo index
    // //map a index k key bole
    // //ekhon shudhu shamim er value debe
    // // je index nai sei index access korte chaile 0 value debe
    // //error debe na 
    // //jodi emon hoy je ekta key er value tai 0 tahole 
    // //amra count func diye korte pari
    // //count func true false debe
    // //jemon ekta insert kori 0 diye
    // mp.insert({"Akib",0});
    // if(mp.count("Akib")){
    //     cout<<"Present"<<endl;
    ////count 1 ei hoy karon ekta index a 2 bar value rakhle
    ////shudhu update hoy
    // }
    // else cout<<"Absent"<<endl;

    mp["shakib hasan"]=79;
    mp["akib"]=21;//log(N);

    //evanbeoo insert kora jay 
    //ekaneoo pair hisebe thake 
     for(auto it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
     }
//print er rule same 
    return 0;

}