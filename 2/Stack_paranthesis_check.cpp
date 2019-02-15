                                                      /* Incoreect Logic designed */


#include<bits/stdc++.h>
using namespace std;
int top=-1, A[100];
bool isempty ()
{
    if(top==-1)
        return true;
    else
        return false;
}
void push(char ch)
{
    A[++top]=ch;
}
char pop()
{
    return A[top--];
}
int isopen(char f)
{
    if(f=='('||f=='['||f=='{')
        return 1;
    else
        return 0;
}
int isopp(char f)
{
    switch(f)
    {
        case '(':return ')';
        case '{':return '}';
        case '[':return ']';
    }
}
int main()
{
    int n,i;char cha;
    cout<<"enter no of characters\n";
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>cha;

        if(isopp(cha)==A[top])
            pop();
        else if(isopen(cha)==1)
            push(cha);

    if(isempty()==false)
        {cout<<"Invalid expression 2\n";
         exit(1);
        }
    else
        cout<<"Valid expression";
    return 0;

}
