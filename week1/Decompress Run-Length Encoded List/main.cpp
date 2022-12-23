#include <iostream>
#include<vector>
//#include <bits/stdc++.h>
using namespace std;
 vector<int> decompressRLElist(vector<int>& nums) {
        int freq,val;
        int _size= nums.size()-1;
        vector<int>p;
        for(int i=0;i<_size;i +=2)
        {
            freq= nums[i];
            val = nums[i+1];
            if(freq==1)
            {
                p.push_back(val);
            }
            else if(freq>1)
            {
                for(int j=0;j<freq;j++)
                {
                   p.push_back(val);
                }
            }
            else
            {
                continue;
            }
        }
     return p;
    }
int main()
{

   return 0;

}
