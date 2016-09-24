#include<vector>
#include<cstdlib>
#include<unordered_map>
#include<cstdio>
#include<iostream>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        unordered_map<int, int> com;
        for(int i = 0; i < nums.size(); ++i){
            com[nums[i]] = i;
        }
        if(com.find(target)==com.end()) return -1;
        auto res = com.find(target);
        int dis = distance(res,com.begin());
        cout<<dis<<endl;
        return dis;
    }
};
int main()
{
	Solution so;
	vector<int> num;
	int targe = 0;
	cin >> num;
	cin >> targe;
	so.search(num, targe);
	return 0;
}