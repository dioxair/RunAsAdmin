#include <format>
#include <Windows.h>
#include <tlhelp32.h>
#include <tchar.h>

using namespace std;

int main(int argc, char* argv[])
{
    string command = format("cmd /min /C \"set __COMPAT_LAYER=RUNASINVOKER && start \"\" {0}\"", argv[1]);

    system(command.c_str());
    MessageBox(0, _T("Executed program without admin rights!"), _T("Success!"), 0);
    
    return 0;
}