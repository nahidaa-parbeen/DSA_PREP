class Solution {
public:
    const long long MOD = 1e9 + 7;

    long long power(long long x, long long n) {

        if (n == 0)
            return 1;

        if (n == 1)
            return x % MOD;

        x %= MOD;

        if (n % 2 == 0) {
            return power((x * x) % MOD, n / 2);
        }

        return (x * power((x * x) % MOD, n / 2)) % MOD;
    }

    int countGoodNumbers(long long n) {

        long long even = (n + 1) / 2;
        long long odd = n / 2;

        return (power(5, even) * power(4, odd)) % MOD;
    }
};
