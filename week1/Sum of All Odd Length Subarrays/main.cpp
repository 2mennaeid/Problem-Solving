#include <iostream>
#include<vector>
//#include <bits/stdc++.h>
using namespace std;
int sumOddLengthSubarrays(vector<int>& arr) {
    int _size= arr.size();
    int sum =0;
    for(int i=0;i<_size;i++)
    {
        for(int j=i;j<_size;j +=2)
        {
            for(int x=i;x<=j;x++)
            {
                sum += arr[x];
            }
        }
    }
    return sum;

    }
int main()
{

   return 0;

}
