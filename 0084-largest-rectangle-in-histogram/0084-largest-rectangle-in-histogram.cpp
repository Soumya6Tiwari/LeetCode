class Solution {
public:
    vector<int>nextSmallerElements(vector<int>heights)
    {
        vector<int>arr;
        stack<int>st;
        st.push(-1);
        for(int i=heights.size()-1;i>=0;i--)
        {
            while(st.top()!=-1&&heights[st.top()]>=heights[i])
            {
                st.pop();
            }
            arr.push_back(st.top());
            st.push(i);
            
        }
        reverse(arr.begin(),arr.end());
        return arr;      
    }
     vector<int>prevSmallerElements(vector<int>heights)
    {
        vector<int>arr;
        stack<int>st;
        st.push(-1);
        for(int i=0;i<heights.size();i++)
        {
            while(st.top()!=-1&&heights[st.top()]>=heights[i])
            {
                st.pop();
            }
            arr.push_back(st.top());
            st.push(i);
        }
        return arr;      
    }
    int largestRectangleArea(vector<int>& heights) 
    {
        vector<int>ans;
        vector<int>next=nextSmallerElements(heights);
        vector<int>prev=prevSmallerElements(heights);
        for(int i=0;i<next.size();i++)
        {
            if(next[i]==-1)
            {
                next[i]=next.size();
            }
        }
        for(int i=0;i<next.size();i++)
        {
            int width=next[i]-prev[i]-1;
            int area=width*heights[i];
            ans.push_back(area);
        
        }
        sort(ans.begin(),ans.end());
        reverse(ans.begin(),ans.end());
        return ans[0];
    }
};