#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()== 0){
            return "";
        }
        for(int i=0; i< strs[0].size(); i++){
            char toPoint= strs[0].at(i);
            for(int j=1; j<strs.size(); j++){
                if(i== strs[j].length() || strs[j].at(i) != toPoint){
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0];
    }
};