#include <iostream>
#include "output.h"

using namespace std;

void shell::outputPrompt()
{
	cout << shell::getPrimaryPromptString() << " ";
}

string shell::getPrimaryPromptString()
{
	return string("$");
}

string shell::getSecondaryPromptString()
{
	return string(">>");
}