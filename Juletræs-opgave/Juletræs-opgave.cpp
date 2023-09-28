#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "Hr. Grans lommeregner \n\n";

    int forfra;
    double arealM2, antalstiklingerPrM2, prisIAltForbearbejdetJord, prisForStiklingerIAlt, samletBekostning, samletIndkomst, fortjenste, altIAlt, procent;
    double langde, bredde;
    double adelgranStiklingPrStk = 15, adelgranPrisPrStk = 75, adelgranBeplantningPrm2 = 1, adelgranBerarbejdningAfJordPrM2 = 5, adelgranEvtForventetTabOverBeplantningsPeriode = 10;
    double NordmannsgranStiklingPrStk = { 13 }, NordmannsgranPrisPrStk = { 85 }, NordmannsgranBeplantningPrm2 = { 1 }, NordmannsgranBerarbejdningAfJordPrM2 = { 8 }, NordmannsgranEvtForventetTabOverBeplantningsPeriode = { 15 };
    double RodgranStiklingPrStk = { 10 }, RodgranPrisPrStk = { 45 }, RodgranBeplantningPrm2 = { 2 }, RodgranBerarbejdningAfJordPrM2 = { 4 }, RodgranEvtForventetTabOverBeplantningsPeriode = { 20 };

    cout << "Hvor stort et areal drejer det sig om?\n";
    cout << "L\x91ngde:";
    cin >> langde;
    cout << "Bredde:";
    cin >> bredde;

    arealM2 = langde * bredde;
    cout << arealM2 << " M2\n";

    int Traesort;
    cout << "Hvilket tr\x91 \x9Bnsker du at plante?\n 1) \x92" << "delgran\n 2) Nordmannsgran\n 3) R\x9B\dgran\n";
    cin >> Traesort;

    switch (Traesort)
    {
    case 1:
        cout << "\nDu har valgt \x91""delgran:\n";
       
        antalstiklingerPrM2 = arealM2 * adelgranBeplantningPrm2;
        cout << "Du kan plante: " << antalstiklingerPrM2 << " stiklinger p\x86 dette areal.\n";

        prisForStiklingerIAlt = antalstiklingerPrM2 * adelgranStiklingPrStk;
        cout << "Prisen for stiklingerne i alt: " << prisForStiklingerIAlt << ",- DKK\n";

        prisIAltForbearbejdetJord = adelgranBerarbejdningAfJordPrM2 * arealM2;
        cout << "Prisen for bearbejdring af jorden: " << prisIAltForbearbejdetJord << ",- DKK\n";

        samletBekostning = prisIAltForbearbejdetJord + prisForStiklingerIAlt;
        cout << "Den samlet bekostning: " << samletBekostning << ",- DKK\n";

        samletIndkomst = adelgranPrisPrStk * antalstiklingerPrM2;
        cout << "Den samlet indkomst er: " << samletIndkomst << ",- DKK\n";

        fortjenste = samletIndkomst - samletBekostning;

        procent = fortjenste * adelgranEvtForventetTabOverBeplantningsPeriode / 100;
        altIAlt = fortjenste - procent;

            cout << "Samlet fortjenste: " << altIAlt << ",-DKK forventet tab over beplantnings perioden er fratrukket bel\x9B" << "bet. \n";

        break;

    case 2:
        cout << "\nDu har valgt nordmannsgran:\n";

        antalstiklingerPrM2 = arealM2 * NordmannsgranBeplantningPrm2;
        cout << "Du kan plante: " << antalstiklingerPrM2 << " stiklinger p\x86 dette areal.\n";

        prisForStiklingerIAlt = antalstiklingerPrM2 * NordmannsgranStiklingPrStk;
        cout << "Prisen for stiklingerne i alt: " << prisForStiklingerIAlt << ",- DKK\n";

        prisIAltForbearbejdetJord = NordmannsgranBerarbejdningAfJordPrM2 * arealM2;
        cout << "Prisen for bearbejdring af jorden: " << prisIAltForbearbejdetJord << ",- DKK\n";

        samletBekostning = prisIAltForbearbejdetJord + prisForStiklingerIAlt;
        cout << "Den samlet bekostning: " << samletBekostning << ",- DKK\n";

        samletIndkomst = NordmannsgranPrisPrStk * antalstiklingerPrM2;
        cout << "Den samlet indkomst er: " << samletIndkomst << ",- DKK\n";

        fortjenste = samletIndkomst - samletBekostning;

        procent = fortjenste * adelgranEvtForventetTabOverBeplantningsPeriode / 100;
        altIAlt = fortjenste - procent;

        cout << "Samlet fortjenste: " << altIAlt << "DKK,- forventet tab over beplantnings perioden er fratrukket bel\x9B" "bet. \n";

        break;

    case 3:
        cout << "\nDu har valgt r\x9B""dgran:\n";

        antalstiklingerPrM2 = arealM2 * RodgranBeplantningPrm2;
        cout << "Du kan plante: " << antalstiklingerPrM2 << " stiklinger p\x86 dette areal.\n";

        prisForStiklingerIAlt = antalstiklingerPrM2 * RodgranStiklingPrStk;
        cout << "Prisen for stiklingerne i alt: " << prisForStiklingerIAlt << ",- DKK\n";

        prisIAltForbearbejdetJord = RodgranBerarbejdningAfJordPrM2 * arealM2;
        cout << "Prisen for bearbejdring af jorden: " << prisIAltForbearbejdetJord << ",- DKK\n";

        samletBekostning = prisIAltForbearbejdetJord + prisForStiklingerIAlt;
        cout << "Den samlet bekostning: " << samletBekostning << ",- DKK\n";

        samletIndkomst = RodgranPrisPrStk * antalstiklingerPrM2;
        cout << "Den samlet indkomst er: " << samletIndkomst << ",- DKK\n";

        fortjenste = samletIndkomst - samletBekostning;

        procent = fortjenste * adelgranEvtForventetTabOverBeplantningsPeriode / 100;
        altIAlt = fortjenste - procent;

        cout << "Samlet fortjenste: " << altIAlt << "DKK,- forventet tab over beplantnings perioden er fratrukket bel\x9B" << "bet. \n";

        break;
    }

    cout << "\n\nVil du starte forfra?\n1) ja\n2) nej";
    cin >> forfra;
    
    if (forfra == 1) {
        main();
    }
    else
        return 0;

}
