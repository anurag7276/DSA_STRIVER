/*

int missingNumber(vector<int>&a, int N) {

    int hash[N + 1] = {0}; //hash array
    for (int i = 0; i < N - 1; i++)
        hash[a[i]]++;
    for (int i = 1; i <= N; i++) {
        if (hash[i] == 0) {
    return i;
        }
    }
    return -1;
}
*/

/*
int missingNumber(vector<int>& nums) {
    int xor1 = 0 , xor2 = 0;
    for(int i =0; i<nums.size(); i++){
        xor1 = xor1 ^ nums[i];
        xor2 = xor2 ^ (i+1); 
    }
    return xor1 ^ xor2;
    }gitj
*/