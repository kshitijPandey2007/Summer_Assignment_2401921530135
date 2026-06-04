class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1, m=0;
        while (l<r){
           int  w=r-l;
            int h=min(height[l],height[r]);
            int ar=w*h;
            m=max(ar,m);
            height[l]<height[r]? l++ : r--;
        }
        return m;
        
    }
};