/*
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0;

        for (auto bill : bills) {
            if (bill == 5) {
                five++;
            } 
            else if (bill == 10) {
                if (five >= 1) {
                    five--;
                    ten++;
                } else {
                    return false;
                }
            } 
            else { // bill == 20
                if (ten >= 1 && five >= 1) {
                    ten--;
                    five--;
                } 
                else if (five >= 3) {
                    five -= 3;
                } 
                else {
                    return false;
                }
            }
        }

        return true;
    }
};

*/