class split_array {
    public int maxi(int[] n) {
        int maxx = n[0];
        for (int i = 1; i < n.length; i++) {
            maxx = Math.max(maxx, n[i]);
        }
        return maxx;
    }

    public int arrsum(int[] n) {
        int s = 0;
        for (int i = 0; i < n.length; i++) {
            s += n[i];
        }
        return s;
    }

    boolean is_valid(int[] nums, int t, int k) {
        int s = 0, count = 1;
        for (int i = 0; i < nums.length; i++) {
            s += nums[i];
            if (s > t) {
                count++;
                s = nums[i];
            }
        }
        return count <= k;
    }

    public int splitArray(int[] nums, int k) {
        int n = nums.length, ans = -1;
        if (k > n)
            return ans;
        int low = maxi(nums), high = arrsum(nums);
        while (low <= high) {
            int mid = (low + high) / 2;
            if (is_valid(nums, mid, k)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

}