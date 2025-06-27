/*
vector<int> findIntersectionOf2SortedArr(vector<int>& arr1, c vector<int>& arr2) {
    vector<int> intersection;
    int i = 0, j = 0;

    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) { // if small then no corresponding element exist in arr2
                    i++;
        } else if (arr1[i] > arr2[j]) {
            j++;
        } else {
            intersection.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    return intersection;
}
*/

/*
// brute force approach
vector<int> findIntersectionOf2SortedArr(vector<int>& arr1, vector<int>& arr2) {
    vector<int> intersection;
   vector<int> vis = {0};
        for (int i = 0; i < arr1.size(); i++) {
                for (int j = 0; j < arr2.size(); j++) {
                if (arr1[i] == arr2[j] && vis[j] == 0) {
                        intersection.push_back(arr1[i]);
                        vis[j] = 1; // mark as visited
                        break; // move to next element in arr1
                }
                        if (arr1[i] < arr2[j]) {
                            break; // no corresponding element in arr2
                        }
                }
        }
        return intersection;
}
*/