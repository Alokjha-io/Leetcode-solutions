class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        double tax = 0;
        int prev = 0;

        for (auto &b : brackets) {
            int upper = b[0];
            int percent = b[1];

            int amount = max(0, min(income, upper) - prev);
            tax += amount * percent;

            prev = upper;
        }

        return tax / 100.0;
    }
};