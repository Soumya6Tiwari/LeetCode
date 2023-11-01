class Solution {
public:
    string defangIPaddr(string address) 
    {
        int i,j,k;
        vector<string>ans;
        string res="",p;
        char val;
        for(i=0;i<address.length();i++)
         {
              
                 
            if(address[i]!='.')
            {
                val=address[i];
               // j=stoi(val);
                p=val;
                ans.push_back(p);
            }
            if(address[i]=='.')
            {
                ans.push_back("[");
                ans.push_back(".");
                ans.push_back("]");
                
            }
            
        }
        for(i=0;i<ans.size();i++)
        {
            res=res+ans[i];
        }
        return res;
        
    }
};