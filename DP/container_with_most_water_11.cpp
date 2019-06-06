
int maxArea(vector<int> &height)
{
    int water = 0;
    int i = 0,j = height.size() - 1,h;
    while(i<j)
    {
        h = min(height[i],height[j]);
        water = max(water, h*(j-i));
        while(height[i]<=h)++i;
        while(height[j]<=h)--j;        
    }
    return water;
}

