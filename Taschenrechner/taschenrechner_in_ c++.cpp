#include <iostream>

using namespace std;

int main()
{
    // Deklaration der Zahlen
    int ersteZahl;
    int zweiteZahl;
    char Operator;

    // Eingabe der Zahlen und des Operators
    cout << "Bitte geben Sie Ihre erste Zahl ein:" << endl;
    cin >> ersteZahl;

    cout << "Bitte geben Sie Ihre zweite Zahl ein:" << endl;
    cin >> zweiteZahl;

    cout << "Bitte geben Sie einen Rechenoperator ein (+, -, *, /):" << endl;
    cin >> Operator;

    // Initialisierung der Ergebnisse
    int Ergebnis1 = ersteZahl + zweiteZahl;
    int Ergebnis2 = ersteZahl - zweiteZahl;
    int Ergebnis3 = ersteZahl * zweiteZahl;
    int Ergebnis4 = ersteZahl / zweiteZahl;

    // Ergebnis
    if (Operator == '+')
    {
        cout << "Das Ergebnis ist: " << Ergebnis1 << endl;
    }

    else if (Operator == '-')
    {
        cout << "Das Ergebnis ist: " << Ergebnis2 << endl;
    }
    else if (Operator == '*')
    {
        cout << "Das Ergebnis ist: " << Ergebnis3 << endl;
    }

    else if (Operator == '/')
    {
        cout << "Das Ergebnis ist: " << Ergebnis4 << endl;
    }

    else
    {
        cout << "Ihre Eingabe ist ungültig." << endl;
    }
}
