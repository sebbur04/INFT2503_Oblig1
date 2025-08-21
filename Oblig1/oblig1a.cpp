//
// Created by Sebastian E Burmo on 21/08/2025.
//

#include <iostream>
using namespace std; //Setter alias for å slippe å skrive std::cout ---> cout <<"Kult" << endl;

int main() {
    cout << "---------------------------------------" << endl;
    cout << "Oppgave A - Uten Tabell " << endl;

    //Må lage intervall som jeg kan bruke for å telle opp antall
    const int lenght = 5; //Lengden på perioden setter du som en konstant (Krav fra oppgaven)
    int tempunder_10 = 0;
    int tempbetween_10_and_20 = 0;
    int tempover_20 = 0;

    cout << "Du skal skrive inn " << lenght << " temperaturer." << endl;

    for (int i = 0; i < 5; i++)
    {
        //Henter temperaturer fra prompt og teller dem opp
        double input_temp;
        cout << "Temperatur nr " << i + 1 << ": " << flush;
        cin >> input_temp;

        //Setter vi filter bassert på if/else if i forhold til hvilket intervall temperaturene skal legges til
        if (input_temp < 10) //Temperatur under 10
            tempunder_10++;

        else if (input_temp >= 10 && input_temp <= 20) // Temperatur mellom 10 og 20
            tempbetween_10_and_20++;

        else
            tempover_20++; //Hvis ingen av tilfellene over stemmer er temperaturen over 20
    }

    //Utskrift på likt format som oppgaven
    cout << "Antall under 10 er " << tempunder_10 << endl;
    cout << "Antall mellom 10 og 20 er " << tempbetween_10_and_20 << endl;
    cout << "Antall over 20 er " << tempover_20 << endl;
    return 0;

    }
