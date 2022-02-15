#include<bits/stdc++.h>
using namespace std;

/*
Given two strings s and p, return an array of all the start indices of p's anagrams in s. You may return the answer in any order.
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
Input: s = "abab", p = "ab"
Output: [0,1,2]
Explanation:
The substring with start index = 0 is "ab", which is an anagram of "ab".
The substring with start index = 1 is "ba", which is an anagram of "ab".
The substring with start index = 2 is "ab", which is an anagram of "ab".
*/
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        

        map<char,int> lib, temp;
        vector<int> result;

        if(s.length()<p.length()){
            return result;
        }

        for(auto i=0; i<p.length();i++){
            if(lib.find(p[i])==lib.end()){
                lib[p[i]]=1;
                continue;
            }
            lib[p[i]]++;
        }
        
        for(int i=0; i<s.length()-p.length()+1; i++){
            temp= lib;
            int j= 0;
            while(j<p.length()){
                auto it =temp.find(s[j+i]);  
                j++;    
                if(it==temp.end()){
                    break;
                }
                temp[it->first]-=1;
                
            }
        
            int flag=1;
            for(auto it=temp.begin();it!=temp.end();it++){
                if(it->second!=0){
                    flag=0;
                    break;
                }
            }
            if(flag){
                result.push_back(i);
            }
        }
        return result;

    }
};

int main(){
    Solution sol;
    vector<int> vec= sol.findAnagrams("cbaebabacd","abc");
  
    for(auto itr= vec.begin(); itr!=vec.end(); itr++){
        cout<<*itr<<endl;
    }
    return 0;
}