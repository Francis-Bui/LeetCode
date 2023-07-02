class Solution {
public:
    int maximumRequests(int n, vector<vector<int>>& requests) {
        int ans = 0;
        vector<int> excess(n,0);
        int non_zero;
        util(excess,0,0,requests,ans,0);
        return ans;
    }
    void util(vector<int>&excess, int reqNo, int processed, vector<vector<int>>&requests,int &ans, int non_zero){
        if(reqNo == requests.size()){
            if(non_zero)
                return;
            ans = max(ans,processed);
            return;
        }
        util(excess, reqNo+1, processed, requests, ans, non_zero);
        if(excess[requests[reqNo][0]]-- == 1)
            non_zero--;
        else if(excess[requests[reqNo][0]] == -1)
            non_zero++;
        if(excess[requests[reqNo][1]]++ == 0)
            non_zero++;
        else if(excess[requests[reqNo][1]]==0)
            non_zero--;
        util(excess, reqNo+1, processed+1, requests, ans, non_zero);
        excess[requests[reqNo][1]]--;
        excess[requests[reqNo][0]]++;
    }
};