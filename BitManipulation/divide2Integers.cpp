/*
class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == divisor) return 1;

        bool sign = true;
        if ((dividend >= 0 && divisor < 0) || (dividend < 0 && divisor > 0))
            sign = false;

        long n = std::abs((long)dividend);
        long d = std::abs((long)divisor);
        long ans = 0;

        while (n >= d) {
            int cnt = 0;
            while (n >= (d << (cnt + 1))) {
                cnt++;
            }
            ans += 1L << cnt;
            n -= d << cnt;
        }

        if (ans > INT_MAX)
            return sign ? INT_MAX : INT_MIN;

        return sign ? ans : -ans;
    }
};
*/