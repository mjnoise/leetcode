#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length()> haystack.length()){
            return -1;
        }
        int i=0;
        while(i<haystack.length() - needle.length()+1){
            int j=0;
            while( j< needle.length() && haystack[i]==needle[j] ){
                j++;
                i++;
            }
            if(j== needle.length()){
                return i-j;
            }
            if(j>0){
                i= i-j;
            }
            i++;
        }
        return -1;
    }
};

int main(){
    Solution sol;
    cout<< sol.strStr("butsad","sad");
}