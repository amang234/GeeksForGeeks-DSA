class Solution {
  private:
    unordered_set<string> set = {"+", "-", "*", "/", "^"};
    unordered_map<string, function<int(int, int)>> mp = {
        {"+", [](int a, int b){ return a + b; }},
        {"-", [](int a, int b){ return a - b; }},
        {"*", [](int a, int b){ return a * b; }},
        {"/", [](int a, int b){ 
            int q = a / b;
            int r = a % b;
            if (r != 0 && ((a < 0) != (b < 0))) {
                q--;
            }
            return q;
        }},
        {"^", [](int a, int b){ return pow(a, b); }},
    };
    
    int num(string& s){
        int ans = 0, sign = (s[0] == '-') ? -1 : 1;
        for(char& c: s){
            if(c >= '0' && c <= '9'){
                ans = (ans * 10) + (c - '0');
            }
        }
        return sign * ans;
    }
  public:
    int evaluatePostfix(vector<string>& arr) {
        stack<int> st;
        for(string& s : arr){
            if(set.find(s) != set.end()){
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                st.push(mp[s](a, b));
            }else{
                st.push(num(s));
            }
        }
        return st.top();
        
    }
};