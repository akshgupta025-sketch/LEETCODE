class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums1.size();
        int m = nums2.size();

        vector<int> arr;

        for(int i = 0; i < n; i++) {

            for(int j = 0; j < m; j++) {

                if(nums2[j] == nums1[i]) {

                    int p = 0;

                    // search on right side only
                    for(int k = j + 1; k < m; k++) {

                        if(nums2[k] > nums1[i]) {

                            arr.push_back(nums2[k]);

                            p = 1;

                            break;
                        }
                    }

                    if(p == 0) {
                        arr.push_back(-1);
                    }

                    break;
                }
            }
        }

        return arr;
    }
};