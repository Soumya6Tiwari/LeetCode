class Solution {
public:
    string interpret(string command)
    {
        vector<string>v;
        int i,j,k;
        char ch;
        string str,ans="";
        for(i=0;i<command.size();i++)
        {
            if(command[i]=='G')
            {
                str="G";
                v.push_back(str);    
            }
            else if(command[i]=='(')
            {
                if(command[i+1]==')')
                {
                    str="o";
                    v.push_back(str);
                }
                else
                {
                   str="al";
                    v.push_back(str);
                }
            }
        }
        for(i=0;i<v.size();i++)
        {
            ans=ans+v[i];
        }
        return ans;
        
    }
};