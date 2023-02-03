#include <iostream>
#include <vector>
#include <iterator>
#include <map>
using namespace std;
vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int _size1= list1.size();
        int _size2 = list2.size();
        int sum;
        int _min=0;
        vector<string> res;
        map<string,int> _find;
        map<string,int>::iterator it;
        vector<int> check;
        for(int i=0;i<_size1;i++)
        {
            for(int j=0;j<_size2;j++)
            {
                if(list1[i]==list2[j])
                {
                    sum = i+j;
                    _find.insert(pair<string,int>(list1[i],sum));
                    check.push_back(sum);
                }
            }
        }
        for(int i=1;i<check.size();i++)
        {
           if(check[_min]>check[i])
           {
               _min=i;
           }
        }
        for(it=_find.begin();it!=_find.end();++it)
        {
            if(check[_min]==it->second)
            {
               res.push_back((it->first));
            }

        }
       return res;
    }
int main()
{
    //cout << "Hello world!" << endl;
    vector<string> lis={"Shogun","Tapioca Express","Burger King","KFC"};
    vector<string>li= {"Piatti","The Grill at Torrey Pines","Hungry Hunter Steakhouse","Shogun"};
     //li
    findRestaurant(lis,li);

    return 0;
}
