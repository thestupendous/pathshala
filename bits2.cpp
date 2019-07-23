class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int seggregator;
        int m=0;
        for(int i=0;i<nums.size();i++)
        {
            m = m^nums[i];
        }
        seggregator = (m & (~(m-1))) ;
        
        int a=0,b=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]&seggregator)
            {
                a = a^nums[i];
            }
            else
            {
                b = b^nums[i];
            }
        }
        vector<int> result;
        result.push_back(a);
        result.push_back(b);
        return result;
    }
};
