#include <map>
#include <iostream>
#include <cassert>
#include <string>

using namespace std;

int main()
{
    map<string, int> words;
    int n;
    string str;

    cout<<"Enter Number of words: ";
    cin>>n;

    while(n--)
    {
        cin>>str;

        if (words.find(str) != words.end())
            words[str]++;
        else
            words[str] = 1;
    }

    cout<<words.size()<<endl;

    map<string,int>::const_iterator it;
    for (it = words.begin(); it!= words.end(); it++){
        cout << it->first<<" =>"<< it->second<<endl;}

    return 0;
}
