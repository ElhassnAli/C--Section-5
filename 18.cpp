#include <iostream>
#include <string>
using namespace std;

string UserInput(string message) {
    string input;
    cout << message << endl;
    cin >> input;
    return input;
}

string Encreption(string input, int key) {
	string output = "";
	for (int i = 0; i < input.length(); i++) {
		output += char(int(input[i]) + key);
	}
	return output;
}
string Decreption(string input, int key) {
	string output = "";
	for (int i = 0; i < input.length(); i++) {
		output += char(int(input[i]) - key);
	}
	return output;
}
int main() {

	string message = UserInput("Enter Your Message : ");
	int key = stoi(UserInput("Enter The Key : "));

	string encrypted = Encreption(message, key);
	string decrypted = Decreption(encrypted, key);

	cout << "Original Message : " << message << endl;
	cout << "Encrypted Message : " << encrypted << endl;
	cout << "Decrypted Message : " << decrypted << endl;

	return 0;
}