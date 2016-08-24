#ifndef INPUT_H
#define INPUT_H

#include <vector>

using namespace std;

namespace shell{

	//Return a vector of tokens inputted by user.
	vector<string> getUserInput();

	//Get a string of input from the user.
	string getLineFromUser();

	//Establish whether any more input needs to be read.
	//Will return false if a special character, such as quotes, was opened, but not closed. 
	bool isUserInputFinished();
	

}

#endif
