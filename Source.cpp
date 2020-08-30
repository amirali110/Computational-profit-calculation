#include <iostream>
#include <string>
#include <Windows.h>
#include <memory>

using namespace std;


int main() {

	

	int y=0;
	double next = 0, profit = 0;
	int i = 0;
	
	cout << "How many days do you want to keep?" << endl;
	cin >> y;

	auto day = make_unique<double[]>(y);

	cout << "Please Enter your fund in first day" << endl;
	cin >> day[0];

	cout << "What percentage of the average daily profit you can make?" << endl;
	cin >> profit;

	cout << endl;

	for ( i ; i < y; i++) {

		next = (day[i] / 100);
		next *= profit;
		day[i+1] = day[i] + next;

		cout << "day " << i + 1 << "==>" << next + day[i] << endl;
		cout << "---------------------" << endl;

	}

	cout << "Total profit : " << endl;
	cout << static_cast<float>(((day[i] / day[0]) - 1) * 100) << " %" << endl << endl;
	cout << "finished!" << endl;

	Sleep(8000);
}