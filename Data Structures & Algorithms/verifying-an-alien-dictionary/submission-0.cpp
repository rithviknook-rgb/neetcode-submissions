class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int> orderMap;
        for(int i=0;i<order.size();i++){
            orderMap[order[i]]=i;
        }
        for(int i=0;i<words.size()-1;i++){
            string first=words[i];
            string second=words[i+1];

            int minLength=min(first.size(),second.size());
            bool differenceFound=false;

            for(int j=0;j<minLength;j++){
                if (first[j]!=second[j]){
                    differenceFound=true;

                    if(orderMap[first[j]]>orderMap[second[j]]){
                        return false;
                    }
                    break;
                }

            }
            if(!differenceFound && first.size()>second.size()){
                return false;
            }
        }
        return true;
    }
};