//#include <iostream>
//#include<vector>
#include <bits/stdc++.h>
using namespace std;
int lucky(vector<int>& arr)
{
    map<int,int>prefix;
    int res=-1;
    for(int i=0;i<arr.size();i++)
    {
       prefix[arr[i]]++;
    }
    for(auto i:prefix)
    {
        if(i.first==i.second && i.first>res)
        {
            res=i.first;
        }
    }
    return res;
    /*int res=-1;
    int prefix[500];
    for(int i=0;i<arr.size();i++)
    {
       prefix[arr[i]]++;
    }
    for(int i=0;i<arr.size();i++)
    {
       if(prefix[i]==i && prefix[i]>res)
       {
           res=i;
       }
    }
    return res;*/


}
int main()
{
    vector<int> v = {7,7,7,7,7,7,7};
    cout<<lucky(v);
   /* int s,e,queryTime;
    int startTime[s],int endTime[e];
    int _count=0;
    if(s>100 || e>100 || queryTime>1000)
    {
        return 0;
    }
    else{
        if(s==e)
        {
            for(int i=0;i<s;i++)
            {
                if(startTime[i]>=queryTime &&endTime[i]<=queryTime)
                {
                    _count++;
                }
            }
        }
        else
        {
            return _count;
        }
    }
    return _count;
*/

}
