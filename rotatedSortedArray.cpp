class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        int m;
        while (l <= r) {
            cout<<l<<" came here "<<r<<endl;
            m = (l + r) / 2;
            cout<<m<<endl;
            if (target == nums[m]) {
                return m;
            }
            if (nums[l] <= nums[m]) {
                if (nums[l] > target or nums[m] < target) {
                    cout << l << m << r << "1"<< endl;
                    l = m + 1;
                } else {
                    cout << l << m << r <<"2"<< endl;
                    r = m - 1;
                }
            } 
            else {
                if (target<nums[m] or target> nums[r]) { 
                    l = m + 1; 
                    cout << l << m << r <<"3"<< endl;
                    }
                else {
                    cout << l << m << r <<"4"<< endl;
                    r = m - 1;
                }
            }
        }
        return -1;
    }
};