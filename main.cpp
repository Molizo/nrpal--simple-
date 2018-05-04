#include <iostream>
#include <fstream>

using namespace std;
ifstream in("nrpal.in");
ofstream out("nrpal.out");

char ch[101];

int main()
{int n;
    in>>n;
    in.get();
    in.getline(ch,101);
    for(int i=0;i<n/2;i++)
    {
        if(ch[i]=='*' && ch[n-i-1] == '*')
        {
            ch[i]='0'+9;
            ch[n-i-n%2]='0'+9;
            continue;
        }
        else if(ch[i]!='*' && ch[n-i-1]=='*')
        {
            ch[n-i-n%2]=ch[i];
            continue;
        }
        else if(ch[n-i-1]!='*' && ch[i]=='*')
        {
            ch[i]=ch[n-i-1];
            continue;
        }
        else if(ch[i]!=ch[n-i-1])
        {
            out<<"0";
            return 0;
        }
    }
    for(int i=0;i<n;i++)
        out<<ch[i];
    return 0;
}
