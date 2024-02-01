
#include <iostream>
using namespace std;
#include "Book.h"
#include "Member.h"



int main()
{
	int sizeBook = 2;
	Book* books = new Book[sizeBook];
	books[0] = Book("Book1", "Author1", "111-1111111111");
	books[1] = Book("Book2", "Book2", "222-2222222222");
	
	books[0].display();
	books[1].display();
	int sizeMember = 2;
	Member* members = new Member[sizeMember];
	members[0] = Member("Ivan", 58, "585858");
	members[1] = Member("Yana", 69, "696969");
	members[0].display();
	members[0].borrowBook(&books[0]);
	members[0].borrowBook(&books[1]);
	members[1].display();
	members[1].borrowBook(&books[0]);
	members[1].borrowBook(&books[1]);
	
	



	
	return 0;
}