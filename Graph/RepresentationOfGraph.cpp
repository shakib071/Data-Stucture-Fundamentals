#include<bits/stdc++.h>
using namespace std;

// #define vvi vector<vi>
// #define pii pair<int,int>
// #define vii vector<pii>
// #define rep(i,a,b) for(int i=a;i<b;i++)
// #define ff first
// #define ss second
// #define setBits(x) builtin_popcount(x)
//valo bujhi na

const int N=1e5+2,MOD=1e9+7;


vector<int>adj[N];
//vector<int> adj[N];: This declares an array of vectors 
//named adj where each element adj[i] is a vector. This 
//construct is commonly used to represent an adjacency list, 
//a way to represent a graph. Each element of the array 
//represents a vertex, and the vector associated with each
// vertex contains the neighbors of that vertex.


int main(){
     
     int n,m;//n number of node 
     //m number of edges
     cin>>n>>m;
//declare 2d matrix using vector
//initializes with zeros 
vector<vector<int>>adjmatrix(n+1,vector<int>(n+1,0));
//n ta element acea ta
//input the edges
for(int i=0;i<m;i++){//m ta node
//m bar input nebe
//n+1 dici jate n ta maen nxn value rakhte pari;
//karon grap a 1 theke suru hoy
//tai jhamela komanor jonno index ar node er value same rakhi
//tai n na diye n+1 dici jane 1 the n porjonto node matrix diye korte
//pari
//eta algorithm khatar graph
//75 page algorithm khatar


    int x,y;
    cin>>x>>y;
    adjmatrix[x][y]=1;
    adjmatrix[y][x]=1;

}
//output
  cout<<"Adjacentcy marix of given graph is "<<endl;
for(int i=1;i<n+1;i++){
    for(int j=1;j<n+1;j++){
        cout<<adjmatrix[i][j]<<" ";
    }
    cout<<endl;
}

if(adjmatrix[3][7]==1){
    cout<<"There is a edge between 3 and 7"<<endl;
}
else{
    cout<<"NO eedge"<<endl;
}

cout<<endl<<endl<<endl;

//representation in list

cin>>n>>m;

for(int i=0;i<m;i++){
    int x,y;
    cin>>x>>y;
    //global vector of vector ie vector array declare korci
    //ekebare upore dekh

    adj[x].push_back(y);
    adj[y].push_back(x);
}

cout<<"djacency List of Above Graph is given by "<<endl;

for(int i=1;i<n+1;i++){
    cout<<i<<"->";

    for(int z:adj[i]){//range based for loop;
    //vector er 1st to last a jabe
        cout<< z<<" ";

    }
    cout<<endl;
}

     
    return 0;

}