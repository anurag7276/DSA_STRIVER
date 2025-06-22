/*
// Brute force 

int removeDuplicates(int arr[], int n) {
  set < int > set;
  for (int i = 0; i < n; i++) {
    set.insert(arr[i]);
  }
  int k = set.size();
  int j = 0;
  for (int x: set) {
    arr[j++] = x;
  }
  return k;
}



// optimal 
int removeDuplicates(vector<int>& nums) {
       int i=0;
       for(int j=1;j<nums.size();j++){
         if(nums[j]!=nums[i]){
            nums[i+1]=nums[j];
            i++;
         }
       }

       return i+1 ;
    }

*/