#include <iostream>
#include<vector>
using namespace std;
int repeatedNTimes(vector<int>& nums) {
    vector<int> p;
    int res;
    int _size= nums.size();
    sort(nums.begin(),nums.end());
    for(int i=0;i<_size;i++)
    {
        p[nums[i]]++;
    }
    for(int i=0;i<_size;i++)
    {
        if(p[i]>1)
        {
            res=i;
            break;
        }
    }
    return res;

    }


int main()
{

    return 0;
}
