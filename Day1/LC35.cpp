class Solution
{
public:
    int Insert(vector<int> &nums, int f, int l, int target)
    {
        if (f > l)
        {
            return f;
        }

        int mid = f + (l - f) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }

        else if (nums[mid] > target)
        {
            return Insert(nums, f, mid - 1, target);
        }

        else
        {
            return Insert(nums, mid + 1, l, target);
        }
    }

    int searchInsert(vector<int> &nums, int target)
    {
        return Insert(nums, 0, nums.size() - 1, target);
    }
};