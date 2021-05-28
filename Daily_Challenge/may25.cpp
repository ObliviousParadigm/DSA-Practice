#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int result = 0;
        int num, a, b;
        
        for(auto itr = tokens.begin(); itr != tokens.end(); ++itr)
        {
            if(*itr == "+" || *itr == "-" || *itr == "*" || *itr == "/")
            {
                if (st.empty())
                {
                    return result;
                }
                a = st.top();
                st.pop();
                b = st.top();
                st.pop();
                
                
                if(*itr == "+")
                    result = (a + b);
                
                else if(*itr == "-")
                    result = (b - a);

                else if(*itr == "*")
                    result = (a * b);

                else
                    result = (b / a);
                cout<<a<<*itr<<b<<"="<<result<<endl;
                st.push(result);
            }
            else
            {
                num = stoi(*itr);
                st.push(num);   
            }
        }
        if(st.empty())
            return result;
        else
            return st.top();
    }
};