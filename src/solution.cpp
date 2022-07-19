#include"../inc/solution.h"


bool Solution::canJump(std::vector<int>& nums)
{
    int lastIdx = nums.size()-1;
    while(true)
    {
        for(int i{lastIdx-1}; i>-1; --i)
        {
            // element allowing a jump to the current end element is found, set this element as the new end and repeat the search
            if( nums[i] >= lastIdx-i ){ lastIdx = i; break; }

            // first element has been reached, but not possible to jump to the current end element ==> exit condition FALSE
            if(i == 0 && lastIdx != 0){ return false; } 
        }
        if(lastIdx == 0){ return true; }  // reached first element, it permits jump to the current end ==> exit condition TRUE
    }
}