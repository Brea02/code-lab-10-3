#include<iostream>
#include<iomanip>

using namespace std;

int main() {

	cout << "Number of students: ";
	int numStudents;
	cin >> numStudents;

	const int MAX_SIZE = 20;
	int array_score[MAX_SIZE];

	for (int i = 0; i < numStudents; i++) {
		cout << "Enter score #" << i + 1 << ": ";
		cin >> array_score[i];

	}

	int lowest = array_score[0];
	int highest = array_score[0];
	int avg_count = 0;

	//cout << "Testing: " << endl;
	for (int x = 0; x < numStudents; x++) {
		avg_count += array_score[x];
		if (array_score[x] < lowest) {
			lowest = array_score[x];
		}
		if (array_score[x] > highest) {
			highest = array_score[x];
		}
	}

	double average = (double)avg_count / (double)numStudents;

	//cout << "avgCount test: " << avg_count << endl;
	cout << "Lowest: " << lowest << " ";
	cout << "Highest: " << highest << " ";
	cout << "Average: " << fixed << setprecision(1) << average << endl;

}