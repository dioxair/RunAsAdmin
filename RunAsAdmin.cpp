#include <format>
#include <Windows.h>
#include <tlhelp32.h>
#include <tchar.h>

using namespace std;

int main(int argc, char* argv[])
{
    if (argv[1] == NULL)
    {
        MessageBox(0, _T("In order to use RunAsAdmin, you need to drag an exe on top of this exe!"), _T("Error!"), 0);
        exit(1);
    }

    string command = format("cmd /min /C \"set __COMPAT_LAYER=RUNASINVOKER && start \"\" {0}\"", argv[1]);

    system(command.c_str());
    MessageBox(0, _T("Executed program without admin rights!"), _T("Success!"), 0);
    
    return 0;
}