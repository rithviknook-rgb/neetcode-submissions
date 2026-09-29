class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(),s1.end());
        int n=s1.length();

        for(int i=0;i+n<=s2.length();i++){
            
            string subStr = s2.substr(i,n);
            sort(subStr.begin(),subStr.end());

            if(subStr == s1){
                return true;
            }
        }
        
        return false;
    }
};
