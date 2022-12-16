#include <Windows.h>
#include <iostream>
#include <mmsystem.h>
using namespace std;
int main() {
	PlaySoundA(LPCSTR("a.mp3"), NULL, SND_SYNC);
	 cout << "Press any key to swap the sequence";
    cin.ignore(1000000000, '\n');
	return 0;
}
