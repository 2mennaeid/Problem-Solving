#include <iostream>
#include <vector>

using namespace std;
 int repeatedNTimes(vector<int>& nums)
 {
     int res;
      int _size= nums.size();
     sort(nums.begin(),nums.end());
     for(int i=0;i<_size-1;i++)
     {
         if(nums[i]==nums[i+1])
         {
             res=nums[i];
             break;
         }
     }
     return res;
 }
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
