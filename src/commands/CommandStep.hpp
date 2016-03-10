#ifndef COMMANDSTEP_H
#define COMMANDSTEP_H

#include <string>
#include <vector>

#include "commands/Command.hpp"

using namespace std;

class CommandStep: public Command
{
    //Methods:
public:

    //Return the command strings the command should be registered for:
    virtual vector<string> getCommandStrings();

    //Invoke the command:
    virtual void invoke(DebugLoop& loop, vector<string>& args);
};

#endif // COMMANDSTEP_H
