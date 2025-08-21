//
// Created by Sebastian E Burmo on 21/08/2025.
// Jobb videre med denne oppgaven i kveld :)

#include <iostream>
using namespace std;

int main() {

    cout << "---------------------------------------" << endl;
    cout << "Oppgave B - Med Tabell " << endl;

    void read_temperatures(double temperatures[], int length); //Krav for deklarasjon

    //Må lage intervall som jeg kan bruke for å telle opp antall
    const int amountoftemperatures = 5; //Lengden på perioden setter du som en konstant (Krav fra oppgaven)
    int tempunder_10 = 0;
    int tempbetween_10_and_20 = 0;
    int tempover_20 = 0;
    double temperaturs[lenght];

    read temperatures(temperatures, lenght)

    for (int i = 0; i < lenght; i++)
    {
        cout << "Temperatur nr " << i + 1 << ": " << temperatures[i] << endl;

        //Gjenbruke fra oppgave A, men endre til tempperatures[i]
        if (temperatures[i] < 10) //Temperatur under 10
            tempunder_10++;

        else if (temperatures[i] >= 10 && temperatures[i]<= 20) // Temperatur mellom 10 og 20
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