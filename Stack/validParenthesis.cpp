/*
class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto it: s){
            if(it=='(' or it=='{' or it=='['){
                st.push(it);
            }
            else{
                if(st.empty())return false;
                else{
                    char ch = st.top();
                    st.pop();
                    if( (it==')' && ch=='(') or (it=='}' && ch=='{')  or (it==']' && ch=='[') ) continue;
                    else return false;
                }
            }
        }

        return st.empty();
    }
};


*/