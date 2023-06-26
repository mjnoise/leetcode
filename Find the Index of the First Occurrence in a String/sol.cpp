#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length()> haystack.length()){
            return -1;
        }
        //METHOD 1
        // int i=0;
        /*while(i<haystack.length() - needle.length()+1){
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
        return -1;*/

        //METHOD 2

        //PREPROCESSING LPS
        int prev=0;
        int needleLength= needle.size();
        int arr[needleLength];
        arr[prev]=0;
        int i=1;
        while(i< needleLength){
            if(needle[i] == needle[prev]){
                arr[i]= ++prev;
                i++;
            }else{
                if(prev==0){
                    arr[i]= 0;
                    i++;
                }else{
                    prev= arr[prev-1];
                }
            }
        }
        for(int a :arr){
            cout<<a<<" ";
        }
        return 1;

    }
        
};

int main(){
    Solution sol;
    sol.strStr("oniommonion","onion");
}