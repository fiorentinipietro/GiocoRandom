#ifndef FUNZIONI_H_INCLUDED
#define FUNZIONI_H_INCLUDED

using namespace std;

void menu();                             // Prototipo funzioni usate nel programma
int selezionalivello();
void livello1();
void livello2();
void generanumero();
void regolamento();
string acquafuoco();

int diff, numind, numtent,tent, range, nl, numcas; // Variabili globali usate nel programma

void menu() // Funzione che va a generare in output il menu di selezione livello
{
    cout<<char(201);
    for (int i=0; i<36;i++) // Ciclo for usato per generare la riga sopra in output
    {
        cout<<char(205)<<char(205)<<" ";
    }
    cout<<char(187)<<endl;

    for (int i=0; i<5;i++)  // Ciclo for usato per generare le colonne laterali e testo
    {
        cout<<char(186);
        cout<<" $ $ $ $ $ $ $ || MENU DI GIOCO || SELEZIONE LIVELLO || USER VS CPU (1) CPU VS CPU(2) ESCI (3) || $ $ $ $ $"; // Testo del menu
        for (int j=0; j<1; j++)
        {
            cout<<" ";
        }
        cout<<char(186);
        cout<<"\n";
        cout<<" ";
        for (int j=0; j<108; j++)
        {
            cout<<" ";
        }
        cout<<"\n";
        Sleep(80); // Funzione Sleep usata per dare un effetto dinamico al caricamento dellle scritte del menu
    }

    cout<<char(200);
    for (int i=0; i<36;i++) // Ciclo for usato per generare la riga sotto
    {
        cout<<char(205)<<char(205)<<" ";
    }
    cout<<char(188)<<endl<<endl;



}

int selezionalivello() // Funzione che permette di far selezionare tramite input dell'utente il livello
{
    do // Ciclo do-while che controlla che il dato inserito sia compatibile con le varie opzioni di seleizone livello
    {
        cout<<endl;
        cout<<char(201);
        for (int i=0; i<36;i++) // Ciclo for usato per generare la riga sopra in output
        {
            cout<<char(205)<<char(205)<<" ";
        }
        cout<<char(187)<<endl;

        cout<<"  $ $ $ $ $ $ $ || INSERIRE IL LIVELLO O USCITA: "; // Testo
        cin>>nl;                                                   // ricezione in input del numero del livello o uscita
        cout<<char(200);
        for (int i=0; i<36;i++) // Ciclo for usato per generare la riga sotto in output
        {
            cout<<char(205)<<char(205)<<" ";
        }
        cout<<char(188)<<endl;
    }while(nl!=1 and nl!=2 and nl!=3);

    if(nl==3)  //  Istruzione condizionale if in caso di uscita quindi di inserimento numero 3
    {
        system("CLS"); // Funzione che va a pulire la finestra di output
        cout<<endl;
        cout<<char(201);
        for (int i=0; i<36;i++) // Ciclo for usato per generare la riga sopra in output
        {
            cout<<char(205)<<char(205)<<" ";
        }
        cout<<char(187)<<endl;

        cout<<"  $ $ $ $ $ $ $ || PROGRAMMA ESEGUITO USCITA COMPLETATA "; // Testo
        cout<<endl;
        cout<<char(200);
        for (int i=0; i<36;i++) // Ciclo for usato per generare la riga sotto in output
        {
            cout<<char(205)<<char(205)<<" ";
        }
        cout<<char(188)<<endl;
        return nl;
    }
    Sleep(1000);      // Funzione Sleep(xx) per ritardare di 1 secondo la prosecuzione del programmma
    system("CLS");    // Funzione che va a pulire la finestra di output

    if(nl==1)  // Istruzione condizionale if in caso di livello USER VS CPU quindi di inserimento numero 1
    {
          for(int i=0; i<100; i++) // Ciclo for per andare a scrivere 100 volte il testo
          {
          cout<<"HAI SCELTO IL LIVELLO USER VS CPU ! "; // Testo
          Sleep(1);  // Funzione Sleep(xx) che va a ritardare di 1 millisecondo la scrittura del testo per dare un effetto dinamico
          }
    }
    else      // Istruzione condizionale else in caso di livello CPU VS CPU quindi di inserimento numero 2
    {
          for(int i=0; i<103; i++) // Ciclo for per andare a scrivere 100 volte il testo
          {
          cout<<"HAI SCELTO IL LIVELLO CPU VS CPU ! "; // Testo
          Sleep(1);  // Funzione Sleep(xx) che va a ritardare di 1 millisecondo la scrittura del testo per dare un effetto dinamico
          }
    }
    Sleep(1000); // Funzione Sleep(xx) che va a ritardare di 1 secondo la fine della funzione in modo da rendere momentaneamente statico l'output
    return nl;
}

void livello1()  // Funzione dedicata al funzionamento del livello 1
{
    int i=1; // Dichiarazione variabili

    do // Ciclo do-while che permette all'utente di inserire un numero da tentare mentre si verifica che il numero tentato è diverso da quello da indovinare
    {
        cout<<endl;
        cout<<char(201);
        for (int j=0; j<36;j++) // Ciclo for usato per generare la riga sopra in output
        {
            cout<<char(205)<<char(205)<<" ";
        }
        cout<<char(187)<<endl;

        cout<<" $ $ $ $ $ $ $ ||INSERIRE UN NUMERO : ";  // Inserimento in input che permette all'utente di inserire un numero per tentare di indovinare
        cin>>numtent;
        string mess=acquafuoco();
        cout<<" $ $ $ $ $ $ $ ||TENTATIVI RIMASTI: "<<tent-i<<endl; // Output che comunica all' utente quanti tentativi ha rimasto a disposizione
        cout<<" $ $ $ $ $ $ $ ||SUGGERIMENTO: "<<mess<<endl; // Output che comunica all' utente quanto vicino è andato al numero da indovinare
        cout<<char(200);
        for (int j=0; j<36;j++) // Ciclo for usato per generare la riga sotto in output
        {
            cout<<char(205)<<char(205)<<" ";
        }
        cout<<char(188)<<endl;
        i++;
    }
    while(numtent!=numcas and i<tent+1);
    if(i==tent+1) // Istruzione condizionale if che verifica se i tentativi usati siano uguali a quelli disponibili portando quindi a una sconfitta
    {
        Sleep(1000); // Funzione Sleep(xx) che va a ritardare di 1 secondo la prosecuzione della funzione in modo da rendere momentaneamente statico l'output
        system("CLS"); // Funzione che va a pulire la finestra di output

        for(int i=0; i<360; i++) // Ciclo for che va a comunicare la sconfitta all'utente
        {
            cout<<"GAME OVER "; // Testo
            Sleep(1); // Funzione Sleep(xx) che va a ritardare di 1 millisecondo la scrittura del testo per dare un effetto dinamico
        }
        Sleep(2000);  // Funzione Sleep(xx) che va a ritardare di 2 secondi la fine della funzione in modo da rendere momentaneamente statico l'output

        system("CLS"); // Funzione che va a pulire la finestra di output
        cout<<endl;
        cout<<char(201);

        for (int j=0; j<36;j++) // Ciclo for usato per generare la riga sopra in output
        {
            cout<<char(205)<<char(205)<<" ";
        }

        cout<<char(187)<<endl;
        cout<<" $ $ $ $ $ $ $ ||HAI PERSO NON INDOVINANDO IL NUMERO "<<numcas<<endl; // Testo  che comunica che l'utente ha perso e gli indica il numero che era da indovinare
        cout<<char(200);

        for (int j=0; j<36;j++) // Ciclo for usato per generare la riga sotto in output
        {
            cout<<char(205)<<char(205)<<" ";
        }
        cout<<char(188)<<endl;
    }
    else // Istruzione condizionale else che identifica una vittoria da parte dell'utente
    {
        Sleep(1000); // Funzione Sleep(xx) che va a ritardare di 1 secondo la fine della funzione in modo da rendere momentaneamente statico l'output
        system("CLS"); // Funzione che va a pulire la finestra di output

        for(int i=0; i<240; i++) // Ciclo for che va a comunicare la vittoria all'utente
        {
            cout<<" HAI VINTO !!! "; // Testo
            Sleep(1); // Funzione Sleep(xx) che va a ritardare di 1 millisecondo la scrittura del testo per dare un effetto dinamico
        }

        system("CLS"); // Funzione che va a pulire la finestra di output
        cout<<endl;
        cout<<char(201);

        for (int j=0; j<36;j++) // Ciclo for usato per generare la riga sopra in output
        {
            cout<<char(205)<<char(205)<<" ";
        }

        cout<<char(187)<<endl;
        cout<<" $ $ $ $ $ $ $ ||HAI VINTO INDOVINANDO IL NUMERO "<<numcas<<" USANDO "<<i-1<<" TENTATIVI"<<endl; // Testo  che comunica che l'utente ha vinto indicando il numero indovinato e i tentativi utilizzati
        cout<<char(200);

        for (int j=0; j<36;j++) // Ciclo for usato per generare la riga sotto in output
        {
            cout<<char(205)<<char(205)<<" ";
        }
        cout<<char(188)<<endl;


    }

}

void livello2() // Funzione dedicata al funzionamento del livello 2
{
    int tentativo=0, i=1; // Dichiarazione variabili

    if(diff==1) // Istruzione condizionale if che va a verificare il livello di difficolta e va quindi ad assegnare i rispettivi tentativi
    {
        tent=12;
    }
    else if(diff==2)
    {
        tent=15;
    }
    else if(diff==3)
    {
        tent=10;
    }
    do
    {
        generanumero(); // Richiamo alla funzione generanumero() per generare il numero che il computer utilizzera come tentativo

        if(numcas==tentativo) // Istruzione condizionale if che va a verificare che il numero generato dal computer sia diverso dal precedente
        {
            for (int j=0; j<36;j++) // Ciclo for usato per generare la riga sopra in output
            {
                cout<<char(205)<<char(205)<<" ";
            }
            cout<<char(187)<<endl;

            cout<<" $ $ $ $ $ $ $ ||IL COMPUTER HA GENERATO UN NUMERO UGUALE AL PRECEDENTE E VERRA RIGENERATO"; // Testo
            cout<<char(200);
            for (int j=0; j<36;j++) // Ciclo for usato per generare la riga sotto in output
            {
                cout<<char(205)<<char(205)<<" ";
            }
            cout<<char(188)<<endl;
            generanumero();
        }
        cout<<endl;
        cout<<char(201);
        for (int j=0; j<36;j++) // Ciclo for usato per generare la riga sopra in output
        {
            cout<<char(205)<<char(205)<<" ";
        }
        cout<<char(187)<<endl;

        cout<<" $ $ $ $ $ $ $ ||IL COMPUTER HA TENTATO IL NUMERO: "<<numcas; // Testp che comunica il tentativo generato dal computer
        cout<<" $ $ $ $ $ $ $ ||TENTATIVI RIMASTI: "<<tent-i<<endl; // testo che comunica i tentativi rimasti
        cout<<char(200);
        for (int j=0; j<36;j++)// Ciclo for usato per generare la riga sotto in output
        {
            cout<<char(205)<<char(205)<<" ";
        }
        cout<<char(188)<<endl;
        Sleep(1000); // Funzione Sleep(xx) che va a ritardare di 1 secondo la prosecuzione della funzione in modo da rendere momentaneamente statico l'output
        i++; // Incremento alla variabile contatore
        tentativo=numcas; // Assegnazione alla variabile tentativo il valore del numero casuale generato in modo da poterlo confrontare sucessivamente per fare in modo che non ne venga generato uno uguale sucessivamente
    }
    while(numcas!=numind and i<tent+1);

    if(i==tent+1) // Istruzione condizionale if che verifica se i tentativi usati siano uguali a quelli disponibili portando quindi a una sconfitta
    {
        Sleep(1000); // Funzione Sleep(xx) che va a ritardare di 1 secondo la prosecuzione della funzione in modo da rendere momentaneamente statico l'output
        system("CLS"); // Funzione che va a pulire la finestra di output

        for(int i=0; i<360; i++) // Ciclo for che va a comunicare la sconfitta all'utente
        {
            cout<<"GAME OVER "; // Testo
            Sleep(1); // Funzione Sleep(xx) che va a ritardare di 1 millisecondo la scrittura del testo per dare un effetto dinamico
        }
        Sleep(2000); // Funzione Sleep(xx) che va a ritardare di 1 secondo la fine della funzione in modo da rendere momentaneamente statico l'output
        system("CLS"); // Funzione che va a pulire la finestra di output
        cout<<endl;
        cout<<char(201);

        for (int j=0; j<36;j++) // Ciclo for usato per generare la riga sopra in output
        {
            cout<<char(205)<<char(205)<<" ";
        }

        cout<<char(187)<<endl;
        cout<<" $ $ $ $ $ $ $ ||IL COMPUTER HA PERSO NON INDOVINANDO IL NUMERO "<<numind<<endl; //// Testo  che comunica che il computer ha perso e comunica il numero che era da indovinare
        cout<<char(200);

        for (int j=0; j<36;j++) // Ciclo for usato per generare la riga sotto in output
        {
            cout<<char(205)<<char(205)<<" ";
        }
        cout<<char(188)<<endl;
    }
    else // Istruzione condizionale else che identifica una vittoria da parte dell'utente
    {
        Sleep(1000); // Funzione Sleep(xx) che va a ritardare di 1 secondo la prosecuzione della funzione in modo da rendere momentaneamente statico l'output
        system("CLS"); // Funzione che va a pulire la finestra di output

        for(int i=0; i<240; i++) // Ciclo for che va a comunicare la vittoria all'utente
        {
            cout<<" HAI VINTO !!! "; // Testo
            Sleep(1); // Funzione Sleep(xx) che va a ritardare di 1 millisecondo la scrittura del testo per dare un effetto dinamico
        }

        system("CLS"); // Funzione che va a pulire la finestra di output
        cout<<endl;
        cout<<char(201);

        for (int j=0; j<36;j++) // Ciclo for usato per generare la riga sopra in output
        {
            cout<<char(205)<<char(205)<<" ";
        }

        cout<<char(187)<<endl;
        cout<<" $ $ $ $ $ $ $ ||HA VINTO IL COMPUTER INDOVINANDO IL NUMERO "<<numind<<" USANDO "<<i-1<<" TENTATIVI"<<endl; //// Testo  che comunica che il computer ha vinto indicando il numero indovinato e i tentativi utilizzati
        cout<<char(200);

        for (int j=0; j<36;j++) // Ciclo for usato per generare la riga sotto in output
        {
            cout<<char(205)<<char(205)<<" ";
        }
        cout<<char(188)<<endl;


    }



}

void generanumero() // Funzione dedicata alla generazione di numeri casuali
{
    if(nl==1) // Istruzione condizionale che controlla il numero del livello
    {
     srand(time(NULL));
     numcas=rand()%range;  // Generazione di un numero casuale da 0 al range deciso dall'utente
    }
    else // Istruzione condizionale else che identifica il livello numero 2
    {
        if(diff==1) // Istruzione condizionale if che verifica le difficolta'  selezionata dall'utente e genera il relativo numero casuale
        {
            srand(time(NULL));
            numcas=rand()%20;
        }
        else
        {
            srand(time(NULL));
            numcas=rand()%30;
        }
    }
}

void regolamento() // Funzione che va a generare in output il regolamento dei vari livelli
{
    int nmax; // Dichiarazione variabili
    system("CLS"); // Funzione che va a pulire la finestra di output
    if(nl==1) // Istruzione condizionale if che va a verificare il numero del livello
    {
        cout<<endl;
        cout<<char(201);

        for (int i=0; i<36;i++) // Ciclo for usato per generare la riga sopra in output
        {
            cout<<char(205)<<char(205)<<" ";
        }

        cout<<char(187)<<endl;
        cout<<" $ $ $ $ $ $ $ ||REGOLE LIVELLO USER VS CPU\n $ $ $ $ $ $ $ ||TENTATIVI SCELTI DALL'UTENTE \n $ $ $ $ $ $ $ ||RANGE DI NUMERI SCELTI DALL'UTENTE \n $ $ $ $ $ $ $ ||NUMERO GENERATO DAL COMPUTER"<<endl; // Testo regolamento livello USER VS CPU
        cout<<char(200);

        for (int i=0; i<36;i++) // Ciclo for usato per generare la riga sotto in output
        {
            cout<<char(205)<<char(205)<<" ";
        }

        cout<<char(188)<<endl;

        cout<<endl;
        cout<<char(201);

        for (int i=0; i<36;i++) // Ciclo for usato per generare la riga sopra in output
        {
            cout<<char(205)<<char(205)<<" ";
        }

        cout<<char(187)<<endl;
        cout<<" $ $ $ $ $ $ $ ||INSERIRE NUMERO DI TENTATIVI: "; // Inserimento da parte dell'utente del numero di tentativi
        cin>>tent;
        cout<<endl;
        cout<<char(200);

        for (int i=0; i<36;i++) // Ciclo for usato per generare la riga sotto in output
        {
            cout<<char(205)<<char(205)<<" ";
        }

        cout<<char(188)<<endl;

        cout<<endl;
        cout<<char(201);

        for (int i=0; i<36;i++) // Ciclo for usato per generare la riga sopra in output
        {
            cout<<char(205)<<char(205)<<" ";
        }

        cout<<char(187)<<endl;
        cout<<" $ $ $ $ $ $ $ ||INSERIRE RANGE DI NUMERI DA INDOVINARE, DA 0 A: "; // Inserimento da parte dell'utente del range numerico dei numeri che possono essere generati
        cin>>range;
        cout<<endl;
        cout<<char(200);

        for (int i=0; i<36;i++) // Ciclo for usato per generare la riga sotto in output
        {
            cout<<char(205)<<char(205)<<" ";
        }

            cout<<char(188)<<endl;
        }
    else // Istruzione condizionale else che va a verificare il numero del livello
    {
        cout<<endl;
        cout<<char(201);

        for (int i=0; i<36;i++) // Ciclo for usato per generare la riga sopra in output
        {
            cout<<char(205)<<char(205)<<" ";
        }

        cout<<char(187)<<endl;
        cout<<" $ $ $ $ $ $ $ ||REGOLE LIVELLO CPU VS CPU\n $ $ $ $ $ $ $ ||DIFFICOLTA SCELTA DALL'UTENTE\n $ $ $ $ $ $ $ ||NUMERO DA INDOVINARE SCELTO DALL'UTENTE IN UN RANGE DETERMINATO DALLA DIFFICOLTA' SCELTA\n $ $ $ $ $ $ $ ||NUMERO TENTATO GENERATO DAL COMPUTER"<<endl; // Testo regolamento livello CPU VS CPU
        cout<<char(200);

        for (int i=0; i<36;i++) // Ciclo for usato per generare la riga sotto in output
        {
            cout<<char(205)<<char(205)<<" ";
        }
        cout<<char(188)<<endl;

        cout<<endl;
        cout<<char(201);

        for (int i=0; i<36;i++) // Ciclo for usato per generare la riga sopra in output
        {
            cout<<char(205)<<char(205)<<" ";
        }

        cout<<char(187)<<endl;
        cout<<" $ $ $ $ $ $ $ ||INSERIRE IL LIVELLO DI DIFFICOLTA \n $ $ $ $ $ $ $ ||FACILE (1) RANGE NUMERI DA 0 A 20 TENTATIVI 12 PROBABILITA' DI VINCITA 60%\n $ $ $ $ $ $ $ ||MEDIO (2) RANGE NUMERI DA 0 A 30 TENTATIVI 15 PROBABILITA' DI VINCITA 50%\n $ $ $ $ $ $ $ ||DIFFICILE (3) RANGE NUMERI DA 0 A 30 TENTATIVI 10 PROBABILITA' DI VINCITA 33%"; // Testo che descrive i 3 livelli di dificolta' selezionabili dall'utente
        cout<<endl;
        cout<<char(200);

        for (int i=0; i<36;i++) // Ciclo for usato per generare la riga sotto in output
        {
            cout<<char(205)<<char(205)<<" ";
        }
        cout<<char(188)<<endl;

        do{                         // Ciclo do-while che fa inserire all'utente il livello di difficolta' finche non inserisce un valore accettabile
            cout<<endl<<char(201);
            for (int i=0; i<36;i++) // Ciclo for usato per generare la riga sopra in output
            {
                cout<<char(205)<<char(205)<<" ";
            }

            cout<<char(187)<<endl;
            cout<<" $ $ $ $ $ $ $ ||INSERIRE LIVELLO DI DIFFICOLTA': ";
            cin>>diff;
            cout<<endl;
            cout<<char(200);

            for (int i=0; i<36;i++) // Ciclo for usato per generare la riga sotto in output
            {
                cout<<char(205)<<char(205)<<" ";
            }

            cout<<char(188)<<endl;
        }while(diff!=1 and diff!=2 and diff!=3);

        if(diff==1) // Istruzione condizionale if che va ad identificare il numero masssimo che può tentare il computer in base alla difficolta
        {
            nmax=20;
        }
        else
        {
            nmax=30;
        }

        do // Ciclo do-while che fa inserire all'utente il numero da far indovinare al computer finche non inserisce un valore accettabile
        {
            cout<<endl;
            cout<<char(201);

            for (int i=0; i<36;i++) // Ciclo for usato per generare la riga sopra in output
            {
                cout<<char(205)<<char(205)<<" ";
            }

            cout<<char(187)<<endl;
            cout<<" $ $ $ $ $ $ $ ||INSERIRE NUMERO DA INDOVINARE: ";
            cin>>numind;
            cout<<endl;
            cout<<char(200);

            for (int i=0; i<36;i++) // Ciclo for usato per generare la riga sotto in output
            {
                cout<<char(205)<<char(205)<<" ";
            }

            cout<<char(188)<<endl;

            cout<<endl;

        }while(numind>nmax);
    }
}

string acquafuoco() // Funzione che serve ad avvisare l'utente se si sta avvicinando al numero da indovinare
{
    string messaggio=" "; // Dichiarazione e assegnazione variabile

    if(range>30) // Istruzione condizionale che identifica se il range di numeri e' maggiore di 30
    {
        if(abs(numind-numtent)<5) // Ho usato la funzione abs() per verificare la distanza del numero tentato da quello da illuminare
        {
            messaggio="FUOCO";
        }
        else if(abs(numind-numtent)<10)
        {
            messaggio="FUOCHINO";
        }
        else
        {
            messaggio="ACQUA";
        }
    }
    else
    {
        if(abs(numind-numtent)<3)
        {
            messaggio="FUOCO";
        }
        else if(abs(numind-numtent)<7)
        {
            messaggio="FUOCHINO";
        }
        else
        {
            messaggio="ACQUA";
        }
    }

    return messaggio;
}

#endif // FUNZIONI_H_INCLUDED
