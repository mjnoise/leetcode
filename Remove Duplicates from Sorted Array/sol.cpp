#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int curr = nums[0];
        int currIdx = 0;
        int nextIdx = 1;
        int newIdx= 1;
        int k = 1;
        while (nextIdx < nums.size())
        {
            if (nums[currIdx] != nums[nextIdx]){
                nums[newIdx] =nums[nextIdx];
                k++;
                newIdx++;
                currIdx= nextIdx;
            }else{
                nextIdx++;
            }
        }
        return k;
    }
};

int main()
{
    Solution sol;
    vector<int> v{1, 1,1,2,2,2, 2,3,4,5,5,5};
    int k = sol.removeDuplicates(v);
    cout << "this is k: " << k << endl;
    for (int i = 0; i < k; i++)
    {
        cout << v[i] << endl;
    }
}