class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr)
    {
        sort(arr.begin(),arr.end());
        int i,j,k,d;
        set<int>s;
        for(i=1;i<arr.size();i++)
        {
            d=arr[i]-arr[i-1];
            s.insert(d);
        }
        if(s.size()==1)
        {
            return true;
        }
        return false;
    }
};