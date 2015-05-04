#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

void readNumbersFromFile(string filename){
	ifstream infile (filename);
	string line;
	int total = 0;
	int countlines = 0;
	vector <int> numeros;
	while(1){
		getline (infile, line);
		if (infile.eof()) break;
		countlines++;
		int x = atoi(line.c_str());
		total = total + x;
		numeros.push_back(x);
	}

	cout << "total is " << total << endl;
	cout << "num items is " << countlines << endl;
	cout << "The average is " << total/countlines << endl;
}

int main (){
	readNumbersFromFile("random_numbers.txt");
	return 0;
}