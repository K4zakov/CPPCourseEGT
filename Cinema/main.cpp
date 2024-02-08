#include <iostream>
#include "Screening.h"
#include "Hall.h"
#include "Cinema.h"


int main() {

	Screening screening1("Hobbit", 20);
	Screening screening2("Incredible", 60);

	vector<Screening> screenings;

	screenings.push_back(screening1);
	screenings.push_back(screening2);

	Hall h1("Hall 5", 70, screenings);
	Hall h2("Hall 6", 80, screenings);
	h1.printInfo();
	h2.printInfo();
	cout << "\n.........." << endl;

	Screening screening3("Men in Black", 44);
	Screening screening4("Arcane", 66);

	vector<Screening> otherScreenings;
	otherScreenings.push_back(screening3);
	otherScreenings.push_back(screening4);
	Hall h3("Hall 9", 100, otherScreenings);
	h3.printInfo();
	cout << "\n.........." << endl;

	Screening screening5("The Nun 2", 24);
	h3.addScreening(screening5);
	h3.printInfo();
	cout << "\n.........." << endl;


	vector<Hall> halls;
	halls.push_back(h1);
	halls.push_back(h2);
	halls.push_back(h3);
	Cinema cinema("Arena", "Sofia", halls);
	cinema.printInfo();
	cout << "\n.........." << endl;

	string movieName;
	getline(cin, movieName);


	for (int i = 0; i < halls.size(); i++) { // is for halls
		Hall h = halls.at(i); // current hall

		vector<Screening> scr = h.getScreeningList();  // projection in the current hall

		for (int j = 0; j < scr.size(); j++) {  // is for screening vector
			Screening scrObj = scr.at(j); // current projection
			string currentMovieName = scrObj.getMovieName();  // movie name from screening object

			if (movieName == currentMovieName) {
				cout << " We found projection " << scrObj.getMovieName() << endl;
				scrObj.printInfo();
				h.printInfo();
			}
		}
	}

	return 0;
}