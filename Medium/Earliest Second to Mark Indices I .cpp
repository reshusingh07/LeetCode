#define ll long long

class Solution {
public:
    
    bool isPossible(vector<int>& nums, vector<int>& ci,int n,int m,ll sum,int ind){
        if(ind<sum-1) return false;
        
        unordered_map<int,int> mp;
        for(int i=0;i<=ind;i++) mp[ci[i]]=i;
        if(mp.size()!=n) return false;
        
        int time=0;
        //{last occ,time};
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(auto it:mp) pq.push({it.second , nums[it.first]});
        
        while(!pq.empty()){
            int last=pq.top().first , t=pq.top().second;
            pq.pop();
            if(last-time<t) return false;
            time+=t+1;
        }
        
        return true;
    }
    
    int earliestSecondToMarkIndices(vector<int>& nums, vector<int>& ci) {
        int n=nums.size() , m=ci.size();
        for(int i=0;i<m;i++) ci[i]--;
        
        ll mini=0 , maxi=m-1 , out=-1;
        ll sum=0;
        for(auto num:nums) sum+=num;
        
        while(mini<=maxi){
            ll mid=mini+((maxi-mini)>>1);
            if(isPossible(nums,ci,n,m,sum,mid)){
                out=mid+1;
                maxi=mid-1;
            }
            else mini=mid+1;
        }
        
        return out;
    }
};
