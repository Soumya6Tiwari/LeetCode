class Solution {
public:
    vector<int> findArray(vector<int>& pref)
    {
        int i,j,k,val;
        vector<int>result;
        result.push_back(pref[0]);
        for(i=0;i<pref.size()-1;i++)
        {
            val=pref[i]^pref[i+1];
            result.push_back(val);
        }
        return result;
    }
};