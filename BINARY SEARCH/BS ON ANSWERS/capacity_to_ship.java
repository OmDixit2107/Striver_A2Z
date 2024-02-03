class capacity_to_ship {
    public int maxi(int[] nums) {
        int n = nums.length;
        int maxm = nums[0];
        for (int i = 1; i < n; i++) {
            maxm = Math.max(maxm, nums[i]);
        }
        return maxm;
    }

    public int no_of_days(int[] nums, int d) {
        int n = nums.length;
        int days = 1, load = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] + load > d) {
                load = nums[i];
                days += 1;
            } else {
                load += nums[i];
            }
        }
        return days;
    }

    public int shipWithinDays(int[] weights, int days) {
        int s = 0, n = weights.length;
        for (int i = 0; i < n; i++) {
            s += weights[i];
        }
        int low = maxi(weights), high = s;
        while (low <= high) {
            int mid = (low + high) / 2;
            int dayz = no_of_days(weights, mid);
            if (dayz <= days) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
}