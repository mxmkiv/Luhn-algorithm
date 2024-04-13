#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {

	string n;
	getline(cin, n);

	vector<int> numbers;

	for (int i = 0; i < n.size(); i++) {

		//string numstr = "1234567890";
		// add character filer

		if (n[i] != ' ') {

			int k = n[i] - '0';
			numbers.push_back(k);
		}

	}
	
	int first_sum = 0;
	int second_sum = 0;

	for (int j = numbers.size() - 1; j > -1; j -= 2) {
		first_sum += numbers[j];
	}

	for (int j = 0; j < numbers.size(); j += 2) {
		int k = numbers[j] * 2;
		
		if (k > 9) {
			k = k - 9;
			second_sum += k;
		}
		else {
			second_sum += k;
		}
		
	}

	if ((first_sum + second_sum) % 10 == 0) {
		cout << "number is correct";
	}
	else {
		cout << "uncorrect number";
	}

	//cout << numbers[0];

	return 0;
}