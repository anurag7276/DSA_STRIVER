/*

int floorSqrt(int n) {
    int ans = sqrt(n);
    return ans;
}

*/

/*

int floorSqrt(int n) {
    int low = 1, high = n , ans=1;
    //Binary search on the answers:
    while (low <= high) {
        long long mid = (low + high) / 2;
        long long val = mid * mid;
        if (val <= (long long)(n)) {
            //eliminate the left half:
                ans = mid;
            low = mid + 1;
        }
        else {
            //eliminate the right half:
            high = mid - 1;
        }
    }
    return high;
    // or return ans;
}

*/