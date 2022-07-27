#include <iostream>
#include <string>
#include <cctype>
#include <regex>

using namespace std;

int main(void){
	char input[100000];
	int where[500];
	char* cut[500];
	int n = 0;
	cin >> input;
	
	for (int i = 0; i < strlen(input); i++) {
		if (isupper(input[i])){
			where[n] = i;
			n++;
		}
	}
	for (int i = 0; i < n - 1; i++) {
		cut[i].append()
	}

	return 0;
}