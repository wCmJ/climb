vector<vector<int>> threeSum(vector<int> &nums){
    vector<vector<int>> vvi;
    sort(nums.begin(),nums.end());
    
    for(int i=0;i<nums.size();i++)
    {
        int target = -nums[i];
        int front = i + 1;
        int back = nums.size() - 1;
        while(front < back)
        {
            int sum = nums[front] + nums[back];
            if(sum < target)
                front++;
            else if(sum > target)
                back--;
            else
            {
                vector<int> vi(3,0);
                vi[0] = nums[i];
                vi[1] = nums[front];
                vi[2] = nums[back];
                vvi.push_back(vi);
                
                while(front<back && nums[front] == vi[1]) front++;
                while(front < back && nums[back] == vi[2]) back--;
            }
            while(i+1<nums.size() && nums[i] == nums[i+1])i++;
        }                
    }
}
