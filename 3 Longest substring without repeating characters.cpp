class solution{
public:
	int length(string s){
		set<char>t;
		int res = 0, left = 0, right = 0;
		while(right < s,size()){
			if(t.find(s[right]) == t.end()){
				t.insert(s[right++]);
				res = max(res, (int)t.size());
			}
			else {
				t.erase(s[left++]);
			}
		}
		return res;
	}
};