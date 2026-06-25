class Solution {
public:
    int mySqrt(int x) {
        long long ans = 0;
        int low = 1;
        int high = x;
        if(x == 0) return 0;

        while(low <= high) {
            

            long long mid = low + ( high - low) / 2;
            long long square = mid * mid;

            if(square == x) {
                return mid;

            }
            else if (square <= x){
                ans = mid;
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return ans;
    }
};