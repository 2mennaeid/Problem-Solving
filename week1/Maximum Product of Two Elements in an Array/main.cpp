#include <iostream>
#include<vector>
//#include <bits/stdc++.h>
using namespace std;
int maxProduct(vector<int>& nums) {
      // sort(nums.begain(),nums.end());
        int res_product=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(res_product<((nums[i]-1)*(nums[j]-1)))
                {
                    res_product=(nums[i]-1)*(nums[j]-1);
                }
            }
        }
        return res_product;
    }
int main()
{

   return 0;

}
