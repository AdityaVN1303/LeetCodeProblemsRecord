class Solution {
public:
// set_intersection STL Function
// TC - O(NlogN + MlogM)
// SC - O(1)
vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    vector<int> ans;

    // Requires sorted arrays for intersection
    set_intersection(
        nums1.begin(), nums1.end(),
        nums2.begin(), nums2.end(),

        // Using back_inserter to append to an empty vector
        back_inserter(ans));

    return ans;
}
};