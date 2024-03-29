#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();

        int count = 0;

        map<vector<int>, int> mp;

        for(int row=0;row<n;row++){
            mp[grid[row]]++;
        }

        // Print the contents of the map
        cout << "Contents of map mp:" << endl;
        for(const auto& pair : mp) {
            cout << "Key: ";
            for(const auto& element : pair.first) {
                cout << element << " ";
            }
            cout << "Value: " << pair.second << endl;
        }

        for(int column =0; column<n;column++){
            vector<int> temp;
            for(int row =0; row<n; row++){
                temp.push_back(grid[row][column]);
            }

            count += mp[temp];
        } 

        return count;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {1, 2, 3}};
    sol.equalPairs(grid);
    return 0;
}
