class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        // Step 1: Count frequency
        unordered_map<int, int> mp;
        for(int num : nums) {
            mp[num]++;
        }
        
        // Step 2: Min Heap (frequency, number)
        priority_queue<
            pair<int,int>, 
            vector<pair<int,int>>, 
            greater<pair<int,int>>
        > pq;
        
        // Step 3: Push into heap
        for(auto it : mp) {
            pq.push({it.second, it.first});
            
            // Keep only top k elements
            if(pq.size() > k) {
                pq.pop();
            }
        }
        
        // Step 4: Extract result
        vector<int> result;
        while(!pq.empty()) {
            result.push_back(pq.top().second);
            pq.pop();
        } 
        
        return result;
    }
};
