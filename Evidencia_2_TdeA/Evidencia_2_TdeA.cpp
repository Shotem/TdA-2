// 14678grgr14678rgrgrgrgvicentevicente
#include <iostream>
#include <vector>
#include <string>
#include <locale>

#include "GIC.h"

void pantallaInicio();
void pantallaFin();

int main() {

    setlocale( LC_ALL, "");
    GIC g = GIC("14678", "vicente", "gr");      // Cambiar esto
    char opc = 0;
    std::string line;

    pantallaInicio();

    do {
        system("cls");


        // ===================== Info =====================
        std::cout << "Nombre usado: Vicente Garza Reyna\tMatricula usada: 1847176" << std::endl;    // Cambiar esto
        std::cout << "  Estructura: i(w)^(n)i(w^(I))^(2n)jj" << std::endl;
        std::cout << "  i = " << g.i << std::endl;
        std::cout << "  j = " << g.j << std::endl;
        std::cout << "  w = gr " << g.w << "\t\tinv(w) = " << g.wi << std::endl << std::endl;


        // ===================== Input =====================
        std::cout << "Ingrese una cadena de caracteres. Por ejemplo, \"" << g.i << g.w << g.i << g.wi << g.wi << g.j << g.j <<"\":" << std::endl;
        std::getline(std::cin, line);


        // ===================== Debug Mode? =====================
        do {
            std::cout << "¿Quiere ver el proceso? [S/N]" << std::endl;
            opc = toupper(std::cin.get());
        } while (opc != 'S' && opc != 'N');
        std::cin.ignore(std::cin.left, '\n');
        g.debug = opc == 'S';

        // ===================== Output =====================
        std::cout << std::endl;
        if ( g.compare( line ) ) {
            std::cout << "La cadena es válida" << std::endl;
        } else {
            std::cout << "La cadena es inválida" << std::endl;
        }


        // ===================== Repeat? =====================
        do {
            std::cout << "¿Quiere verificar una nueva cadena? [S/N]" << std::endl;
            opc = toupper( std::cin.get() );
        } while (opc != 'S' && opc != 'N');
        std::cin.ignore(std::cin.left, '\n');
        
    } while ( opc == 'S');

    system("cls");
    pantallaFin();
    std::cin.get();
    return 0;
}

void pantallaInicio() {
    std::cout << "=============== Proyecto 1 - Teoría de Automatas ===============" << std::endl << std::endl;

    std::cout << "\t --Integrantes:------------------------------ " << std::endl;
    std::cout << "\t| Vicente Garza Reyna              - 1847176 |" << std::endl;
    std::cout << "\t| Diana Lizeth Renteria Aguilera   - 1852889 |" << std::endl;
    std::cout << "\t| Andrés Isaac Montes Bartolo      - 1854017 |" << std::endl;
    std::cout << "\t -------------------------------------------- " << std::endl << std::endl;

    std::cout << "Presione enter para continuar..." << std::endl;
    /*std::cin.ignore();*/
    std::cin.get();
    return;
}


void pantallaFin() {

    std::cout << "Gracias por probar este programa." << std::endl << std::endl;
    std::cout << "Puede encontrar el código fuente en:" << std::endl << "https://github.com/Shotem/TdA-2" << std::endl << std::endl;
    std::cout << "Presione enter para continuar..." << std::endl;
}