#include <iostream> // Libreria base input-output
#include <stdlib.h> // Librerie usate per usare la funzione rand()
#include <string>
#include <ctime>
#include <windows.h> // Libreria per usare la funzione Sleep(xx)
#include "Funzioni.h" //File header contenente le funzioni necessarie al programma

using namespace std;

int main()
{
    menu();
    int liv=selezionalivello();
    switch (liv) // Switch usato per selezionare la modalita' di gioco
    {
        case 1: // Livello USER VS CPU con relative funzioni
            regolamento();
            generanumero();
            livello1();
            break;
        case 2: //Livello CPU VS CPU con relative funzioni
            regolamento();
            livello2();
            break;
        case 3: // Uscita
            break;
    }
    return 0;
}
