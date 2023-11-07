class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<double>time;
        
        for(int i=0 ;i<speed.size(); i++)
            time.push_back((double)dist[i]/(double)speed[i]);
        
        sort(time.begin(),time.end());
        
        int t = 0,ans = 0;
        for(auto x : time)
        {
            if(x <= t)
                break;
            else{
                t++;
                ans++;
            }
        }
        return ans;
    }
};