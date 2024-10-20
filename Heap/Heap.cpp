#include<bits/stdc++.h>
using namespace std;
//https://phitron.io/ph044/video/ph044-22-5-insert-in-heap-implementation
//module link

void insertAtMaxHeap(){
    //ager theke dewya thakle evabe vector a nebo
        //  vector<int> v={50,40,45,30,35,42,32,25,20,10};
     vector<int>v;
     int n;
     cin>>n;//jtogula input nebo
     //evabe nile sorted hoye max heap er 
     //noyom mete insert hobe 
     for(int i=0;i<n;i++){
     int x;
     cin>>x;
     v.push_back(x);
     
    int cur_idx=v.size()-1;

   
    //note a lekha acea
    //na bujle dekh
    while(cur_idx !=0){
      int parent_idx=(cur_idx-1)/2;
    if(v[parent_idx]<v[cur_idx]){
       swap(v[parent_idx],v[cur_idx]); 
    }
    else break;

    cur_idx=parent_idx;
    }

     }

    //output
    for(auto val : v) cout<<val<<" ";
     
}

void insertAtMinHeap(){
     //ager theke dewya thakle evabe vector a nebo
        //  vector<int> v={50,40,45,30,35,42,32,25,20,10};
     vector<int>v;
     int n;
     cin>>n;//jtogula input nebo
     //evabe nile sorted hoye min heap er 
     //noyom mete insert hobe 
     for(int i=0;i<n;i++){
     int x;
     cin>>x;
     v.push_back(x);
     
    int cur_idx=v.size()-1;

   
    //note a lekha acea
    //na bujle dekh
    while(cur_idx !=0){
      int parent_idx=(cur_idx-1)/2;
    if(v[parent_idx]>v[cur_idx]){
       swap(v[parent_idx],v[cur_idx]); 
    }
    else break;

    cur_idx=parent_idx;
    }

     }

    //output
    for(auto val : v) cout<<val<<" ";
     
}

void insertAtMaxHeapfromMainfun(vector<int> &v,int x){
        //same ei 
        //shudu main function theke input nebo
        //jate vector er valu main func a thake
        //vector main a declare kore func a debo
        v.push_back(x);
     
    int cur_idx=v.size()-1;

   
    //note a lekha acea
    //na bujle dekh
    while(cur_idx !=0){
      int parent_idx=(cur_idx-1)/2;
    if(v[parent_idx]<v[cur_idx]){
       swap(v[parent_idx],v[cur_idx]); 
    }
    else break;

    cur_idx=parent_idx;
    }

     
}
void insertAtMinHeapfromMainfun(vector<int> &v,int x){
        //same ei 
        //shudu main function theke input nebo
        //jate vector er valu main func a thake
        //vector main a declare kore func a debo
        v.push_back(x);
     
    int cur_idx=v.size()-1;

   
    //note a lekha acea
    //na bujle dekh
    while(cur_idx !=0){
      int parent_idx=(cur_idx-1)/2;
    if(v[parent_idx]>v[cur_idx]){
       swap(v[parent_idx],v[cur_idx]); 
    }
    else break;

    cur_idx=parent_idx;
    }

     
}

void deleteFromMaxHeap(vector<int> &v){
    //delete root hoy heap hoy
    //na bujle note dekh or module dekh

    v[0]=v[v.size()-1];
    v.pop_back();
    //delete holo
    //ekhon justify korbo max heap;
    int cur_idx=0;

    while(true){
        int left_idx=cur_idx*2 +1;
        int right_idx=cur_idx*2 +2;
        int last_idx=v.size()-1;

        if(left_idx<=last_idx && right_idx<=last_idx){
            //duita children ei ase
            if(v[left_idx]>=v[right_idx] && v[left_idx]>v[cur_idx]){
              swap(v[left_idx],v[cur_idx]);
              cur_idx=left_idx;
            }
            else if(v[right_idx]>=v[left_idx] && v[right_idx]>v[cur_idx]){
               swap(v[right_idx],v[cur_idx]);
               cur_idx=right_idx;
            }
            else{
                break;
            }
        }
        else if (left_idx<=last_idx){
            //left acea
            if(v[left_idx]>v[cur_idx]){
                swap(v[left_idx],v[cur_idx]);
                cur_idx=left_idx;
            }
            else break;
        }
        else if(right_idx<=last_idx){
            //right asea

            if(v[right_idx]>v[cur_idx]){
                swap(v[right_idx],v[cur_idx]);
                cur_idx=right_idx;
            }
            else break;

        }
        else {
            //children nai 
            break;
        }
    }


}

void deleteFromMinHeap(vector<int> &v){
    //delete root hoy heap hoy
    //na bujle note dekh or module dekh

    v[0]=v[v.size()-1];
    v.pop_back();
    //delete holo
    //ekhon justify korbo max heap;
    int cur_idx=0;

    while(true){
        int left_idx=cur_idx*2 +1;
        int right_idx=cur_idx*2 +2;
        int last_idx=v.size()-1;

        if(left_idx<=last_idx && right_idx<=last_idx){
            //duita children ei ase
            if(v[left_idx]<=v[right_idx] && v[left_idx]<v[cur_idx]){
              swap(v[left_idx],v[cur_idx]);
              cur_idx=left_idx;
            }
            else if(v[right_idx]<=v[left_idx] && v[right_idx]<v[cur_idx]){
               swap(v[right_idx],v[cur_idx]);
               cur_idx=right_idx;
            }
            else{
                break;
            }
        }
        else if (left_idx<=last_idx){
            //left acea
            if(v[left_idx]<v[cur_idx]){
                swap(v[left_idx],v[cur_idx]);
                cur_idx=left_idx;
            }
            else break;
        }
        else if(right_idx<=last_idx){
            //right asea

            if(v[right_idx]<v[cur_idx]){
                swap(v[right_idx],v[cur_idx]);
                cur_idx=right_idx;
            }
            else break;

        }
        else {
            //children nai 
            break;
        }
    }


}


void print_heap(vector<int> v){
    for(auto val : v) cout<<val<<" ";
}



int main(){
     
    //  insertAtMaxHeap();
    // insertAtMinHeap();

    //insert from main
    int n;
    cin>>n;

    vector<int>v;

    // for(int i=0;i<n;i++){
    //  int x;
    //  cin>>x;
    //  insertAtMaxHeapfromMainfun(v,x);
    // }
    // deleteFromMaxHeap(v);
    // print_heap(v);

    for(int i=0;i<n;i++){
     int x;
     cin>>x;
     insertAtMinHeapfromMainfun(v,x);
    }
     deleteFromMinHeap(v);
    print_heap(v);
    
   
    return 0;

}