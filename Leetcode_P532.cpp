#include<iostream>
#include<vector>
#include <bits/stdc++.h>
#include<set>
using namespace std;
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int i=0,j=1;
        set<pair<int,int>> ans;
        sort(nums.begin(),nums.end());
        while(j<nums.size()){
            int diff = nums[j]-nums[i];
            if(diff == k){
                ans.insert({nums[i],nums[j]});
                ++i, ++j;
                
            }
            else if(diff > k){
                i++;
            }
            else{
                j++;
            }
            if(i==j) j++;
        }
       return ans.size(); 
    }
};

int main(){


    vector<int>nums;
    for(int i=0; i<nums.size(); i++){
        nums.push_back(nums[i]); // sss
    }
    int k;
    cin>>k;
    Solution pairs;
    pairs.findPairs(nums,k);
    return 0;
}