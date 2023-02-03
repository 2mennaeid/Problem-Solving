#include <iostream>
#include<vector>
using namespace std;
    vector<int> twoSum(vector<int>& nums, int target) {
       int sum;
        int _size= nums.size();
        vector<int>p;
        for(int i=0;i<_size;i++)
        {
            for(int j=i+1;j<_size;j++)
            {
                sum = nums[i]+nums[j];
                if(sum==target)
                {
                    p.push_back(i);
                    p.push_back(j);
                    break;
                }
                else
                {
                    continue;
                }
            }
        }
        return p;
        
    }

int main()
{

    return 0;
}
