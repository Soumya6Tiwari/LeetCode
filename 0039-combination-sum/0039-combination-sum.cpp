class Solution {
public:
    void calculate (vector<int>&candidates,int target,int index, vector<int>&v,vector<vector<int>>&res)
    {
        if(index==candidates.size())
        {
            if(target==0)
            {
                res.push_back(v);
            }
               return;
           
        }
        
        // pick case
        if(candidates[index]<=target)
        {
            v.push_back(candidates[index]);
            calculate(candidates,target-candidates[index],index,v,res);
            v.pop_back();
        }
        
        // not pickup case
        
        calculate(candidates,target,index+1,v,res);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        vector<int>v;
        vector<vector<int>>res;
        int index=0;
        calculate(candidates,target,index,v,res);
        return res;
        
    }
};