#include <Windows.h>
#include <iostream>

using namespace std;
int main() {
	PlaySoundA(LPCSTR("a.wav"), NULL, SND_SYNC);//use your own
	 cout << "Press any key to swap the sequence";
    cin.ignore(1000000000, '\n');
	return 0;
}
