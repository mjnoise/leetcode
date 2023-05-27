#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int result= 0;
        unordered_map<char,int> map= {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        for(int i=1; i<s.length(); i++){
            if(map.at(s[i-1]) >= map.at(s[i])){
                result+= map[s[i-1]];
            }else{
                result-= map[s[i-1]];
            }
        }
        return result+map.at(s[s.length()-1]);
    }
};