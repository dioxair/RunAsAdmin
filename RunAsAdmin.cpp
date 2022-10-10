#include <iostream>
#include <format>

using namespace std;

int main(int argc, char* argv[])
{
    string command = format("cmd /min /C \"set __COMPAT_LAYER = RUNASINVOKER && start \"\" {0}\"", argv[1]);

    system(command.c_str());
    
    return 0;
}