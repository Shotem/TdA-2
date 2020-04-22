#include <string>
#include <iostream>

#ifndef GIC_H
#define GIC_H

struct GIC
{
	std::string i;
	std::string j;
	std::string w;
	std::string wi;

	GIC() {
		this->i = "i";
		this->j = "j";
		this->w = "w";
		this->wi = w;
		std::reverse(this->wi.begin(), this->wi.end());

		/*std::cout << "i:   " << i  << std::endl;
		std::cout << "w:   " << w  << std::endl;
		std::cout << "w1:  " << wi << std::endl;*/
		
	}

	GIC( std::string i, std::string j, std::string w) {
		this->i = i;
		this->j = j;
		this->w = w;
		this->wi = w;
		std::reverse(this->wi.begin(), this->wi.end());

		/*std::cout << "i:   " << i  << std::endl;
		std::cout << "w:   " << w  << std::endl;
		std::cout << "w1:  " << wi << std::endl;*/
		
	}

	bool compare(std::string);
	bool subString(std::string a, std::string str, int index);

	int E00(std::string, int);
	int E01(std::string, int);
	int E02(std::string, int);
	int E03(std::string, int);
	int E04(std::string, int);
	int E05(std::string, int);
	int E06(std::string, int);
	int E07(std::string, int);
	int E08(std::string, int);
	int E09(std::string, int);
	int E10(std::string, int);
	int E11(std::string, int);
	int E12(std::string, int);

};




#endif