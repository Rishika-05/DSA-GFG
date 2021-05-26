#include<bits/stdc++.h>
using namespace std;

bool isSame(int a[],int b[])
{
    for(int i=0;i<256;i++)
    {
        if(a[i]!=b[i])
        return false;
    }
    return true;
}

bool isPresent(string txt,string pat)
{
    int countxt[256]={0};
    int countpt[256]={0};
    for(int i=0;i<pat.length();i++)
    {
        countxt[txt[i]]++;
        countpt[pat[i]]++;
    }
    for(int i=pat.length();i<txt.length();i++)
    {
        if(isSame(countxt,countpt))
        return true;
        countxt[txt[i]]++;
        countxt[txt[i-pat.length()]]--;
    }
    return false;
}


int main()
{
    string txt,pat;
    cin>>txt>>pat;
    cout<<isPresent(txt,pat)<<"\n";

}