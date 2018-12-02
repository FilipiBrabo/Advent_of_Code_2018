#include <iostream>

using namespace std;

int main() {
    int freq = 0;
    int change;

	while(cin >> change) {			
		freq += change;
	}
	
	cout << freq << endl;
    
	return 0;
}

