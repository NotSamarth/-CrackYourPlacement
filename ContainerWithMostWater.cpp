class Solution {
public:
    int trap(vector<int>& height) {
        int maxleft = 0;
        int maxright = 0;
        int left = 0;
        int area = 0;
        int block = 0;
        int right = height.size()-1;
        if(height.size() == 0){
            return 0;
        }
        for (int i = 0; i < height.size() ; i++){
            if (height[left] <= height[right]){
                maxleft = max(height[left],maxleft);
                left++;
                cout<<"the maxleft"<<maxleft<<endl;
                block = min(maxleft,maxright)-height[left];
                cout<<"the left"<<block<<endl;
                if (block <= 0){
                    area += 0;
                }
                else{
                    area += block;
                }
            }
            
            if (height[left] > height[right]){
                maxright = max(height[right],maxright);
                right--;
                cout<<"the maxright"<<maxright<<endl;
                block = min(maxleft,maxright)-height[right];
                cout<<"the right"<<block<<endl;
                if (block <= 0){
                    area += 0;
                }
                else{
                    area += block;
                }
            }
        }
        return area;
    }
};
