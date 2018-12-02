#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	
	string id;
	map<char, int> map_char;	
	bool found_two; 	 
	bool found_three; 
	int count_two   = 0;
	int count_three = 0;
	int checksum    = 0;
	
	
	
	while (cin >> id) {
		found_two   = false;
		found_three = false;
		for(char& c : id) {
			map_char[c]++;
		}
		
		for(const auto& tuple : map_char){
			if (tuple.second == 2 && found_two == false) {
				found_two = true;
			} else if (tuple.second == 3 && found_three == false) {
				found_three = true;
			}
		}
		
		if (found_two)
			count_two++;
		if(found_three)
			count_three++;
		
		map_char.clear();
	}
	
	checksum = count_three * count_two;
	cout << checksum << endl;
	return 0;
}