#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    void rotates(vector<int>& nums, int k)
    {
        vector<int> outputs(nums);

        k = k % nums.size();

        int j=0;

        for(int i=0; i<k; i++)
        {
            outputs[j++] = nums[i];
        }

        for(int i=k-1; i<nums.size(); i++)
        {
            outputs[j++] = nums[i];
        }



        for(int i=0; i<outputs.size(); i++)
        {
            cout<<outputs[i]<<" ";
        }
    }
};

int main()
{
    vector<int> arr;

    int n, t, k, ans;
    cin>>n>>k;

    for(int i=0; i<n; i++)
    {
        cin>>t;
        arr.push_back(t);
    }

    Solution ob;// = new Solution();

    ob.rotates(arr, k);

    //cout<<ans;

    return 0;
}
