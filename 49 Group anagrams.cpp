class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,int> map;
        vector<vector<string> >result;
        int count=1;//index for caching string location in result
        for(auto i : strs){
            string sorted = i;
            sort(sorted.begin(),sorted.end());
            if(map[sorted] == 0){//sorted  string doesn't exist in map 
                vector<string> cur(1);
                cur[0] = i;
                result.push_back(cur);   //pushing vector of string in result
                map[sorted] = count++;   //storing index of sorted string
           }
            else//if sorted string already exist push the string
            result[map[sorted]-1].push_back(i);
        }
        return result;
    }
};