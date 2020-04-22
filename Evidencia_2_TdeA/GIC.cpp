
#include "GIC.h"

bool GIC::compare(std::string str) {
	return E00(str, 0) != -1;
}

int GIC::E00(std::string str, int p){
	std::cout << "E00 " << p << std::endl;

	int r1 = E06(str, p), r2 = 0;
	if (r1 != -1) {
		r2 = E01(str, p + r1);
		if (r2 != -1) {
			return 1 + r2;
		} else {
			return -1;
		}
	} else {
		return -1;
	}
}
int GIC::E01(std::string str, int p){
	std::cout << "E01 " << p << std::endl;

	int r1 = E07(str, p), r2 = 0;
	if (r1 != -1) {
		r2 = E02(str, p + r1);
		if (r2 != -1) {
			return 1 + r2;
		} else {
			return -1;
		}
	} else {
		return -1;
	}
}
int GIC::E02(std::string str, int p){
	std::cout << "E02 " << p << std::endl;

	int r1 = E10(str, p), r2 = 0;
	if (r1 != -1) {
		r2 = E03(str, p + r1);
		if (r2 != -1) {
			return 1 + r2;
		} else {
			return -1;
		}
	} else {
		return -1;
	}
}
int GIC::E03(std::string str, int p){
	std::cout << "E03 " << p << std::endl;

	int r1 = E08(str, p), r2 = 0;
	if (r1 != -1) {
		r2 = E04(str, p + r1);
		if (r2 != -1) {
			return 1 + r2;
		} else {
			return -1;
		}
	} else {
		return -1;
	}
}
int GIC::E04(std::string str, int p){
	std::cout << "E04 " << p << std::endl;

	int r1 = E08(str, p), r2 = 0;
	if (r1 != -1) {
		r2 = E05(str, p + r1);
		if (r2 != -1) {
			return 1 + r2;
		} else {
			return -1;
		}
	} else {
		return -1;
	}
}
int GIC::E05(std::string str, int p){
	std::cout << "E05 " << p << std::endl;

	int r1 = E09(str, p), r2 = 0;
	if (r1 != -1) {
		r2 = E09(str, p + r1);
		if (r2 != -1) {
			return 1 + r2;
		} else {
			return -1;
		}
	} else {
		return -1;
	}
}
int GIC::E06(std::string str, int p){
	std::cout << "E06 " << p << std::endl;

	return (subString(str, this->i, p) ? this->i.length() : -1);
}
int GIC::E07(std::string str, int p){
	std::cout << "E07 " << p << std::endl;

	return (subString(str, this->w, p) ? this->w.length() : -1);
}
int GIC::E08(std::string str, int p){
	std::cout << "E08 " << p << std::endl;

	return (subString(str, this->wi, p) ? this->wi.length() : -1);
}
int GIC::E09(std::string str, int p){
	std::cout << "E09 " << p << std::endl;

	return (subString(str, this->j, p) ? this->j.length() : -1);
}
int GIC::E10(std::string str, int p) {
	std::cout << "E10 " << p << std::endl;

	int r1 = 0, r2 = 0;
	if ( subString(str, i, p) ) {
		return i.length();
	} else {
		r1 = E07(str, p);
		if (r1 != -1) {
			r2 = E11(str, p + r1);
			if (r2 != -1) {
				return 1 + r2;
			} else {
				return -1;
			}
		} else {
			return -1;
		}
	}
}
int GIC::E11(std::string str, int p){
	std::cout << "E11 " << p << std::endl;

	int r1 = E10(str, p), r2 = 0;
	if (r1 != -1) {
		r2 = E12(str, p + r1);
		if (r2 != -1) {
			return 1 + r2;
		} else {
			return -1;
		}
	} else {
		return -1;
	}
}
int GIC::E12(std::string str, int p){
	std::cout << "E12 " << p << std::endl;

	int r1 = E08(str, p), r2 = 0;
	if (r1 != -1) {
		r2 = E08(str, p + r1);
		if (r2 != -1) {
			return 1 + r2;
		} else {
			return -1;
		}
	} else {
		return -1;
	}
}

bool GIC::subString(std::string str, std::string a, int index) {
	if (str.length() < index + a.length()) {
		return false;
	} else {

		for (int i = 0; i < a.length(); i++) {
			if (a[i] != str[index + i]) {
				return false;
			}
		}
		return true;
	}
}

