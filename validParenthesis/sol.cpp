#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        if (s.length() == 0)
        {
            return 1;
        }
        else if (s[0] == ')' || s[0] == ']' || s[0] == '}')
        {
            return 0;
        }
        else if (! (s.length() % 2 == 0))
        {
            return 0;
        }

        stack<char> doExist;
        for(char c: s){
           
            if (c == '(' || c == '[' || c == '{')
            {
                doExist.push(c);
            }else{
                if(doExist.empty()){
                    return 0;
                }
                char comp = doExist.top();
                if ( (comp == '(' && c == ')') || (comp == '[' && c == ']') || (comp == '{' && c == '}'))
                {
                    doExist.pop();
                }else{
                    return 0;
                }
            }
        }
    }
};

int main(){
    Solution sol;
    cout<< sol.isValid("([}}])") << endl;
    return 0;
}