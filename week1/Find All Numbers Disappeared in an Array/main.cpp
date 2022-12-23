#include <iostream>
#include<vector>
using namespace std;
int minTimeToVisitAllPoints(vector<vector<int>>& points) {
    int res1;
    int res2;
    int sum=0;
    int j=0;
    int _size= points.size() -1;
    for(int i=0;i<_size;i++)
    {
        res1 = points[i+1][j] - points[i][j];
        res2 = points[i+1][j+1] - points[i][j+1];
        if(res1<0)
        {
            res1= - res1;
        }
        if(res2<0)
        {
           res2= - res2;
        }
        if(res1>res2)
        {
            sum +=res1;
        }
        else if(res1<res2)
        {
           sum +=res2;
        }
        else if(res1==res2)
        {
           sum += res1;
        }

    }
 return sum;

}
int main()
{

    return 0;
}
