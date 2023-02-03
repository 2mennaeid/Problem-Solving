#include <iostream>
#include<vector>
#include<map>
using namespace std;
 bool isIsomorphic(string s, string t) {
        map<char,char> mp1;
        map<char,char> _mp2;
        int _size= s.size();
        for(int i=0;i<_size;i++)
        {
            if(mp1[s[i]]&&mp1[s[i]]!=t[i] || _mp2[t[i]]&&_mp2[t[i]]!=s[i])
            {
                return false;
            }
            mp1[s[i]]=t[i];
            _mp2[t[i]]= s[i];
            
        }
        return true;
        
    }

int main()
{

    return 0;
}
