class Solution {
public:
    string frequencySort(string s) 
    {
       map<char,int>m;
        string str="";
        priority_queue<pair<int,char>,vector<pair<int,char>>,less<pair<int,char>>>pq;
        int i,j,k;
        for(i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        i=0;
        for(auto i:m)
        {
            pair<int,char>p={i.second,i.first};
            pq.push(p);
            
        }
        while(!pq.empty())
        {
            pair<int,char>temp=pq.top();
            str.append(temp.first, temp.second);
            pq.pop();
        }
        return str;
    }
};