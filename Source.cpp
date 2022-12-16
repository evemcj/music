#include <Windows.h>
#include <iostream>
#include <mmsystem.h>

int main() {
	bool a =PlaySoundA(LPCSTR("a.mp3"), NULL, SND_SYNC);
	if (a == true) { std::cout<<"RFGREG"; };
	return 0;
}