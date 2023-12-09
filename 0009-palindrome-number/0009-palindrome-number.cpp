class Solution {
public:
    bool isPalindrome(int x) {
        vector<int>res;
        vector<int>copy;
        int i,j,k=0,num,val=1;
        if(x<0)
        {
            return false;
        }
        else
        {
            
            while(x>0)
            {
                num=x%10;
                res.push_back(num);
                x=x/10;
                
            }
            copy=res;
            
            
        }
        
        reverse(res.begin(),res.end());
        if(res==copy)
        {
            return true;
        }
        return false;
        
        
        
        
        
        
        
    }
};