#include<bits/stdc++.h>
using namespace std;

int main(){
     
     queue<string>q;
     q.push("abc");
     q.push("bcd");
     q.push("shakib");

     while (!q.empty())
     {
       cout<<q.front()<<endl;
       q.pop();
     }
     
     
    return 0;

}