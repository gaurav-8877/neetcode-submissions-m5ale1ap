class Solution {
public:
vector<vector<string>>result;
int n;
   bool isPalindrome(string &s,int i,int j){
    if(i>=j)return true;
    if(s[i]==s[j])return isPalindrome(s,i+1,j-1);
    return false;
   }
   void backtrack(int idx,string &s,vector<string> &curr){
    if(idx>=n){
        result.push_back(curr);
        return;
    }
    for(int i = idx;i<n;i++){
        if(isPalindrome(s,idx,i)==true){
            curr.push_back(s.substr(idx,i-idx+1));
            backtrack(i+1,s,curr);
            curr.pop_back();
        }
    }

   }
    vector<vector<string>> partition(string s) {
        n = s.size();
        vector<string>curr;
        backtrack(0,s,curr);
        return result;
        
    }
};
