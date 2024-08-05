class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) 
    {
        unordered_map<string,int>m;
        int i,j;
        string ans;
        vector<string>v;
        for(i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        for (const string& str : arr)
        {
            if (m[str] == 1) {
                v.push_back(str);
            }
         }
           
        if(v.size()<k)
        {
            return "";
        }
        return v[k-1];
    }
};