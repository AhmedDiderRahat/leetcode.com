#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cstring>
#include<map>

using namespace std;

class Solution {
public:
    int numUniqueEmails(vector<string>& emails)
    {
        map<string, int> uniqueEmails;

        int numberOfEmail = 0;

        for(int i=0; i<emails.size(); i++)
        {
            string local = "";
            string domain = "";
            string email = emails[i];
            bool isPlusFound = false;

            size_t position = email.find("@");

            for(int j=0; j<email.size(); j++)
            {
                if(j >= position)
                    domain = domain + email[j];
                else
                {
                    char ch = email[j];

                    if(ch == '+')
                        isPlusFound = true;

                    if(!isPlusFound && (ch != '.') )
                        local = local + email[j];
                }
            }

            email = "";
            email.append(local);
            email.append(domain);

            if(uniqueEmails.empty())
            {
                uniqueEmails[email] = 1;
            }
            else
            {
                if (uniqueEmails.find(email) == uniqueEmails.end())
                    uniqueEmails[email] = 1;
            }
            //cout<<email<<endl;
        }

        return uniqueEmails.size();
    }
};

int main()
{
    vector<string> arr;

    int n;
    string str;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>str;
        arr.push_back(str);
    }

    Solution ob;

    int Size = ob.numUniqueEmails(arr);

    cout<<Size;

/*
3
"test.email+alex@leetcode.com"
"test.e.mail+bob.cathy@leetcode.com"
"testemail+david@lee.tcode.com"

*/
    //cout<<ans;

    return 0;
}
