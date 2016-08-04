#pragma once
#include<vector>
#include<string>
using namespace std;
class maxProductOfWordsLengths {
public:
	int maxProduct(vector<string>& words) {
		/* int len =words.size(),res =0,temp;
		vector<bitset<32> > converted(len);
		for (int i =0;i <len;i ++)
		for (auto a :words[i])
		converted[i].set(a -'a');
		for (int i =1;i <len;i ++)
		for (int j =0;j <i;j ++)
		if ((converted[i] & converted[j]).none()) {
		temp =words[i].size()*words[j].size();
		if (temp >res) res =temp;
		}
		return res;*/
		int len = words.size();
		vector<int> mask(len);

		for (int i = 0; i < len; i++) {
			int sz = words[i].size();
			for (int j = 0; j < sz; j++) {
				mask[i] |= (1 << (words[i][j] - 'a'));
			}
		}

		int ans = 0;
		for (int i = 0; i < len; i++) {
			for (int j = 0; j < i; j++) {
				if (mask[i] & mask[j]) continue;
				int p = words[i].size()*words[j].size();
				if (p > ans) ans = p;
			}
		}

		return ans;
	}
};