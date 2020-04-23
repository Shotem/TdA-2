
#include "GIC.h"

bool GIC::E00(std::string &str) {
	if (debug) {
		std::cout << "Entrado al estado   E00 con la cadena \"" << str << "\"" << std::endl;
	}

	if ( E06(str) && E01(str) ) {
		if (debug) {
			std::cout << "Saliendo del estado E00 con la cadena \"" << str << "\"\n" << std::endl;
		}
		return true;
	} else {
		return false;
	}
}
bool GIC::E01(std::string& str) {
	if (debug) {
		std::cout << "Entrado al estado   E01 con la cadena \"" << str << "\"" << std::endl;
	}

	if (E07(str) && E02(str)) {
		if (debug) {
			std::cout << "Saliendo del estado E01 con la cadena \"" << str << "\"" << std::endl;
		}
		return true;
	} else {
		return false;
	}
}
bool GIC::E02(std::string& str) {
	if (debug) {
		std::cout << "Entrado al estado   E02 con la cadena \"" << str << "\"" << std::endl;
	}

	if (E10(str) && E03(str)) {
		if (debug) {
			std::cout << "Saliendo del estado E02 con la cadena \"" << str << "\"" << std::endl;
		}
		return true;
	} else {
		return false;
	}
}
bool GIC::E03(std::string& str) {
	if (debug) {
		std::cout << "Entrado al estado   E03 con la cadena \"" << str << "\"" << std::endl;
	}

	if (E08(str) && E04(str)) {
		if (debug) {
			std::cout << "Saliendo del estado E03 con la cadena \"" << str << "\"" << std::endl;
		}
		return true;
	} else {
		return false;
	}
}
bool GIC::E04(std::string& str) {
	if (debug) {
		std::cout << "Entrado al estado   E04 con la cadena \"" << str << "\"" << std::endl;
	}

	if (E08(str) && E05(str)) {
		if (debug) {
			std::cout << "Saliendo del estado E04 con la cadena \"" << str << "\"" << std::endl;
		}
		return true;
	} else {
		return false;
	}
}
bool GIC::E05(std::string& str) {
	if (debug) {
		std::cout << "Entrado al estado   E05 con la cadena \"" << str << "\"" << std::endl;
	}

	if (E09(str) && E09(str)) {
		if (debug) {
			std::cout << "Saliendo del estado E05 con la cadena \"" << str << "\"" << std::endl;
		}
		return true;
	} else {
		return false;
	}
}
bool GIC::E06(std::string &str){
	if (debug) {
		std::cout << "Entrado al estado   E06 con la cadena \"" << str << "\"" << std::endl;
	}

	if( subString( str, i ,0 ) ) {
		str.erase( 0, i.length() );
		if (debug) {
			std::cout << "Saliendo del estado E06 con la cadena \"" << str << "\"" << std::endl;
		}

		return true;
	} else {
		if (debug) {
			std::cout << "Error en E06" << std::endl;
		}

		return false;
	}
}
bool GIC::E07(std::string &str){
	if (debug) {
		std::cout << "Entrado al estado   E07 con la cadena \"" << str << "\"" << std::endl;
	}

	if( subString( str,w,0 ) ) {
		str.erase( 0, w.length() );
		if (debug) {
			std::cout << "Saliendo del estado E07 con la cadena \"" << str << "\"" << std::endl;
		}

		return true;
	} else {
		if (debug) {
			std::cout << "Error en E07" << std::endl;
		}

		return false;
	}
}
bool GIC::E08(std::string &str){
	if (debug) {
		std::cout << "Entrado al estado   E08 con la cadena \"" << str << "\"" << std::endl;
	}

	if( subString( str,wi,0 ) ) {
		str.erase( 0, wi.length() );
		if (debug) {
			std::cout << "Saliendo del estado E08 con la cadena \"" << str << "\"" << std::endl;
		}

		return true;
	} else {
		if (debug) {
			std::cout << "Error en E08" << std::endl;
		}

		return false;
	}
}
bool GIC::E09(std::string &str){
	if (debug) {
		std::cout << "Entrado al estado   E09 con la cadena \"" << str << "\"" << std::endl;
	}

	if( subString( str, j,0 ) ) {
		str.erase( 0, j.length() );
		if (debug) {
			std::cout << "Saliendo del estado E09 con la cadena \"" << str << "\"" << std::endl;
		}

		return true;
	} else {
		if (debug) {
			std::cout << "Error en E09" << std::endl;
		}

		return false;
	}
}
bool GIC::E10(std::string& str) {
	if (debug) {
		std::cout << "Entrado al estado   E10 con la cadena \"" << str << "\"" << std::endl;
	}

	if (subString(str, i, 0)) {
		str.erase(0, i.length());
		if (debug) {
			std::cout << "Saliendo del estado E10 con la cadena \"" << str << "\" (terminando recursión)" << std::endl;
		}
		return true;
	} else if (E07(str) && E11(str)) {
		if (debug) {
			std::cout << "Saliendo del estado E10 con la cadena \"" << str << "\"" << std::endl;
		}
		return true;
	} else {
		return false;
	}
}
bool GIC::E11(std::string& str) {
	if (debug) {
		std::cout << "Entrado al estado   E11 con la cadena \"" << str << "\"" << std::endl;
	}

	if (E10(str) && E12(str)) {
		if (debug) {
			std::cout << "Saliendo del estado E11 con la cadena \"" << str << "\"" << std::endl;
		}
		return true;
	} else {
		return false;
	}
}
bool GIC::E12(std::string& str) {
	if (debug) {
		std::cout << "Entrado al estado   E12 con la cadena \"" << str << "\"" << std::endl;
	}

	if (E08(str) && E08(str)) {
		if (debug) {
			std::cout << "Saliendo del estado E12 con la cadena \"" << str << "\"" << std::endl;
		}
		return true;
	} else {
		return false;
	}
}

bool GIC::compare(std::string str) {
	if (debug) {
		std::cout << "Iniciando" << std::endl;
	}
	return E00(str);
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

