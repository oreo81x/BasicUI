#pragma once

#ifndef CONSOLE_HPP
#define CONSOLE_HPP

#include <Windows.h>
#include <conio.h>

namespace console {

	// MoveTo()
	// To change console window position
	void MoveTo(int x, int y) {
		HWND console = GetConsoleWindow();
		SetWindowPos(console, 0, x, y, 0, 0, SWP_NOSIZE | SWP_NOZORDER);
	}

	// ToSize()
	// To change console window size
	void ToSize(int width, int height) {
		HWND console = GetConsoleWindow();
		RECT conrect;
		GetWindowRect(console, &conrect);
		MoveWindow(console, conrect.left, conrect.top, width, height, TRUE);
	}

	// WindowTitle()
	// To change console window title
	void WindowTitle(LPCSTR title) {
		SetConsoleTitleA(title);
	}

	// delay()
	// To delay using Sleep()
	void delay(DWORD milliseconds) {
		Sleep(milliseconds);
	}

	// pause()
	// To pause console
	void pause() {
		const char PAUSE = _getch();
	}

	// clear()
	// To clear console
	void clear() {
		system("CLS");
	}

}

#endif // CONSOLE_HPP
