/*
int findCeil(int arr[], int n, int x) {
	int low = 0, high = n - 1;
	int ans = -1;

	while (low <= high) {
		int mid = (low + high) / 2;
		// maybe an answer
		if (arr[mid] >= x) {
			ans = arr[mid];
			//look for smaller index on the left
			high = mid - 1;
		}
		else {
			low = mid + 1; // look on the right
		}
	}
	return ans;
}

Case 1 - If arr[mid] >= x: This condition means that the index arr[mid] may be an answer. So, we will update the ‘ans’ variable with arr[mid] and search in the left half if there is any smaller number that satisfies the same condition. Here, we are eliminating the right half.

Case 2 - If arr[mid] < x: In this case, arr[mid] cannot be our answer and we need to find some bigger element. So, we will eliminate the left half and search in the right half for the answer.
*/