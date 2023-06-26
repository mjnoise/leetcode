#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(), digits.end());
        int carry=0;
        for(int i= 0; i<digits.size() || carry; i++){
            //ending case
            if(i== digits.size()&& carry){
                digits.push_back(1);
                break;
            }

            //for the ones digit
            if(i==0){
                if(digits[i]==9){
                    carry= 1;
                    digits[i]= 0;
                    continue;
                }else{
                    digits[i]+= 1;
                }
            }
           
            if(carry){
                if(digits[i]==9){
                    carry= 1;
                    digits[i]= 0;
                }else{
                    carry= 0;
                    digits[i]+= 1;
                }
            }
        }
                  
        reverse(digits.begin(), digits.end());
        return digits;
        
    }
};

int main(){
    Solution sol;
    vector<int> c {8,9,9};
    vector<int> result= sol.plusOne(c);
    for(int i: result){
        cout<<i;
    }
    return 0;
}