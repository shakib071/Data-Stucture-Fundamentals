#include<bits/stdc++.h>
using namespace std;
//pair in vector

bool myCompare(pair<int, int>p1,pair<int,int>p2){
    return p1.first<p2.first;//shudhu 1st ta sort korbo
}

int main(){
     
    //  pair<int,char>p;
    //  p.first=3;
    //  p.second='f';
    //  cout<<p.first<<p.second<<endl;
     int arr[]={10,15,7,14,5,3,2,9};//reduce the given array

     vector<pair<int,int>>v;
     for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        //   pair<int,int>p;
        //   p.first=arr[i];
        //   p.second=i;
        //evabeoo pushback kora jay
        //or
        v.push_back(make_pair(arr[i],i));

     }
     sort(v.begin(),v.end(),myCompare);
    //  sort(v.begin(),v.end());//eta dileoo hoy (1st ietm tai sort kre)
    //  for(int i=0;i<v.size();i++){
    //     cout<<v[i].first<<" "<<v[i].second<<endl;
    // }
    for(int i=0;i<v.size();i++){
        arr[v[i].second]=i;
    }
    for(int i=0;i<v.size();i++){
       cout<<arr[i]<<endl;
    }

    return 0;

}