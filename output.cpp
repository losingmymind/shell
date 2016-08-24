#include <iostream>
#include "output.h"

using namespace std;


void shell::outputPrompt()
{
	cout << shell::getDefaultPromptString() << " ";
}

string shell::getDefaultPromptString()
{
	return string(">>");
}