class Solution{
    public:
    int transfigure (string A, string B)
    {
    	// Your code goes here
    	int sum = 0;
    	for(int i=0;i<A.size();i++){
    	    sum += A[i];
    	    sum -= B[i];
    	}
    	if(sum!=0)
    	    return -1;
    	
        int j = A.size()-1, cnt=0;
        for(int i=A.size()-1;i>=0;i--){
            if(A[i]!=B[j])
                cnt++;
            else
                j--;
        }

        return cnt;
    }
};
