class Solution {
public:
    double myPow(double a, int b) {
        long long exp = b;
        if (exp < 0) {
            a = 1.0 / a;
            exp = -exp;
        }
        double res = 1.0;
        while (exp > 0) {
            if (exp & 1)
                res *= a;
            a *= a;
            exp >>= 1;
        }
        return res;
    }
};