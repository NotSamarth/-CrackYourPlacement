class Solution {
    vector<string> res;
public:
    void solve(string str,int a,int b,int n){
        if(a+b==n*2){
            res.push_back(str);
            return;
        }
        if(a==n){
            solve(str+')',a,b+1,n);
        }
        else if(a>b){
            solve(str+')',a,b+1,n);
            solve(str+'(',a+1,b,n);
        }
        else{ //a==b>
            solve(str+'(',a+1,b,n);
        }
    }
    vector<string> generateParenthesis(int n) {
        solve("(",1,0,n);
        return res;
    }
};