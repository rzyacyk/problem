//
//
// @..*
//
//  Created    on 9/11/18.
//  @..
//

#include <iostream>
#include <vector>
#include "stdc++.h"


using namespace std;

// fourSum4Sum

vector<vector<int>> fourSum(vector<int> &nums, int target) {
    
    vector<vector<int>> res;
    
    int n = nums.size();
    
    sort(nums.begin(), nums.end());
    
    for (int i = 0; i < n - 3; ++i) {
    
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        
        for (int j = i + 1; j < n - 2; ++j) {
            
            if (j > i + 1 && nums[j] == nums[j - 1])
                continue;
            
            int left = j + 1, right = n - 1;
            
            while (left < right) {
                int sum = nums[i] + nums[j] + nums[left] + nums[right];
            
                if (sum == target) {
                    vector<int> out{nums[i], nums[j], nums[left], nums[right]};
                    res.push_back(out);
                
                    while (left < right && nums[left] == nums[left + 1])
                        ++left;
                    
                    while (left < right && nums[right] == nums[right - 1])
                        --right;
                    
                    ++left; --right;
                    
                } else if (sum < target)
                    ++left;
                else --right;
            }
        }
    }
    return res;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    std::cout << "Hello, World!\n";
    return 0;
}


