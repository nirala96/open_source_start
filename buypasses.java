public int buyPasses(int[] arr, int k) {
        // Write your code here.
        int ans = 0;
        for (int i = 0; i < arr.length; i++) {
            if (i <= k) ans += Math.min(arr[k], arr[i]);
            else ans += Math.min(arr[k] - 1, arr[i]);
        }
        return ans;
    }
