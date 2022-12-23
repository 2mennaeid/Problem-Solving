#include <iostream>
#include<vector>
//#include <bits/stdc++.h>
using namespace std;
int maximumWealth(vector<vector<int>>& accounts) {

        int _max=0;
        int temp=0;
        for(int i=0;i<accounts.size();i++)
        {
            for(int j=0;j<accounts[i].size();j++)
            {
                _max += accounts[i][j];
            }
            if(temp<_max)
            {
                temp= _max;

            }
            _max=0;

        }
        return temp;
    }
int main()
{

   return 0;

}
