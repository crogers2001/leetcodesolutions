class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> indices = {0 , 0};

        for (int i = 0; i < nums.size(); i++){

            for (int next = i + 1; next < nums.size(); next++){

                if ((nums[i] + nums[next]) == target){
                    indices = {i, next};
                    return indices;
                }

            }
        }

    return indices;
    }
};
