#include <iostream>
#include <Windows.h>
#include <ctime>

int main() {
	srand(time(NULL));
	int numx, numy;
	FreeConsole();
	while (true)
	{
		numx = rand() % 1500 + 1;
		numy = rand() % 800 + 1;
		SetCursorPos(numx, numy);
		system("cls");

		if (GetAsyncKeyState(VK_CONTROL)) {
			break;
		}
	}
	std::cin.get();
}
