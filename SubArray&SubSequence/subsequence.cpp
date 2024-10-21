//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void printSubsequences(vector<int>& arr, vector<int>& subseq, int index) {
    // Base case: if index reaches the end of the array
    if (index == arr.size()) {
        // Print the current subsequence
        for (int i = 0; i < subseq.size(); i++) {
            cout << subseq[i] << " ";
        }
        if (subseq.size() == 0) {
            cout << "{}"; // Empty subsequence
        }
        cout << endl;
        return;
    }

    // Include the current element in the subsequence
    subseq.push_back(arr[index]);
    printSubsequences(arr, subseq, index + 1);

    // Exclude the current element from the subsequence (backtrack)
    subseq.pop_back();
    printSubsequences(arr, subseq, index + 1);
}
//bujci

void printSubsequences2(vector<int>& arr) {
    // Initialize a vector to store subsequences
    vector<vector<int>> subsequences = {{}};
    
    // Traverse each element in the array
    for (int i = 0; i < arr.size(); i++) {
        int currentSize = subsequences.size();
        
        // For each existing subsequence, add the current element to form new subsequences
        for (int j = 0; j < currentSize; j++) {
            vector<int> newSubsequence = subsequences[j];  // Copy current subsequence
            newSubsequence.push_back(arr[i]);  // Add current element
            subsequences.push_back(newSubsequence);  // Add new subsequence
        }
    }

    // Print all subsequences
    for (auto& subseq : subsequences) {
        if (subseq.empty()) {
            cout << "{}";  // Print empty subsequence
        } else {
            for (int elem : subseq) {
                cout << elem << " ";
            }
        }
        cout << endl;
    }
}//bujci

// bit manupulation dia already korci

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
      vector<int> arr = {1, 2, 3};
    vector<int> subseq;

    cout << "All subsequences:\n";
    printSubsequences(arr, subseq, 0);
    // printSubsequences2(arr);
     
    return 0;

}