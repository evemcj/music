#include <Windows.h>
#include <iostream>
#include <mmsystem.h>

int main() {
	PlaySoundA(LPCSTR("a.mp3"), NULL, SND_SYNC);
	return 0;
}
