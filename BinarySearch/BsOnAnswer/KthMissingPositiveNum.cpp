/*
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
       int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        int missing = arr[mid] - (mid + 1);
        if (missing < k) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return k+low;
    }
};
*/
/*
// brute force solution
int missingK(vector < int > vec, int n, int k) {
    for (int i = 0; i < n; i++) {
        if (vec[i] <= k) k++; //shifting k
        else break;
    }
    return k;
}
*/