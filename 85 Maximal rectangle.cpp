class Solution {
public:
        int n = nums.size();
        if (n < 3)
            return n;

        int i = 0, newSize = 2;

        for (i = 2; i < n; i++)
        {
        //if the current element is different from the penultimate element of the new nums,add the current element into the new nums 
            if (nums[i] != nums[newSize-2])
                nums[newSize++] = nums[i];
        }

        return newSize;
    }
};