//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) {
         if (n == 1) {
            return { 1 };
        }
        /* Allocate memory for temporary arrays left and right */
        vector<long long> left(n), right(n);

        /* Allocate memory for the product array */
        vector<long long> prod(n);

        int i, j;

        /* Left most element of left array is always 1 */
        left[0] = 1;

        /* Right most element of right array is always 1 */
        right[n - 1] = 1;

        /* Construct the left array */
        for (i = 1; i < n; i++)
            left[i] = nums[i - 1] * left[i - 1];

        /* Construct the right array */
        for (j = n - 2; j >= 0; j--)
            right[j] = nums[j + 1] * right[j + 1];

        /* Construct the product array using left and right */
        for (i = 0; i < n; i++)
            prod[i] = left[i] * right[i];

        return prod;
        // code here
    }
};


//{ Driver Code Starts.
int main() {
    int t; // number of test cases
    cin >> t;
    while (t--) {
        int n; // size of the array
        cin >> n;
        vector<long long int> arr(n), vec(n);

        for (int i = 0; i < n; i++) // input the array
        {
            cin >> arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr); // function call

        for (int i = 0; i < n; i++) // print the output
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Endsere
    }
};


//{ Driver Code Starts.
int main() {
    int t; // number of test cases
    cin >> t;
    while (t--) {
        int n; // size of the array
        cin >> n;
        vector<long long int> arr(n), vec(n);

        for (int i = 0; i < n; i++) // input the array
        {
            cin >> arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr); // function call

        for (int i = 0; i < n; i++) // print the output
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends