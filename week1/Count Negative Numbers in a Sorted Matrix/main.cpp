#include <iostream>
#include<vector>
//#include <bits/stdc++.h>
using namespace std;
 int countNegatives(vector<vector<int>>& grid) {
        int sum=0;
        int _size= grid.size();
        for(int i=0;i<_size;i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]<0)
                {
                    sum++;
                }
            }
        }
        return sum;

    }
int main()
{

   return 0;

}
