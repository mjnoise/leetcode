#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int climbStairs(int n){     
       if(n==0) return 0;
       if(n==1) return 1;
       if(n==2) return 2;

       int base1= 0;
       int base2= 1;
       int base3= 2;
       int curr;

       for(int i=3; i<=n; i++){
        curr= base2 +base3;
        base1 = base2;
        base2 = base3;
        base3= curr;
       }

       return curr;
    }
};

int main(){
    Solution solution;
    cout<< solution.climbStairs(5);
    return 0;
}