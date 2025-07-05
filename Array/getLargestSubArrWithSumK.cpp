/*
// brute force approach to find the largest subarray with sum k

int getLongestSubarray(vector<int>& a, long long k) {
    int n = a.size(); // size of the array.

    int len = 0;
    for (int i = 0; i < n; i++) { // starting index
        for (int j = i; j < n; j++) { // ending index
            // add all the elements of
            // subarray = a[i...j]:
            long long s = 0;
            for (int K = i; K <= j; K++) {
                s += a[K];
            }

            if (s == k)
                len = max(len, j - i + 1);
        }
    }
    return len;
}


*/

/*
// optimal approach to find the largest subarray with sum k if all positive numbers

int getLargestSubarray(vector<int>& a, long long k) {
    int n = a.size(); // size of the array.
    int len = 0;
    int i = 0, j = 0;
    long long s = a[0]; 

    while (j < n) {
       while(i <= j && s > k) {
            s -= a[i];
            i++;
        }
        if (s == k) {
            len = max(len, j - i + 1);
        }

        j++;
        if (j < n) {
            s += a[j];
        }
    }
    return len;
}
    // time complexity: O(2n)
    // space complexity: O(1)
*/

/*
//  find the largest subarray with sum k if all numbers can be negative or positive 

int getLongestSubarray(vector<int>& a, int k) {
    int n = a.size(); // size of the array.

    int len = 0;
    for (int i = 0; i < n; i++) { // starting index
        int s = 0;
        for (int j = i; j < n; j++) { // ending index
            // add the current element to
            // the subarray a[i...j-1]:
            s += a[j];

            if (s == k)
                len = max(len, j - i + 1);
        }
    }
    return len;
}




*/