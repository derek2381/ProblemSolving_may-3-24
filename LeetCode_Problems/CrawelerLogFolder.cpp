// problem link
// https://leetcode.com/problems/crawler-log-folder/

class Solution {
public:
    int minOperations(vector<string>& logs) {

        stack<string> stk;

        for(string st : logs){

            if((stk.size() > 0 && st == "../")){
                stk.pop();
            }else if(st != "./" && st != "../"){
                stk.push(st);
            }
        }

        return stk.size();

    }
};
