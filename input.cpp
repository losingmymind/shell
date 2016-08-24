#include <iostream>
#include <vector>
#include "input.h"

using namespace std;

vector<string> shell::getUserInput()
{
	string x = getLineFromUser();

	return vector<string>();
}

string shell::getLineFromUser()
{
	string line;
	cin >> line;
}

