class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int mid = (nums.size() - 1) / 2;
        sort(nums.begin(), nums.end());
        vector<int> res(nums.size());
        for (int i = 0, smallEnd = mid;  i < nums.size(); i += 2, --smallEnd) {
            res[i] = nums[smallEnd];
        }
        for (int i = 1, largeEnd = nums.size() - 1; i < nums.size(); i += 2, --largeEnd) {
            res[i] = nums[largeEnd];
        }
        nums = res;
    }
};
