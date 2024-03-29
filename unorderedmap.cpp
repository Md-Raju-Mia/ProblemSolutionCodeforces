#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int findMaxLength(vector<int>& nums) {
    unordered_map<int, int> sumIndexMap;
    int maxLength = 0;
    int sum = 0;

    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] == 0) {
            sum -= 1;
        } else {
            sum += 1;
        }

        if (sum == 0) {
            maxLength = i + 1;
        } else if (sumIndexMap.find(sum) != sumIndexMap.end()) {
            maxLength = max(maxLength, i - sumIndexMap[sum]);
        } else {
            sumIndexMap[sum] = i;
        }
    }

    // Print the unordered map
    cout << "Final unordered map sumIndexMap:" << endl;
    for (auto& pair : sumIndexMap) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    return maxLength;
}

int main() {
    vector<int> nums1 = {0,0, 1,0,1,0,1,1,0,0,1,1,1};
    cout << "Maximum length of contiguous subarray with equal number of 0s and 1s: " << findMaxLength(nums1) << endl;

    /*vector<int> nums2 = {0, 1, 0};
    cout << "Maximum length of contiguous subarray with equal number of 0s and 1s: " << findMaxLength(nums2) << endl;*/

    return 0;
}
