#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int left=0;
        int right = height.size()-1;
        

        int max_area=0;
        int len=right;

        while(left<right){
            int left_height=height[left];
            int right_height=height[right];
            
            int min_height=min(left_height,right_height);
            max_area=max(max_area,(min_height*len));
            len--;
            if(left_height<right_height)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return max_area;
    }
};

int main(){
	Solution sol;

	vector<int> height = {1,1};//{1,8,6,2,5,4,8,3,7};


	int area = sol.maxArea(height);

	cout<<area<<endl;

	return 0;
}