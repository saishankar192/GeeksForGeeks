
class Solution {
  public:
    int findPosition(int N) {
        int cnt = 0, pos=0;
        while(N > 0){
            pos++;
            if(N & 1)
                cnt++;
            N = N>>1;

            if(cnt>1)
                return -1;
        }
        return pos==0 ? -1: pos;
    }
};

// we can use n & (n-1) condition - this will confirm wether a given number is exactly power of 2 or not