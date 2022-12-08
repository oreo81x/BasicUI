#pragma once

#ifndef LISTAT_HPP
#define LISTAT_HPP

#include "color.hpp"
#include <conio.h>

namespace CreateList {

	class NormalList {
	public:
		friend class NastedList;

	public:
		// constructor
		NormalList() = default;

		// Constructor to set list values
		NormalList(int _currentline, int _maxline, int _minline, int _defline) :currentline(_currentline - 1), maxline(_maxline - 1), minline(_minline - 1), defline(_defline - 1) {}

		// destructor
		~NormalList() = default;

		// None return function

		// properties()
		// set list values
		void properties(int _currentline, int _maxline, int _minline, int _defline) {
			currentline = (_currentline - 1), maxline = (_maxline - 1), minline = (_minline - 1), defline = (_defline - 1);
		}

		// change currentline value
		void setline(int _currentline) { currentline = _currentline; }

		// to set the list style
		void setStyle(int _style) { style = _style; if (style < 0) { style = 0; } if (style > 1) { style = 1; } }

		// to sort the list vertical
		template < typename _auto >
		void normalSort(_auto _title[]) {

#ifdef _WIN32
			system("CLS");
#else
			system("CLEAR");
#endif // _WIN32

			for (int counter = 0; counter <= maxline; counter++) {
				if (style == 0) {
					if (counter == currentline) {
						text::light_red("  [ ");
						text::light_yellow(_title[counter]);
						text::light_red(" ]  ");
					}
					else {
						std::cout << "  "; text::bright_white(_title[counter]);
					}
				}

				if (style == 1) {
					if (counter == currentline) {
						text::black_on_bright_white(" ");
						text::black_on_bright_white(_title[counter]);
						text::black_on_bright_white(" ");
					}
					else {
						text::black_on_grey(" ");
						text::black_on_grey(_title[counter]);
						text::black_on_grey(" ");
					}
				}
				std::cout << std::endl;
			}
		}

		// *** return functions ***

		// return input char value
		char _getInput() { return input; }

		// return currentline integer value
		int _currentline() { return currentline; }

		// return maxline integer value
		int _maxline() { return maxline; }

		// return minline integer value
		int _minline() { return minline; }

		// return defline integer value
		int _defline() { return defline; }

	private:
		char input = 0;		 // the char which will take the input
		int currentline = 0; // the current selected line
		int maxline = 0;	 // the max line of the list
		int minline = 0;	 // the min line of the list
		int defline = 0;	 // the default line of the list
		int style = 0;

	protected:

	};

	class NastedList : public NormalList {
	public:
		// to sort nasted lists
		template < typename _auto, int _size >
		void nastedSort(_auto title1[], _auto title2[][_size], NormalList list[]) {

#ifdef _WIN32
			system("CLS");
#else
			system("CLEAR");
#endif // _WIN32

			for (int counter = 0; counter <= maxline; counter++) {

				// handleing some array errors
				if (list[counter].currentline < 0) {
					list[counter].currentline = 0;
				}
				if (list[counter].currentline > list[counter].maxline) {
					list[counter].currentline = list[counter].maxline;
				}

				if (counter == currentline) {
					text::light_yellow(title1[counter]);
					text::light_red(" < ");
					text::light_yellow(title2[counter][list[counter].currentline]);
					text::light_red(" > ");
				}
				else {
					text::bright_white(title1[counter]);
					text::grey(" < ");
					text::bright_white(title2[counter][list[counter].currentline]);
					text::grey(" > ");
				}
				std::cout << std::endl;
			}
		}

		// to set objects[8] values by one time
		void setMultiple(NormalList list[8], int size, int defminline, int max1 = 0, int max2 = 0, int max3 = 0, int max4 = 0, int max5 = 0, int max6 = 0, int max7 = 0, int max8 = 0) {
			// handleing some mistakes
			if (size > 8)size = 8;
			if (size < 1)size = 1;
			if (defminline < 1)defminline = 1;
			if (defminline > 2)defminline = 2;

			int arr[8] = { max1,max2,max3,max4,max5,max6,max7,max8 };

			for (int counter = 0; counter < size; counter++) {
				list[counter].currentline = 0;
				list[counter].maxline = (arr[counter] - 1);
				list[counter].minline = (defminline - 1);
				list[counter].defline = 0;
			}
		}

		// input
		void _input(NormalList* list) {
			input = _getch();

			switch (input) {
			case 'w':case 'W':
				(currentline <= minline) ? currentline = maxline : currentline--;
				break;

			case 's':case 'S':
				(currentline >= maxline) ? currentline = minline : currentline++;
				break;

			case '1':case '!':
				currentline = defline;
				break;

			case 'a':case 'A':
				(list->currentline <= list->minline) ?
					list->currentline = list->maxline : list->currentline--;
				break;

			case 'd':case 'D':
				(list->currentline >= list->maxline) ?
					list->currentline = list->minline : list->currentline++;
				break;

			case '`':case '~':
				list->currentline = list->defline;
				break;

			default:break;
			}
		}
	};

}

#endif // LISTAT_HPP
