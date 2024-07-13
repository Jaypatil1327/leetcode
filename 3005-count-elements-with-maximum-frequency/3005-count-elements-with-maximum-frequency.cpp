class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        std::vector<int> v(101, 0); 
        int maxele = INT_MIN; 
        
        for(int i = 0; i < nums.size(); i++) {   
            if(nums[i] > maxele) maxele = nums[i]; 
            ++v[nums[i]]; 
        }

        int maxFrequency = 0;
        int count = 0;
        for(int i = 0; i <= maxele; i++) {
            if(v[i] > maxFrequency) {
                maxFrequency = v[i];
                count = maxFrequency; // Reset count when a new max frequency is found
            } else if (v[i] == maxFrequency) {
                count += maxFrequency; // Add to count if the same max frequency is found
            }
        }

        return count;
    }
};