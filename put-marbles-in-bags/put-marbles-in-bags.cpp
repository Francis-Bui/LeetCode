class Solution {
public:
    long long putMarbles(vector<int>& v, int k) {
        priority_queue<int> pq1; // Create a max heap priority queue (pq1) to store the sums of adjacent elements in vector v
        priority_queue<int,vector<int>,greater<int>> pq2; // Create a min heap priority queue (pq2) to store the sums of adjacent elements in vector v
        for(int i = 0; i < v.size()-1; i++){ // Iterate through the vector v (except the last element)
            pq1.push(v[i]+v[i+1]); // Add the sum of the current element and the next element to pq1
            pq2.push(v[i]+v[i+1]); // Add the sum of the current element and the next element to pq2
            if(pq1.size()>k-1){ // If the size of pq1 is greater than k-1
                pq1.pop(); // Remove the maximum element from pq1 (as it only needs to keep k-1 smallest sums)
                pq2.pop(); // Remove the minimum element from pq2 (as it only needs to keep k-1 largest sums)
            }
        }
        long long int ans1 = 0, ans2 = 0; // Initialize two variables ans1 and ans2 to store the cumulative sums
        while(!pq1.empty()){ // While pq1 is not empty
            ans1 += pq1.top(); // Add the top element of pq1 to ans1
            ans2 += pq2.top(); // Add the top element of pq2 to ans2
            pq1.pop(); // Remove the top element from pq1
            pq2.pop(); // Remove the top element from pq2
        }
        return ans2-ans1; // Return the difference between ans2 and ans1
    }
};