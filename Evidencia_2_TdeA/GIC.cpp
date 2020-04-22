
#include "GIC.h"

bool GIC::compare(std::string str) {
	return E00(str);
}

bool GIC::E00(std::string &str) {
	if ( E06(str) && E01(str) ) {
		return true;
	} else {
		return false;
	}
}

bool GIC::E01(std::string& str) {
	if (E07(str) && E02(str)) {
		return true;
	} else {
		return false;
	}
}

bool GIC::E02(std::string& str) {
	if (E10(str) && E03(str)) {
		return true;
	} else {
		return false;
	}
}

bool GIC::E03(std::string& str) {
	if (E08(str) && E04(str)) {
		return true;
	} else {
		return false;
	}
}

bool GIC::E04(std::string& str) {
	if (E08(str) && E05(str)) {
		return true;
	} else {
		return false;
	}
}

bool GIC::E05(std::string& str) {
	if (E09(str) && E09(str)) {
		return true;
	} else {
		return false;
	}
}



bool GIC::E06(std::string &str){
	if( subString( str, i ,0 ) ) {
		str.erase( 0, i.length() );
		return true;
	} else { 

		return false;
	}
}
bool GIC::E07(std::string &str){
	if( subString( str,w,0 ) ) {
		str.erase( 0, w.length() );
		return true;
	} else { 
		return false;
	}
}
bool GIC::E08(std::string &str){
	if( subString( str,wi,0 ) ) {
		str.erase( 0, wi.length() );
		return true;
	} else { 
		return false;
	}
}
bool GIC::E09(std::string &str){
	if( subString( str, j,0 ) ) {
		str.erase( 0, j.length() );
		return true;
	} else { 
		return false;
	}
}

bool GIC::E10(std::string& str) {
	if (subString(str, i, 0)) {
		str.erase(0, i.length());
		return true;
	} else if (E07(str) && E11(str)) {
		return true;
	} else {
		return false;
	}
}

bool GIC::E11(std::string& str) {
	if (E10(str) && E12(str)) {
		return true;
	} else {
		return false;
	}
}

bool GIC::E12(std::string& str) {
	if (E08(str) && E08(str)) {
		return true;
	} else {
		return false;
	}
}



bool GIC::subString(std::string str, std::string a, int index) {
	if (str.length() < index + a.length()) {
		return false;
	} else {

		for (unsigned int i = 0; i < a.length(); i++) {
			if (a[i] != str[index + i]) {
				return false;
			}
		}
		return true;
	}
}

