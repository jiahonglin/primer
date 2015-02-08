#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main()
{
    int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
    vector<int> ivec(ia, ia+11);
    list<int> ilist(ia, ia+11);
    for(vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
    {
        if(*iter % 2 == 0)
        {
            iter = ivec.erase(iter);
            --iter;
        }
    }
    for(list<int>::iterator liter = ilist.begin() ; liter != ilist.end() ; ++liter)
    {
        if(*liter % 2 != 0)
        {
            ilist.erase(liter);
            --liter;
        }
    }
    /*
    for(vector<int>::iterator iter = ivec.begin() ; iter != ivec.end() ; ++iter)
    {
        cout << *iter <<endl;
    }

    for(list<int>::iterator liter = ilist.begin() ; liter != ilist.end() ; ++liter)
    {
        cout << *liter << " " ;
    }
    cout << endl;
    */
}
