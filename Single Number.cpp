class Solution {
public:
    int singleNumber(int A[], int n) {
        
        int xorSum = 0;
        for (size_t i = 0; i < n; ++ i) {
            xorSum = xorSum ^ A[i];
        }
        return xorSum;
    }
};