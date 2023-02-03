#include <iostream>
#include <vector>
using namespace std;
vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {

        int _size1= aliceSizes.size();
        int _size2= bobSizes.size();
        int sum1=0;
        int sum2=0;
        int delta = (sum2-sum1)/2;
        vector<int> res;
        for(int i=0;i<_size1;i++)
        {
            sum1 +=aliceSizes[i];
        }
        for(int j=0;j<_size2;j++)
        {
            sum2 +=bobSizes[j];
        }
        for(int i=0;i<_size1;i++)
        {
            for(int j=0;j<_size2;j++)
            {
               if((aliceSizes[i]+delta)==bobSizes[j])
               {
                   res.push_back(aliceSizes[i]);
                   res.push_back(bobSizes[j]);
                   return res;
               }


            }
        }
        return res;

    }
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
