
public class SQRT {

    public static int sqrtN(long N) {
        // Initialize low and high for binary search
        long low = 1;
        int ans = 1;
        long high = N;

        // Binary search loop
        while (low <= high) {
            long mid = (low + high) / 2;

            // Check if mid*mid is less than or equal to N
            if (mid * mid <= N) {
                // If true, update low and ans
                low = mid + 1;
                ans = (int) mid;
            } else {
                // If false, update high
                high = mid - 1;
            }
        }

        // Return the integer square root
        return ans;
    }
}
