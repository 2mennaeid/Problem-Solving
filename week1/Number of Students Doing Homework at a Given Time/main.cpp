//#include <iostream>
//#include<vector>
#include <bits/stdc++.h>
using namespace std;
int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {

        int _count=0;
        for(int i=0;i<startTime.size();i++)
        {
            if(queryTime>=startTime[i] && queryTime<=endTime[i])
            {
                _count++;
            }
        }
        return _count;

    }
int main()
{

   return 0;

}
