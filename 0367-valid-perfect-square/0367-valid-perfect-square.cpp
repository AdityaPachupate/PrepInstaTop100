class Solution {
public:
    bool isPerfectSquare(int num) {
        long int low = 1;
        long int high = num;
        long int mid = 0;
        long int sqrt = 0;

        while (low <= high) {
            mid = low + (high - low) / 2;
            sqrt = mid * mid;
            if (sqrt == num) {
                return true;
            } else if (sqrt < num) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return false;
    }
};