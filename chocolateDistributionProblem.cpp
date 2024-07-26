long long findMinDiff(vector<long long> a, long long n, long long m){
     if (m > n) {
        return -1;
    }

    // Sort the array
    std::sort(a.begin(),a.end());

    // Initialize the minimum difference to a large value
    int minDiff = INT_MAX;

    // Find the minimum difference using a sliding window of size M
    for (int i = 0; i <= n - m; i++) {
        int currentDiff = a[i + m - 1] - a[i];
        if (currentDiff < minDiff) {
            minDiff = currentDiff;
        }
    }

    return minDiff;
}