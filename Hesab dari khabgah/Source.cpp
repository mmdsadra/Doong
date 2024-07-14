#include <iostream>

using namespace std;


const int MAX = 25;
int in[MAX], out[MAX][MAX];

void bedebyad() {

	cout << "------------------------------" << endl;

	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) {
			if (out[j][i] - out[i][j] > 0)
				cout << i << " be " << j << " bede : " << out[j][i] - out[i][j] << endl;
		}
	}
	cout << endl;
	cout << "------------------------------" << endl;
}

void hesab() {
	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++)
			cout << out[i][j] << '\t';
		cout << endl;
	}
	cout << endl;
	cout << "-------------" << endl;
	for (int i = 0; i < MAX; i++)
		cout << in[i] << " ";
	cout << '\n';

	bedebyad();
}

int main() {

	while (1) {
		int n;
		cout << "kesi ke pool dade" << endl;
		cin >> n;
		if (n == -1) {
			hesab();
		}
		else {
			int pool;
			cout << "pooli ke dade" << endl;
			cin >> pool;
			cout << "chand nafar estefade" << endl;
			int number;
			cin >> number;
			for (int i = 0; i < number; i++) {
				int x;
				cin >> x;
				out[n][x] += pool / number;
			}
			in[n] += pool;
		}
		
	}return 0;
}