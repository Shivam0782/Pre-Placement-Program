vector<int> topKFrequent(vector<int>& nums, int k) {
       vector<int>res;
       unordered_map<int,int>m;
       for(int i=0;i<nums.size();i++)
       {
           m[nums[i]]++;
       }
       priority_queue<pair<int,int>>maxh;
       auto it = m.begin();
       while(it!=m.end())
       {
           maxh.push({it->second,it->first});
           it++;
       }
       while(k>0)
       {
           res.push_back((maxh.top()).second);
           maxh.pop();
           k--;
       }
       return res;
   }
