//Code by shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

void permutation(vector<int>nums){
    //unique and not unique 2 tay ei kaj kore
    sort(nums.begin(),nums.end());

    do{
        for(int num : nums){
            cout<<num<<" ";
        }
        cout<<endl;
    }while(next_permutation(nums.begin(),nums.end()));
}

void permuteUniqueRecursive(vector<int>& nums, int l, int r) {
    //only unique item
    if (l == r) {
        // Print the current permutation
        for (int num : nums) {
            cout << num << " ";
        }
        cout << endl;
    } else {
        // Recursively swap and backtrack
        for (int i = l; i <= r; i++) {
            //1 ta position niteoo pari naoo nite pari
            swap(nums[l], nums[i]);  // Swap the current element with the first one
            permuteUniqueRecursive(nums, l + 1, r); // Recurse on the remaining elements
            swap(nums[l], nums[i]);  // Backtrack
        }
    }
}//bujci


void permuteUnique(vector<int>& nums, int l, vector<vector<int>>& result) {
    if (l == nums.size()) {
        result.push_back(nums);  // Base case: reached a valid permutation
        return;
    }
    
    for (int i = l; i < nums.size(); i++) {
        // Skip duplicates: Ensure that nums[i] is not the same as any number we have already processed at this level
        bool shouldSwap = true;
        for (int j = l; j < i; j++) {
            if (nums[j] == nums[i]) {
                shouldSwap = false;
                break;
            }
        }
        
        if (shouldSwap) {
            swap(nums[l], nums[i]);  // Swap current element
            permuteUnique(nums, l + 1, result);  // Recurse for next level
            swap(nums[l], nums[i]);  // Backtrack
        }
    }
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     vector<int> nums = {1, 1, 3};
     permutation(nums);
    // permuteUniqueRecursive(nums,0,nums.size()-1);

     
    return 0;

}