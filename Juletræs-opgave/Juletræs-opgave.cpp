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

    // definer område Længde og bredde

    cout << "Hvor stort et areal drejer det sig om?\n";
    cout << "L\x91ngde:";
    cin >> langde;
    cout << "Bredde:";
    cin >> bredde;

        //omregn til M2

    arealM2 = langde * bredde;
    cout << arealM2 << " M2\n";

        // definer ønske om træ sort


    int Traesort;
    cout << "Hvilket tr\x91 \x9Bnsker du at plante?\n 1) \x92" << "delgran\n 2) Nordmannsgran\n 3) R\x9B\dgran\n";
    cin >> Traesort;

        //hvis der er valgt ædelgran

    switch (Traesort)
    {
    case 1:
        cout << "\nDu har valgt \x91""delgran:\n";
       
        //Her ganges M2 med ædelgranbeplatning PR M2 for at finde antal stiklinger pr M2

        antalstiklingerPrM2 = arealM2 * adelgranBeplantningPrm2;
        cout << "Du kan plante: " << antalstiklingerPrM2 << " stiklinger p\x86 dette areal.\n";

        //Her ganges antal stiklinger pr M2 med ædelgran stikling pr stk for at finde prisen på stiklinger i alt

        prisForStiklingerIAlt = antalstiklingerPrM2 * adelgranStiklingPrStk;
        cout << "Prisen for stiklingerne i alt: " << prisForStiklingerIAlt << ",- DKK\n";

        //her ganges prisen på bearbejdning af jorden pr M2 med det pågældende areal i M2 for at finde prisen i alt for at få bearbejdet jorden

        prisIAltForbearbejdetJord = adelgranBerarbejdningAfJordPrM2 * arealM2;
        cout << "Prisen for bearbejdring af jorden: " << prisIAltForbearbejdetJord << ",- DKK\n";

        //Her ligges prisen i alt for den bearbejdet jord sammen med pris for stiklingerne der i alt kan plantes på område - for at finde den samlet bekostning

        samletBekostning = prisIAltForbearbejdetJord + prisForStiklingerIAlt;
        cout << "Den samlet bekostning: " << samletBekostning << ",- DKK\n";

        // ædelgrans pris pr stk ganges med det antal stiklinger der kan være pr M2 - for at finde den samlet indkomst

        samletIndkomst = adelgranPrisPrStk * antalstiklingerPrM2;
        cout << "Den samlet indkomst er: " << samletIndkomst << ",- DKK\n";

        // Samlet indkomst trækkes fra den samlet bekostning - for at udregne fortjensten

        fortjenste = samletIndkomst - samletBekostning;



        procent = fortjenste * adelgranEvtForventetTabOverBeplantningsPeriode / 100;
        altIAlt = fortjenste - procent;

            cout << "Samlet fortjenste: " << altIAlt << ",-DKK forventet tab over beplantnings perioden er fratrukket bel\x9B" << "bet. \n";

        break;


        // hvis der er valgt nordmannsgran

    case 2:
        cout << "\nDu har valgt nordmannsgran:\n";

            //Her ganges M2 med nordmannsgranbeplatning PR M2 for at finde antal stiklinger pr M2

        antalstiklingerPrM2 = arealM2 * NordmannsgranBeplantningPrm2;
        cout << "Du kan plante: " << antalstiklingerPrM2 << " stiklinger p\x86 dette areal.\n";

        //Her ganges antal stiklinger pr M2 med nordmannsgran stikling pr stk for at finde prisen på stiklinger i alt

        prisForStiklingerIAlt = antalstiklingerPrM2 * NordmannsgranStiklingPrStk;
        cout << "Prisen for stiklingerne i alt: " << prisForStiklingerIAlt << ",- DKK\n";

        //her ganges prisen på bearbejdning af jorden pr M2 med det pågældende areal i M2 for at finde prisen i alt for at få bearbejdet jorden

        prisIAltForbearbejdetJord = NordmannsgranBerarbejdningAfJordPrM2 * arealM2;
        cout << "Prisen for bearbejdring af jorden: " << prisIAltForbearbejdetJord << ",- DKK\n";

        //Her ligges prisen i alt for den bearbejdet jord sammen med pris for stiklingerne der i alt kan plantes på område - for at finde den samlet bekostning

        samletBekostning = prisIAltForbearbejdetJord + prisForStiklingerIAlt;
        cout << "Den samlet bekostning: " << samletBekostning << ",- DKK\n";

        // nordmannsgrans pris pr stk ganges med det antal stiklinger der kan være pr M2 - for at finde den samlet indkomst

        samletIndkomst = NordmannsgranPrisPrStk * antalstiklingerPrM2;
        cout << "Den samlet indkomst er: " << samletIndkomst << ",- DKK\n";

        // Samlet indkomst trækkes fra den samlet bekostning - for at udregne fortjensten

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

        //spørger om man vil starte for fra? nej lukker programmet og ja springer til main

    cout << "\n\nVil du starte forfra?\n1) ja\n2) nej";
    cin >> forfra;
    
    if (forfra == 1) {
        main();
    }
    else
        return 0;

}
