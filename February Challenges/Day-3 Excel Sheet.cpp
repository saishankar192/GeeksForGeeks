class Solution{
    public:
    string ExcelColumn(int N)
    {
        string ans ="";
        while(N){
            int rem = N%26;
            if(rem==0){
                ans = 'Z'+ans;
                N = ((N/26) -1);
            }
            else{
                char c = 'A'+rem-1;
                ans = c + ans;
                N/=26;
            }
        }
        return ans;
    }
};
