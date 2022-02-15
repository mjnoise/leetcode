/*
URL: https://leetcode.com/problems/single-number/
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 Input: nums = [2,2,1]
Output: 1
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int number= nums[0]  ;
        for(int i=1;i<nums.size();i++){
            number ^= nums[i]; 
        }
        return number;
    }
};
int main(){
    Solution sol;
    vector<int> vec{4,1,2,2,1};
    cout<< sol.singleNumber(vec);
}