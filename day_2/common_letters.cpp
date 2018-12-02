#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool is_almost_equal(string s1, string s2);
string common_letters(string s1, string s2);

int main() {
	
	string id;
	vector<string> ids;
	string common;
	bool found = false;
	
	while (cin >> id) {
		ids.push_back(id);
	}
	
	for (int i = 0; i < ids.size() - 1 && !found; i++) {
		for (int j = i+1; j < ids.size() && !found; j++) {
			if (is_almost_equal(ids[i], ids[j])) {
				common = common_letters(ids[i], ids[j]);
				found = true;
			}
		}		
	}
	
	cout << common << endl;
	return 0;
}

bool is_almost_equal(string s1, string s2) {
	int diff_chars = 0;
	for (int i = 0; i < s1.length(); i++) {
		if (s1[i] != s2[i])
			diff_chars++;
		if (diff_chars > 1)
			return false;
	}
	return true;
	
}

string common_letters(string s1, string s2) {
	string new_str;
	for (int i = 0; i < s1.length(); i++) {
		if (s1[i] == s2[i])
			new_str += s1[i];
	}
	return new_str;
}