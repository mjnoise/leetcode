#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k= m+n-1;
        int ptr2=   n-1;
        if(m == 0 && n>0){
           while(k > -1){
               nums1[k]= nums2[ptr2];
                k--;
                ptr2--;
            }
        }
        int ptr1= m-1;
       

        while(ptr1>-1 && ptr2 >-1){
            if(nums1[ptr1] >= nums2[ptr2]){
                nums1[k]= nums1[ptr1];
                ptr1--;               
            }else{
                nums1[k]= nums2[ptr2];
                ptr2--;
            }
            k--;
        }
        while(k > -1 && ptr2 >-1){
            nums1[k]= nums2[ptr2];
            k--;
            ptr2--;
        }
        
    }
};