/*
vector<int> moveZeros(int n, vector<int> a) {
        // Brute force approach
    vector<int> temp;
    for (int i = 0; i < n; i++) {
        if (a[i] != 0)
            temp.push_back(a[i]);
    }

    int nz = temp.size();

    for (int i = 0; i < nz; i++) {
        a[i] = temp[i];
    }
    for (int i = nz; i < n; i++) {
        a[i] = 0;
    }
    return a;
}
*/

/*
// optmal approach

 void moveZeroes(vector<int>& nums) {
        int j = -1;
        // find out first 0 element ka index
        for(int i =0 ; i<nums.size();i++){
            if(nums[i] == 0 ){
                j = i;
                break;
            }
        }

        if(j == -1 ) return ;

        for(int i = j+1; i<nums.size() ; i++){
            if(nums[i] != 0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }

*/