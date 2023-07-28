/*
Autor: Oscar Vargas Pabon
Fecha: 27/07/2023
ejercicios de HackerRank
*/

#include <iostream>
#include <string>



/*
input output
*/

void inputOutput(){
	int suma = 0, tmp;
	std::cin >> tmp;
	suma = tmp;
	std::cin >> tmp;
	suma += tmp;
	std::cin >> tmp;
	suma += tmp;
	std::cout << suma << std::endl;
}

/*
conditional statements
*/

void conditionalStatements(){
	int elemento;
	std::cin >> elemento;
	if ( elemento == 1 ){
		std::cout << "one\n";
	} else if ( elemento == 2 ){
		std::cout << "two\n";
	} else if ( elemento == 3 ){
		std::cout << "three\n";
	} else if ( elemento == 4 ){
		std::cout << "four\n";
	} else if ( elemento == 5 ){
		std::cout << "five\n";
	} else if ( elemento == 6 ){
		std::cout << "six\n";
	}  else if ( elemento == 7 ){
		std::cout << "seven\n";
	} else if ( elemento == 8 ){
		std::cout << "eight\n";
	} else if ( elemento == 9 ){
		std::cout << "nine\n";
	} else {
		std::cout << "Greater than 9\n";
	}
}

/*
for loop
*/

void forLoop(){
	int a, b;
	std::cin >> a;
	std::cin >> b;
	for ( int elemento = a ; elemento <= b; ++elemento ){
	if ( elemento == 1 ){
		std::cout << "one\n";
	} else if ( elemento == 2 ){
		std::cout << "two\n";
	} else if ( elemento == 3 ){
		std::cout << "three\n";
	} else if ( elemento == 4 ){
		std::cout << "four\n";
	} else if ( elemento == 5 ){
		std::cout << "five\n";
	} else if ( elemento == 6 ){
		std::cout << "six\n";
	}  else if ( elemento == 7 ){
		std::cout << "seven\n";
	} else if ( elemento == 8 ){
		std::cout << "eight\n";
	} else if ( elemento == 9 ){
		std::cout << "nine\n";
	} else if ( elemento % 2 == 0){
		std::cout << "even\n";
	} else {
		std::cout << "odd\n";
	}
	}
}

/*
functions
*/

int max_of_four( int a, int b, int c, int d ){
	int res = ( a > b ) ? a : b;
	res = ( res > c ) ? res : c;
	res = ( res > d ) ? res : d;
	return res;
}

/*
arrays introduction
*/

void arraysIntroduction(){
	int len, *arr, index;
	std::cin >> len;
	arr = new int[len];
	for ( index = 0; index < len; ++index ){
		std::cin >> arr[index];
	}
	for ( index = len-1 ; index > 0; --index ){
		std::cout << arr[index] << " " ;
	}
	std::cout << arr[0] << std::endl;
	delete[] arr;
}


/*
strings
*/

void strings(){
	std::string a,b;
	std::cin >> a >> b;
	std::cout << a.size() << " " << b.size() << std::endl;
	std::cout << a+b << std::endl;
	char t = a[0];
	a[0] = b[0];
	b[0] = t;
	std::cout << a << " " << b << std::endl;
}

/*
class
¨*/

#include <list>

class Student{
private:
	std::string first_name, last_name;
	int age, standard;

	static std::string intToStr( int num ){
		std::list<int> tmp;
		while ( num != 0 ){
			tmp.push_front( num % 10 );
			num /= 10;
		}
		std::string res;
		for ( std::list<int>::iterator it = tmp.begin() ; it != tmp.end() ; ++it ){
			res.push_back( *it + '0' );
		}
		return res;
	}

public:
	void set_first_name( const std::string &first_name ){
		this->first_name = first_name;
	}
	std::string get_first_name(){
		return first_name;
	}
	void set_last_name( const std::string &last_name ){
		this->last_name = last_name;
	}
	std::string get_last_name(){
		return last_name;
	}
	void set_age( int age ){
		this->age = age;
	}
	int get_age(){
		return age;
	}
	void set_standard( int standard ){
		this->standard = standard;
	}
	int get_standard(){
		return standard;
	}
	std::string to_string(){
		std::string coma(",");
		return intToStr( age ) + coma + first_name + coma + last_name + coma + intToStr( standard ) + std::string("\n");
	}

};


/*
classes and objects
*/

class Student{
private:
	int scores;
public:
	void input(){
		int tmp;
		std::cin >> tmp;
		scores = tmp;
		std::cin >> tmp;
		scores += tmp;
		std::cin >> tmp;
		scores += tmp;
		std::cin >> tmp;
		scores += tmp;
		std::cin >> tmp;
		scores += tmp;
	}
	int calculateTotalScore(){
		return scores;
	}
};
