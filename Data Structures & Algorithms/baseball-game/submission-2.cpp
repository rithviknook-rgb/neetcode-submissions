class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum=0;
        stack<int> scores;
        for(const string& op: operations){
            if(op == "+"){
                int top = scores.top();
                scores.pop();
                int newTop = top + scores.top();
                scores.push(top);
                scores.push(newTop);
                sum+=scores.top();
            }
            else if(op == "D"){
                scores.push(2*scores.top());
                sum+=scores.top();
            }
            else if(op=="C"){
                sum-=scores.top();
                scores.pop();
            }
            else{
                scores.push(stoi(op));
                sum+=scores.top();
            }
        }
        return sum;
    }
};