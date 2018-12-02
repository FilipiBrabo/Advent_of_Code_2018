#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    int freq = 0;
    int change;
	bool found = false;
	int d;
	map<int, int> f_map;
	vector<int> change_list;
	
	while(cin >> change && !found) {			
		freq += change;
		change_list.push_back(change);	
		f_map[freq]++;
		if(f_map[freq] == 2)
			found = true;
			d = freq;
	}
	
	while (!found) {
		for(int i = 0; i < change_list.size() && !found; i++) {
			freq += change_list[i];
			f_map[freq]++;
			if(f_map[freq] == 2)
				found = true;
		}
	}
	
	if (found)
		cout << freq << endl;
	return 0;
}
