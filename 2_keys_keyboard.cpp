class Solution {
public:
    int minSteps(int n) {
        int steps = 0;
        for (int t = 2; t <= n; ++t) {
            while (n % t == 0) {
                steps += t;
                n /= t;
            }
        }
        return steps;
    }
};

