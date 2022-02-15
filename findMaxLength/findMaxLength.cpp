/*
Given a binary array nums, return the maximum length of a contiguous subarray with an equal number of 0 and 1.

 

Example 1:

Input: nums = [0,1]
Output: 2
Explanation: [0, 1] is the longest contiguous subarray with an equal number of 0 and 1.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int maxLength=0, maxSum=0, currSum=0;
        map<int, vector<int>> hash;
        vector<int> arr;
        for(auto i:nums){
            
            if(i==0){
                currSum-=1;
            }else{
                currSum+=1;
            }
            arr.push_back(currSum);
        }
        for(auto i=0; i<nums.size(); i++){
            if(arr[i]==0){
                maxLength= i+1;
            }
        }
        for(auto i=0; i<arr.size(); i++){
            hash[arr[i]].push_back(i);    
        }
        
        map<int, vector<int>>:: iterator x= hash.begin();
        advance(x,hash.size()-2);
        vector<int> seconds= x->second;
    
        return (maxLength> seconds[seconds.size()-1]-seconds[0])? maxLength: seconds[seconds.size()-1]-seconds[0] ;
    }
    
};
int main(){
    Solution sol;
    vector<int> a{0,1,1,1,0,1,1,0};
    int x= sol.findMaxLength(a);
    cout<<x;
    return 0;
}
