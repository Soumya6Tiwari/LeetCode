class Solution {
public:
//     void calculate(int index,int target,vector<int>&candidates,set<vector<int>>&res,vector<int>&v)
//     {
//         if(index==candidates.size())
//         {
//             if(target==0)
//             {
                
//                 res.insert(v);
//             }
//             return;
//         }
        
//         // to pick up case
//         if(candidates[index]<=target)
//         {
//         v.push_back(candidates[index]);
//         calculate(index+1,target-candidates[index],candidates,res,v);
//         v.pop_back();
//         }
            
        
//         // not to pick up case
        
//         calculate(index+1,target,candidates,res,v);
//     }
    
    
    
    
    void optimal_calculation(vector<int>&candidates,int target,int index,vector<int>&v,vector<vector<int>>&res)
    {
        
            if(target==0)
            {
                res.push_back(v);
                return ;
            }
            
        
        for(int i=index;i<candidates.size();i++)
        {
            
            if(i>index&&candidates[i]==candidates[i-1])
            {
                continue;
            }
            if(candidates[i]>target)
            {
                break;
            }
            
            // pickup case
            v.push_back(candidates[i]);
            optimal_calculation(candidates,target-candidates[i],i+1,v,res);
            v.pop_back();
            
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        //BRUTE FORCE APPROACH   taking TC= O((2^n)*k*logn)   so TLE will come
        // vector<vector<int>>ans;
        // set<vector<int>>res;
        // vector<int>v;
        // set<int>s;
        // int i,j,k;
        // int index=0;
        // // sort the array and then send it to the recursion to avoid duplicacy
        // sort(candidates.begin(),candidates.end());
        // calculate(index,target,candidates,res,v);
        // ans.assign(res.begin(),res.end());
        // return ans;
        
        
        
        // OPTIMAL APPROACH WITH A TC OF O((2^n)*k)
        int index=0;
        vector<int>v;
        vector<vector<int>>res;
        sort(candidates.begin(),candidates.end());
        optimal_calculation(candidates,target,index,v,res);
        return res;
        
        
    }
};