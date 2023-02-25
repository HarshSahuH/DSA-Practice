class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        if(intervals.size() <= 1){
            return intervals;
        }
        
        vector<vector<int>> res;

        sort(intervals.begin(),intervals.end());
        
        vector<int> curr = intervals[0];
        
        for(int i=1; i<intervals.size(); i++){
            if(curr[1] < intervals[i][0]){
                res.push_back(curr);
                curr = intervals[i];
            }
            else{
             curr[1] = max(curr[1],intervals[i][1]);
            }
        }
        
         res.push_back(curr);
        return res;
    }
};