/*
  void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;

        reverse(nums.begin() , nums.end());
        reverse(nums.begin() , nums.begin()+k);
        reverse(nums.begin()+k , nums.end());

    }

    Syntax of reverse()
The reverse() function is defined in the <algorithm> header file.

reverse(first, last);

Parameters:

first: Iterator to the first element in the range.
last: Iterator to the theoretical element just after the last element in the range.
Return Value:

This function does not return any value. It reverses the range in-place.


*/

/* // bruteforce for left rotate
void leftRotate(int arr[], int n, int d {
 d = d % n; // Handle cases where d >= n
 int temp[d];

 for(int i = 0; i < d; i++) {
     temp[i] = arr[i];
    } // store in temp

   for( int i = d ; i < n; i++) {
       arr[i - d] = arr[i];
    }// shifting
       
    for (int i = n-d ; i < n; i++) {
        arr[i] = temp[i - (n - d)];
    }// putting back from temp
 
 }


*/