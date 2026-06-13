#include<iostream>
#include<vector>
using namespace std;

void pair_sum_finder(vector<int>& array_value, vector<int>& pair_array, int target){

	int size_array = array_value.size();
	bool found = false;

	for(int i = 0; i < size_array - 1; i++) {
		for(int j = i + 1; j < size_array; j++) {
			if(array_value[i] + array_value[j] == target) {
				pair_array.push_back(array_value[i]);
				pair_array.push_back(array_value[j]);
				found = true;
				break;
			}
		}
	}
}
int main(){

	vector<int> array_value;
	vector<int> pair_array;
	int target, entries, value_holder;

	cout << "Enter the number of entries of the array: ";
	cin >> entries;
	cout << "Forming the array-" << endl;

	for(int i = 0; i < entries; i++){
		cout << "	Enter_vaulue: ";
		cin >> value_holder;

		array_value.push_back(value_holder);
	}
	cout << "Enter the target sum: ";
	cin >> target;

	pair_sum_finder(array_value, pair_array, target);

	if(pair_array.size() > 0){
		cout << "~~~~~The pair array with pair of values whose sum equals the target: { ";
		for(int i = 0; i < pair_array.size(); i++) cout << pair_array[i] << " ";
		cout << "}" << endl;
	}
	else if(pair_array.size() == 0) cout << "~~~~~There is now subarray sum matching the target..." << endl;

	return 0;
}