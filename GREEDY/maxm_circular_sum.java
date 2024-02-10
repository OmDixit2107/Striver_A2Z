package GREEDY;

class maxm_circular_sum {
    // https://www.geeksforgeeks.org/problems/max-circular-subarray-sum-1587115620/1
    // a: input array
    // n: size of array
    // Function to find maximum circular subarray sum.
    static long circularSubarraySum(int a[], int n) {
        long curr_sum = 0, min_sum = 0, total_sum = 0;
        for (int i = 0; i < n; i++) {
            total_sum += a[i];
            curr_sum += a[i];
            min_sum = Math.min(min_sum, curr_sum);
            if (curr_sum > 0)
                curr_sum = 0;
        }
        curr_sum = 0;
        long max_sum = Integer.MIN_VALUE;
        for (int i = 0; i < n; i++) {
            curr_sum += a[i];
            max_sum = Math.max(max_sum, curr_sum);
            if (curr_sum < 0)
                curr_sum = 0;
        }
        if (max_sum < 0)
            return max_sum;
        return Math.max(total_sum - min_sum, max_sum);
    }

}