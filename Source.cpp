#include <iostream>
#include <string>

class child {
private :
	std::string name;
	std::string surname;
	int age;
public:
	void vvod() {
		std::cout << "Enter name :" << std::endl;
		std::cin >> name;
		std::cout << "Enter surname :" << std::endl;
		std::cin >> surname;
		std::cout << "Enter age :" << std::endl;
		std::cin >> age;

		std::cout << "Your child's name :" << name << std::endl;
		std::cout << "Your child's surname :" << surname << std::endl;
		std::cout << "Your child's age :" << age << std::endl;
	
	}
};

class Tiles {
public:
	std::string brand;
	int size_h;
	int size_w;
	float price;
private:

	void get_Data() {
		std::cout << "Enter brand name :" << std::endl;
		std::cin >> brand;
		std::cout << "Enter length :" << std::endl;
		std::cin >> size_h;
		std::cout << "Enter width :" << std::endl;
		std::cin >> size_w;

		std::cout << "Your brand is :" << brand << std::endl;
		std::cout << "Your length is :" << size_h << std::endl;
		std::cout << "Your width  is:" << size_w << std::endl;
	}
};

class Complex {
private: 
		double c1, c2;
		double x, y;
		
public:
	void cplx (){std::cout << "Enter real  :" << std::endl;
	std::cin >> c1;
	std::cout << "Enter imaginary part :" << std::endl;
	std::cin >> c2;
	x = sqrt(pow(c1, 2) + pow(c2, 2));
	y = atan(c2 / c1);
}

};