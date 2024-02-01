1. Syntax explanation:
	describe what the following line of c++ code does : int* ptr = &var;

	This is used when we have a variable of an integer type and we want to store the address of that variable in a pointer variable.
	Това се използва когато имаме променлива от int тип и искаме да запазим адреса на тази променлива в pointer.

2. Concept clarification:
		Explain the difference between a WHILE loop and a DO-WHILE loop in c++.

			While loop - evaluates the condition. If the condition evaluates to true, the code inside the loop is executed. This process
			 repeats until the condition evaluates to false.
			While loop - условието се проверява преди изпълнението на тялото на цикъла. Ако условието е вярно, кодът в цикъла се изпълнява.
			 Този процес се повтаря докато условието не стане false.
			source: https://www.programiz.com/cpp-programming/do-while-loop

			Do-while loop - The do...while loop is a variant of the while loop with one difference: the body of do-while is executed once before the condition is checked.
				 If the condition is true, the statement is repeated as long as the specified condition is true.
			Do-while loop - Тук кода се изпълнява поне веднъж преди да се провери условието.

3. Code analysis:
			Given a snippet of C++ code containing a for loop, explain what the loop does, including how many times it iterates and why.

				
				for (int i = 1; i <= 5; ++i) {
					cout << i << " ";
				}
				The loop is being initialized with int i = 1, then the condition is checked if i < =  5, if it's true the cout statement is executed 
					and then the incrementation is done with ++i and it becomes 2 and is repeated until i becomes 6 and the condition returns false.
					Цикълът се инициализира с int i = 1, след това се проверява условието дали i < =  5, ако е вярно се изпълнява cout statement-а и след това 
					се прави инкрементация с ++i и става 2 и се повтаря докато i стане 6 и условието върне false.

					source: https://www.programiz.com/cpp-programming/for-loop

4. Function usage:
		Write about how functions prevent code dublication and give an example of a simple c++ function that declaresthe square of a number:

		Functions are used to prevent code duplication. They are used to break down large programs into small manageable and organized parts.
			Функциите се използват за да се предотврати дублирането на код. Кода се "разбива" на малки части, които са лесни за управление и организация. В долупосоченият пример създаваме функция която връща квадрата на подаденото число. И я изпечатваме 3 пъти в main функцията с подадени параметри 5, 2 и 10.

			Example:
				#include <iostream>
				using namespace std;

		int square(int x) {
					return x * x;
				}

		int main() {
			cout << square(5) << endl;
			cout << square(2) << endl;
			cout << square(10) << endl;
					return 0;
				}

5. Memory management:
	Explain the concept of memory management in c++ and explain the difference betweent he stack and the heap:
		
		
		Memory management is the process of controlling and coordinating the  use if memory on a computer system. It is essential  to prevent memory leaks nad excessive memory consumption.
			Insecure memory management can result in vulnerabilities which can be exploited by attackers to execute malicious code.
		Мениджмънт на паметта е процесът на контролиране и координиране на използването на паметта в компютърната система. Той е от съществено значение за предотвратяване на изтичане на памет и прекомерна консумация на памет.
			Несигурният мениджмънт на паметта може да доведе до уязвимости, които могат да бъдат използвани от хакери за изпълнение на злонамерен код.
			There are two types of memory in C++: stack and heap.
			Има два типа памет в C++: стек и хийп.
			Stack : Memory for local variables and function calls, managed automatically by the compiler, limited size, fast access, last - in - first - out(LIFO).
			Стек: Памет за локални променливи и функции, управлявани автоматично от компилатора, ограничен размер, бърз достъп, последен - в - първи - излиза (LIFO).
			Heap : Dynamic memory allocation, managed by programmer, larger size, slower access, requires explicit allocation and deallocation, potential for memory leaks.
			Хийп: Динамично заделяне на памет, управлявано от програмиста, по-голям размер, по-бавен достъп, изисква явно заделяне и освобождаване, възможност за изтичане на памет.
			Source: Stack vs Heap Memory in C++ (https ://www.youtube.com/watch?v=wJ1L2nSIV1s&t ) by The Cherno.

6. Object oriented programming:
		explain  the concept of encapsulation in c++ and how it is achieved using classes:
			In C++, encapsulation involves combining similar data and functions into a single unit called a class.By encapsulating these functions and data, we protect that data from change.
			This concept is also known as data or information hiding. The class is the core of C++ and is the primary mechanism for data encapsulation.
			В C++ инкапсулацията включва комбинирането на подобни данни и функции в единична единица, наречена клас. Като инкапсулираме тези функции и данни, защитаваме тези данни от промяна.
			
			Обектно - ориентираното програмиране(ООП) в C++ е програмиране, базирано на концепцията за обекти и класове.
			Инкапсулация : Инкапсулацията се отнася до скриването на данните и реализацията на класовете, като само определени функции имат достъп до тях.
			Това позволява защита на данните от нежелани промени и неправилно използване от страна на другите части на програмата.
			
			C++ Class Access Modifiers
			When adding data members or functions to a class, we can use one of three keywords to control their access :
			 При добаввянето на data members или функций към даден клас, можем да използваме енда от 3 ключови думи за да контролираме достъпа до тях.
			Private: We can only use any class member or function listed as private within the class they belong to.Trying to access or view private data outside of their respective class results in an error.
				 Private : Можем да използваме всеки member на класа или функция, изброени като private в рамките на класа, към който принадлежат. Опит за достъп или преглед на частни данни извън съответния клас дава грешка.
				 Но можем да ги достъпваме и чрез публични методи, които са дефинирани в класа.
			Protected : Protected members or functions are limited in their use as well.In addition to using protected members or functions within their class, we can also access protected information from within inherited classes.
            Protected : Тези member-и и функции са достъпни само в класа и в наследените класове.
				 Public : We can use public members and functions anywhere else in our code.
				 public : Можем да използваме public member-и и функции навсякъде в кода си.

				

7. Error handlingL
	Describe how eceptions are used in c++ with an example of a try-catch block.
				Exceptions are used to handle errors that occur during the execution of a program. Exceptions provide a way to transfer control from one part of a program to another.
		C++ exception handling is built upon three keywords: try, catch, and throw.
		Exceptions are used to handle errors that occur during the execution of a program. Exceptions provide a way to transfer control from one part of a program to another.
		C++ exception handling is built upon three keywords: try, catch, and throw.
		Изключенията се използват за да се справят с грешки, които възникват по време на изпълнението на програма. Изключенията предоставят начин за прехвърляне на контрола от една част на програма към друга.
		Обработката на изключения в C++ се основава на три ключови думи: try, catch и throw.
				 Example:
			#include <iostream>
			using namespace std;

			 int main() {
				 try {
				int age = 15;
				if (age >= 18) {
					cout << "Access granted - you are old enough.";
				}
				else {
					throw (age);
				}
			}
				 catch (int myNum) {
				cout << "Access denied - You must be at least 18 years old.\n";
				cout << "Age is: " << myNum;
			}
			return 0;
		}
		 Source: https://www.w3schools.com/cpp/cpp_exceptions.asp


8. STL Containers:
	Writye about the purpose and use of the std::vector container in c++.
		The vector container is a sequence container that supports dynamic size arrays. The elements in a vector are stored contiguously in memory as in an array.
		The main advantage of using a vector over a conventional array is that a vector's size can change dynamically, with its storage being handled automatically by the container.
				Контейнерът vector е контейнер за последователност, който поддържа динамични масиви с променлив размер. Елементите във вектор се съхраняват последователно в паметта като в масив.
				Основното предимство при използването на вектор пред обикновен масив е, че размерът на вектора може да се променя динамично, като съхранението му се управлява автоматично от контейнера.
		Example:
					#include <iostream>
					#include <vector>
					using namespace std;
	
	int main() {
				vector<int> myVector;
				myVector.push_back(1);
				myVector.push_back(2);
				myVector.push_back(3);
				myVector.push_back(4);
				myVector.push_back(5);
				myVector.push_back(6);
				myVector.push_back(7);
				myVector.push_back(8);
				myVector.push_back(9);
				myVector.push_back(10);

				for (int i = 0; i < myVector.size(); i++) {
					cout << myVector[i] << endl;
				}
				return 0;
			}
Source: https://www.geeksforgeeks.org/vector-in-cpp-stl/'


	9. Pointers and References:
		Discuss the difference between pointers and references in c++ and provide scenarios where one might be preferred over the other.
		Pointers are used to store the address of variables or functions. Pointers are used to store and manage the addresses of dynamically allocated blocks of memory.
		Arrays allocated dynamically are pointed to by pointers. They inherit the same lifetime as that of the pointer variable they point to. And must be destroyed manually using the delete operator before the pointer variable goes out of scope.
		Използваме pointer-и за да съхраняваме адресите на променливи или функции. Използват се за съхранение и управление на адресите на динамично заделени блокове памет.
		Масивите, заделени динамично, се сочат от pointer-и. Те наследяват същия живот като този на pointer-а, към който сочат. И трябва да бъдат унищожени ръчно, като се използва оператора delete, преди променливата pointer да излезе от обхвата си.

		References are used to create aliases to existing variables. They are not objects. They are just new names for existing objects. Once initialized, they cannot be made to refer to other objects. They are safer than pointers and are easy to use.
		Използват се за създаване на псевдоними на съществуващи променливи. Те не са обекти. Те са просто нови имена за съществуващи обекти. След като се инициализират, те не могат да бъдат направени да сочат към други обекти. Те са по-безопасни от pointer-и и са лесни за използване.

		Source : https://www.geeksforgeeks.org/pointers-vs-references-cpp/

	10. Advanced Features:
				Explain the concept of templates in c++ and how they support generic programming. Include an example of a template function.
					Templates are powerful features of C++ which allows you to write generic programs. In simple terms, you can create a single function or a class to work with different data types using templates. 
					Templates are often used in larger codebase for the purpose of code reusability and flexibility of the programs.
					Templates(Шаблоните)са мощни функции на C++, които ви позволяват да пишете generic код . По просто казано, можете да създадете една функция или клас, който да работи с различни типове данни, използвайки шаблони.

					Example:
					
					template <class T>
				class className {
				private:
					T var;
					... .. ...
				public:
					T functionName(T arg);
					... .. ...
				};

				Соурце: https://www.programiz.com/cpp-programming/class-templates