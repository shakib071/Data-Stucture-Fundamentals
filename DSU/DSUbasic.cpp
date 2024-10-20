#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int par[N];//parent array
int groupsize[N];
int level[N];

void dsu_initialize(int n){
    for(int i=0;i<n;i++){
        par[i]=-1;
        groupsize[i]=1;//union by size a lagbe
        //karon initially shudhu oo nijei oi group a acea
       level[i]=0; //union by level a lage
       //shurute sobar level 0 
       //karon 0 theke level suru korci
       //shurute shudhu nijei acea tai level 0
    }

    // par[1]=3;
    // par[2]=1;
    // //emni find check korar jonno korci
    
    // par[1]=2;
    // par[2]=3;
    // par[5]=6;
    // par[6]=7;
    // // //union set check korar jonno manually input dici
    // //union set diya eta kora jay 
    // //kintu check korar jonno eta korci
}

//-1 mane otai leader
//na bujle algorithm khata dekh 


int find(int node){
  if(par[node]==-1) return node;
//    return find(par[node]);

   //complexity O(N);
   //naive version 
   //optimaized version oo acea

   //optimed ta niche
//    int leader=find(par[node]);
//    par[node]=leader;
//    return leader;
   //or 
   return par[node]=find(par[node]);
   //2 tai same 
   //long ar short shudhu
   //complexity Log(N)
}

//find function diye 2 ta group ba set er leader khuji
//ba parent khuji

void dsu_union(int node1,int node2){
    //2 ta group ba set ekshathe ek group kora
    //jader leader ba parent ekjon
    
    int leaderA=find(node1);
    int leaderB=find(node2);
    //ekhon jekono ekjion leader charbe
    //ekjon leader hbe 2 joner moddhe
    //karon group ekshathe hocche
    //union hocche

    par[leaderA]=leaderB;
    //ekhon sobar leader leaderB;
    //ei condition a node2 er leader ei shosomoy leader hbe



}
void dsu_union_by_size(int node1,int node2){
    
    //size jar boro se leader
    //optimized


    int leaderA=find(node1);
    int leaderB=find(node2);
    
    if(groupsize[leaderA]>groupsize[leaderB]){
        par[leaderB]=leaderA;
        groupsize[leaderA]+=groupsize[leaderB];
    }
    else{
         par[leaderA]=leaderB;
        groupsize[leaderB]+=groupsize[leaderA];
    }

}

void dsu_union_by_level(int node1,int node2){
     //union by rabk oo bole
     //optimized

    //small level ola gruop k big level ola
    //grpup a add kore big level ota group er
    //leader sobar leader hoy
    //na bujle khata dekh

    int leaderA=find(node1);
    int leaderB=find(node2);

    if(level[leaderA]>level[leaderB]){
        par[leaderB]=leaderA;
        //small level group k big level a merge
        //korle level bare na 
        //na bujle khata dekh
    }
    else if(level[leaderB]>level[leaderA]){
        par[leaderA]=leaderB;
         //small level group k big level a merge
        //korle level bare na 
        //na bujle khata dekh
        //same ager motoi
    }
    else {
        //mane 2 tar level soman hole
        //level 1 bere jabe
        //na bujle khata dekh
        par[leaderA]=leaderB;
        //ekhane 2 joner ekjonk leader banalei hoy
        //2 situation ay level 1 barbe
        level[leaderB]++;
    }
    

}

//input ta union diye kora jabe
//shobgula node eke eke input niye group korlei hbe


int main(){
     
    //  dsu_initialize(4);
    //  cout<<find(0)<<endl;
    //  cout<<find(1)<<endl;
    //  cout<<find(2)<<endl;
    //  cout<<find(3)<<endl;
     ////find set er jonno
     
     //union func check
     
    //  dsu_initialize(8);
    //  cout<<find(1)<<endl;
    //   dsu_union(1,5);
    //   cout<<find(1)<<endl;

    //union by size func check

    //  dsu_initialize(7);
    // dsu_union_by_size(1,2);
    // dsu_union_by_size(2,3);
    // dsu_union_by_size(4,5);
    // dsu_union_by_size(5,6);
    // //evabe input newya jabe
    // //manually input na nileoo hbe
    // cout<<find(1)<<endl;
    // cout<<find(4)<<endl;
    
    // //ekhon 2 ta alada group acae
    // //2 ta group er moddhe union hole leader ekjoni hbe
    // dsu_union_by_size(1,4);
    // //union hye gelo
    // //ekhon sobar leader same
    // cout<<find(1)<<endl;
    // cout<<find(4)<<endl;


    //union by level check

     dsu_initialize(7);
    dsu_union_by_level(1,2);
    dsu_union_by_level(2,3);
    dsu_union_by_level(4,5);
    dsu_union_by_level(5,6);
    //evabe input newya jabe
    //manually input na nileoo hbe
    cout<<find(1)<<endl;
    cout<<find(4)<<endl;
    
    //ekhon 2 ta alada group acae
    //2 ta group er moddhe union hole leader ekjoni hbe
    dsu_union_by_level(1,4);
    //union hye gelo
    //ekhon sobar leader same
    cout<<find(1)<<endl;
    cout<<find(4)<<endl;


    return 0;

}