class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int e=n*(4+(n-1)*2)/2;
        int o=n*(2+(n-1)*2)/2;
        return gcd(e,o);
    }
};