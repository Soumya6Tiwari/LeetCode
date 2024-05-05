class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k)
    {
        deque<int>d1;
        vector<int>ans;
        
        // process the k elements in the decreasing order in the deque 
        for ( int i = 0 ; i < k ; i++)
        {
            int element = nums[i];
            while( (!d1.empty() ) && nums[d1.back()] <= element )
            {
                d1.pop_back();
            }
            // finally push the current element into the deque
            d1.push_back(i);
        }
        for( int i = k ; i < nums.size(); i++)
        {
            // store the ans of the previous window 
            ans.push_back(nums[d1.front()]);
            // check for the next window
            while(  (!d1.empty() ) && (i - d1.front() >= k) )
            {
                d1.pop_front();
                // popping in order to make decreasing queue
            }
            // now we need to push acc to condition
            while( (!d1.empty() ) && ( nums[d1.back()] <= nums[i]) )
            {
                d1.pop_back();
            }
            // as our deque is in the dec order so now push the index
            d1.push_back(i);
        }
        // handling the last window case
        
        if(!d1.empty())
            {
                ans.push_back(nums[d1.front()]);
            }
        
  return ans;
    }
};