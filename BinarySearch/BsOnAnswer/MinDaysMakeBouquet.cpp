/*

bool possible(vector<int> &arr, int day, int m, int k) {
    int n = arr.size(); //size of the array
    int cnt = 0;
    int noOfB = 0;
    // count the number of bouquets:
    for (int i = 0; i < n; i++) {
        if (arr[i] <= day) {
            cnt++;
        }
        else {
            noOfB += (cnt / k);
            cnt = 0;
        }
    }
    noOfB += (cnt / k);
    return noOfB >= m;
}
int roseGarden(vector<int> arr, int k, int m) {
    long long val = m * 1ll * k * 1ll;
    int n = arr.size(); //size of the array
    if (val > n) return -1; //impossible case.
    //find maximum and minimum:
    int mini = INT_MAX, maxi = INT_MIN;
    for (int i = 0; i < n; i++) {
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }

    for (int i = mini; i <= maxi; i++) {
        if (possible(arr, i, m, k))
            return i;
    }
    return -1;
}
*/

/*
// optimal solution using binary search:
class Solution {
public:

    bool possible(vector<int> &arr, int day, int m, int k) {
        int n = arr.size(); //size of the array
        int cnt = 0;
        int noOfB = 0;
        // count the number of bouquets:
        for (int i = 0; i < n; i++) {
            if (arr[i] <= day) {
                cnt++;
            }
            else {
                noOfB += (cnt / k);
                cnt = 0;
            }
        }
        noOfB += (cnt / k);
        return noOfB >= m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
       
            long long val = m * 1ll * k * 1ll;
            int n = bloomDay.size(); //size of the array
            if (val > n) return -1; //impossible case.
            //find maximum and minimum:
            int mini = INT_MAX, maxi = INT_MIN;
            for (int i = 0; i < n; i++) {
                mini = min(mini, bloomDay[i]);
                maxi = max(maxi, bloomDay[i]);
            }

            //apply binary search:
            int low = mini, high = maxi;
            while (low <= high) {
                int mid = (low + high) / 2;
                if (possible(bloomDay, mid, m, k)) {
                    high = mid - 1;
                }
                else low = mid + 1;
            }
            return low;
        }
        

    
};
*/