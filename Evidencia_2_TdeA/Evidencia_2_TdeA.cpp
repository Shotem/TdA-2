
#include <iostream>
#include <vector>
#include <string>
#include <locale>

#include "GIC.h"

void pantallaInicio();
void pantallaFin();

int main()
{
    setlocale(LC_ALL, "");
    GIC g = GIC("14678", "vicente", "gr");
    char opc = 0;
    std::string line;

    pantallaInicio();

    do {
        system("cls");


        // ===================== Info =====================
        std::cout << "Nombre usado: Vicente Garza Reyna\tMatricula usada: 1847176" << std::endl << std::endl;
        std::cout << "i = " << g.i << std::endl;
        std::cout << "j = " << g.j << std::endl;
        std::cout << "w = gr " << g.w << "\t\tinv(w) = " << g.wi << std::endl;
        std::cout << "Estructura: i(w)^(n)i(w^(I))^(2n)jj" << std::endl << std::endl;


        // ===================== Input =====================
        std::cout << "Ingrese una cadena de caracteres. Por ejemplo, \"14678gr14678rgrgvicentevicente\":" << std::endl;
        std::getline(std::cin, line);


        // ===================== Debug Mode? =====================
        do {
            std::cout << "¿Quiere ver el proceso? [S/N]" << std::endl;
            opc = toupper(std::cin.get());
        } while (opc != 'S' && opc != 'N');
        std::cin.ignore(std::cin.left, '\n');

        if ( opc == 'S' ) {
            g.debug = true;
        } else {
            g.debug = false;
        }

        std::cout << std::endl;
        // ===================== Output =====================
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
    std::cout << "Puede encontrar el código fuente en:" << std::endl << "" << std::endl << std::endl;
    std::cout << "Presione enter para continuar..." << std::endl;
}