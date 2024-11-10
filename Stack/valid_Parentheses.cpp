#include <iostream>
#include <stack>
using namespace std;

void isVAalid(string str)
{
    stack<char> s;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        if (ch == '(' || ch == '{' || ch == '[')
        {
            s.push(ch);
        }
        else
        {
            if (!s.empty())
            {
                char top = s.top();
                if ((ch == ')' && top == '(') || (ch == ']' && top == '[') || (ch == '{' && top == '}'))
                {
                    s.pop();
                }
                else
                {
                    // return false;
                }
            }
            else{
               
            }
        }
    }
    if(s.empty()){
        cout<<str;

    }
    else{
        cout<<"false is empty";
    }
}

int main()
{
    string str = "({[]})";

    isVAalid(str);

    return 0;
}