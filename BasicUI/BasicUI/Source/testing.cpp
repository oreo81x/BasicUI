
#include "BasicUI.hpp"

int main(int argc, const char** argv) {
	
	console::ToSize(800, 700);
	console::MoveTo(33, 33);

	CreateList::NastedList nlist;
	nlist.properties(0, 7, 1, 0);
	CreateList::NormalList list[7];
	nlist.setMultiple(list, 7, 2, 4, 5, 8, 4, 5, 6, 3);

	std::string maintitle[7] = {
		" randText ",
		" randText ",
		" randText ",
		" randText ",
		" randText ",
		" randText ",
		" randText "
	};

	std::string nastedtitle[7][8] = {
		{"None","Wellcome","Greeting","Hello"},
		{"None","it's","an","example","only"},
		{"None","Noth[1]","Noth[2]","Noth[3]","Noth[4]","Noth[5]","Noth[6]","Noth[7]"},
		{"None","Noth[1]","Noth[2]","Noth[3]"},
		{"None","Noth[1]","Noth[2]","Noth[3]","Noth[4]"},
		{"None","Noth[1]","Noth[2]","Noth[3]","Noth[4]","Noth[5]"},
		{"None","Nothing","Exit"}
	};

	while (true) {

		nlist.nastedSort(maintitle, nastedtitle, list);
		nlist._input(&list[nlist._currentline()]);

		if (nlist._getInput() == 'e' || nlist._getInput() == 'E') {
			if (nlist._currentline() == nlist._maxline()) {
				if (list[nlist._currentline()]._currentline() == 2) {
					exit(0);
				}
			}
		}
	}

	return 0;
}