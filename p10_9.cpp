#include<iostream>
#include<string.h>
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
        if(!ret.second)
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
