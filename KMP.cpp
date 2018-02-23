#include<iostream>
#include<string.h>
using namespace std;
void pattern (string pattern,int * a)
{
    int l=strlen(pattern),i,j;
    a[0]=0;
    for(i=1,j=0;i<l;)
    {
        k=1;
        l:
        if(k==0)
        if(pattern[i]==pattern[j])
        {
            a[i]=a[j]+1;
            i++;
            j++;
        }
        else
        {
            if(j>0)
                j=a[j-1];
            else

            goto l;
        }
    }
}
int main()
{
    string text,pattern;
    cin>>text>>pattern;
    int a[strlen(pattern)];
    pattern(pattern,a);
}
