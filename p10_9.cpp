#include<iostream>
#include<string>
#include<map>
#include<utility>

using namespace std;

typedef map<string, int> valType;

int main()
{
    string word;
    valType word_count;
    pair <valType::iterator, bool> ret;
    while(cin >> word)
    {
        ret = word_count.insert(make_pair(word,1));
        if(!ret.second)//Word already exist in the map.The bool value is zero.
            ++(ret.first)->second;
        for(map<string, int>::iterator iter=word_count.begin(); iter != word_count.end(); ++iter)
        {
            cout << iter->first << ": " << iter->second << endl;
        }
        if (word.compare("exit") == 0)
            break;
    }
    return 0;
}
