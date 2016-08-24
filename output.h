#ifndef OUTPUT_H
#define OUTPUT_H


using namespace std;

namespace shell{

	//Output default shell prompt.
	void outputPrompt();

	//Return the primary prompt string - akin to $PS1 in bash.
	string getPrimaryPromptString();

	//Return the secondary prompt string - akin to $PS2 in bash.
	string getSecondaryPromptString();
}

#endif
