class Solution {
    public boolean check(int[] arr, int k, int m) {
        int n = arr.length, cnt = 0;
        for (int i = 0; i < n; i++) {
            cnt += Math.ceil((double) arr[i] / (double) k);
        }
        return cnt <= m;
    }

    public int smallestDivisor(int[] nums, int threshold) {
        // answewr can be from 1 to max in the array
        int n = nums.length, ans = 0;
        int maxi = Integer.MIN_VALUE;
        for (int i = 0; i < n; i++) {
            maxi = Math.max(nums[i], maxi);
        }
        int low = 0, high = maxi;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (check(nums, mid, threshold)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
}