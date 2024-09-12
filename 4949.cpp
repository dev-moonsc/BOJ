#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool parenthesis(string s)
{
    stack<char> st;
    for (char c : s)
    {
        if (c == '(')
            st.push(c);
        else if (c == '[')
            st.push(c);
        else if (c == ')')
        {
            if (st.empty() || st.top() != '(')
                return false;

            st.pop();
        }
        else if (c == ']')
        {
            if (st.empty() || st.top() != '[')
                return false;

            st.pop();
        }
    }

    return st.empty();
}

int main()
{
    while (true)
    {
        string s;
        getline(cin, s);

        if (s == ".")
            break;

        if (parenthesis(s))
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }

    return 0;
}