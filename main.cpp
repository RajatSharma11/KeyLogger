#include<iostream>
#include<windows.h>

using namespace std;

int main()
{
    MSG Msg;

    /** Removing Console Window from Screen **/
    /** It is basically masking the key-logger so user does not see it **/
    while(GetMessage(&Msg, NULL, 0, 0))
    {
        TranslateMessage(&Msg);
        DispatchMessage(&Msg);
    }
    return 0;
}
