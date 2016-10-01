class Solution {
public:
		int longestConsecutive(vector<int>& nums){
			int res = 0;
			unordered_map<int,int> m;
			for(int i = 0 ; i < nums.size(); ++i){
				++m[nums[i]];
			}
			for(int i = 0; i < nums.size(); ++i){
				int d = nums[i];
				int n = 1;
				m.erase(d);
				while(m.find(++d)!=m.end()){
					++n;
					m.erase(d);
				}
				d = nums[i];
				while(m.find(--d)!= m.end()){
					++n;
					m.erase(d);
				}
				res = max(n, res);
			}
			return res;
		}
};