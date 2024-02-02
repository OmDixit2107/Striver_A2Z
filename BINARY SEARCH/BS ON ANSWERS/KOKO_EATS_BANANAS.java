class KOKO_EATS_BANANAS {
    public int maxele(int[] arr) {
        int n = arr.length;
        int min = arr[0];
        for (int i = 1; i < n; i++) {
            min = Math.max(min, arr[i]);
        }
        return min;
    }

    public int total_hours(int[] arr, int hours) {
        int n = arr.length;
        int tot_h = 0;
        for (int i = 0; i < n; i++) {
            tot_h += Math.ceil((double) arr[i] / (double) hours);
        }
        return tot_h;
    }

    public int minEatingSpeed(int[] piles, int h) {
        int low = 0, high = maxele(piles);
        while (low <= high) {
            int mid = (low + high) / 2;
            int total_h = total_hours(piles, mid);
            if (total_h <= h)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low;
    }
}