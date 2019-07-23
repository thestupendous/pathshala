int minSubArrayLen(int s, vector<int>& nums) {
        int sum=nums[0],size=INT_MAX;
        int l,r;l=r=0;
        while(l<nums.size() and r<nums.size() )
        {
        	if(sum<s)
        	{
        		r++;
        		sum+=nums[r];
        	}
        	else if(sum==s)
        	{
        		size = min(size,r-l+1);
        		r++;
        		sum+=nums[r];
        	}
        	else if(sum>s)
        	{
        		size = min(size,r-l+1);
        		sum-=nums[l];
        		l++;
        	}
        }
        return size;
}