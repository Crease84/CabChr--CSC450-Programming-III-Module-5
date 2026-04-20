//============================================================================
// Name        : CriticalThinkingProject5.cpp
// Author      : Christopher C
// Version     : Apr 19, 2026
// Copyright   : 
// Description : Prints to a file and puts input down flips it and reverses the text file context to a new file
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string userInput;
	string content;
	string line;

	ofstream file("src/CSC450_CT5_mod5.txt", ios::app);

	cout << "Enter Text: " << endl;
	getline(cin, userInput);

	file << userInput << "\n";
	cout << "Appended" << endl;

	file.close();
	cout << "Closed original file" << endl;

	ifstream inFile("src/CSC450_CT5_mod5.txt");

	while (getline(inFile, line)) {
		content += line + "\n";
	}
	cout << "Copied file" << endl;

	reverse(content.begin(), content.end());

	ofstream outFile("src/CSC450-mod5-reverse.txt");
	outFile << content;
	cout << "Appended reverse" << endl;
	file.close();

	return 0;
}
