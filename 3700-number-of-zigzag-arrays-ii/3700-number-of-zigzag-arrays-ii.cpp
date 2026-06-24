class Solution {
public:
    static constexpr long long MOD = 1e9 + 7;
    using ll = long long;
    using Matrix = vector<vector<ll>>;
    Matrix mul(const Matrix& A, const Matrix& B) {
        int n = A.size();
        int m = B[0].size();
        int k = B.size();

        Matrix C(n, vector<ll>(m, 0));

        for (int i = 0; i < n; i++) {
            for (int x = 0; x < k; x++) {
                if (!A[i][x]) continue;
                for (int j = 0; j < m; j++) {
                    C[i][j] = (C[i][j] + A[i][x] * B[x][j]) % MOD;
                }
            }
        }
        return C;
    }
    Matrix power(Matrix A, long long p) {
        int n = A.size();
        Matrix R(n, vector<ll>(n, 0));

        for (int i = 0; i < n; i++) R[i][i] = 1;

        while (p) {
            if (p & 1) R = mul(R, A);
            A = mul(A, A);
            p >>= 1;
        }
        return R;
    }

    int zigZagArrays(int n, int l, int r) {
        int m = r - l + 1;

        if (n == 1) return m;

        Matrix T(2 * m, vector<ll>(2 * m, 0));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < i; j++)
                T[i][j + m] = 1;

            for (int j = i + 1; j < m; j++)
                T[i + m][j] = 1;
        }
        Matrix P = power(T, n - 1);
        ll ans = 0;
        for (int i = 0; i < 2 * m; i++) {
            ll ways = 0;
            for (int j = 0; j < 2 * m; j++) {
                ways = (ways + P[i][j]) % MOD;
            }
            ans = (ans + ways) % MOD;
        }
        return ans;
    }
};