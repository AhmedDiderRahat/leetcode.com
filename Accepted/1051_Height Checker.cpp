#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {

        vector<int> sortedHeight(heights);
        sort(sortedHeight.begin(), sortedHeight.end());

        int missMatch = 0;

        for(int i=0; i<sortedHeight.size(); i++)
        {
            if(sortedHeight[i] != heights[i])
                missMatch++;
        }

        return missMatch;
    }
};

int main()
{
    vector<int> arr;

    int n, t, ans;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>t;
        arr.push_back(t);
    }

    Solution ob;// = new Solution();

    ans = ob.heightChecker(arr);

    cout<<ans;

    return 0;
}
