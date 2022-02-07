class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
        vector<pair<int, int>> p;

        for(int i=0;i<nums.size();i++)
            p.push_back({nums[i], i});
        
        sort(p.begin(), p.end());

        int swaps = 0;
        for(int i=0;i<nums.size();i++){
             if(p[i].second != i){
                 swaps++;
                 swap(v[i], v[v[i].second]);
                 i--;
             }
        }

        return swaps;
	}
};