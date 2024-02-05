class Missing_pve_integer {
    public int findKthPositive(int[] arr, int k) {
        int l = 0, n = arr.length, h = n - 1;
        while (l <= h) {
            int mid = (l + h) / 2;
            int missing = arr[mid] - (mid + 1);
            if (missing < k)
                l = mid + 1;
            else
                h = mid - 1;
        }
        return k + l;
    }
}