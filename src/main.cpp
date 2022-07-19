// https://leetcode.com/problems/jump-game/

#include<iostream>
#include"../inc/solution.h"


int main()
{
	//std::vector<int> vec{2,3,1,1,4};  // true
	std::vector<int> vec{3,2,1,0,4};  // false

	Solution sol;
	std::cout << sol.canJump(vec);
	return 0;
}

