#include <bits/stdc++.h>
#include <conio.h>
#include <windows.h>
using namespace std;

// Function Declaration
int main();

// Function Declaration For Number System Conversion
void NumberSystem();
void title();
void output();
void subMenuDecimalToBinary();
bool checkBinary(string re);
void notForBinaryDec();
void notForBinaryOct();
void notForBinaryHex();
void notForOctaDec();
bool checkOctal(string re);
void notForOctaBin();
void notForOctaHex();
bool checkHex(string s);
void notForHexDec();
void notForHexBin();
void notForHexOct();

// Variables Declaration For Number System Conversion
int chek_user = 1;
int n;
char icon1 = 254;
char icon2 = 248;
int *c = (int *)malloc(sizeof(int));
int chekId = 1;

// Variables Declaration Time Conversion
int t_selector = 0;
int falseSelection = 0;
int day, hour, minute, second;

// Function Declaration For Number System Conversion
void TimeConversion();
void dayToHours();
void dayToMinutes();
void dayToSecond();
void subMenuTimeDayToHours();
void subMenuTimeDayToMinutes();
void subMenuTimeDayToSecond();

void hourToMinute();
void hourToSecond();
void hoursToDay();
void subMenuHourToMinute();
void subMenuHoruToSecond();
void subMenuHoruToDay();
void subMenuminutesToHour();
void subMenuminutesToSecond();
void subMenuminutesTODay();
void minutesToDay();
void minutesToHour();
void minutesToSecond();

void secondsToMinute();
void secondsToHour();
void secondsToDay();

void subMenusecondsToMinute();
void subMenusecondsToHour();
void subMenusecondsToDay();
// Variables Declaration For Length Conversion
int l_selector;
double meter, kmeter, foot, inch, centimeter;

// Function Declaration For Lenght Conversion
void LengthConversion();
void MetertoKilometer();
void MetertoCentimeter();
void Metertofoot();
void Metertoinch();
void KilometertoMeter();
void KilometertoCentimeter();
void Kilometertofoot();
void Kilometertoinch();
void FeettoMeter();
void FeettoKilometer();
void FeettoCentimeter();
void Feettoinch();
void InchToMeter();
void InchToKilometer();
void InchToCentimeter();
void InchTofoot();
void CenToMeter();
void CenToKilometer();
void CenToInch();
void CenTofoot();
void subMenuForLength(int x);

// Variables Declaration For Mass Conversion
int m_selector;
double kilogram, gram, ton, pound, carat;

// Function Declaration For Mass Conversion
void MassConversion();
void kgToGram();
void kgTopound();
void kgToTon();
void kgToCarat();
void GramToKg();
void GramTopound();
void GramToTon();
void GramToCarat();
void TonToGram();
void TonToKg();
void TonToPound();
void TonToCarat();
void PoundtoGram();
void PoundtoKg();
void PoundtoTon();
void PoundtoCarat();
void caratToGram();
void caratTokg();
void caratToPound();
void caratToTon();

void subMenuForMass(int x);

// Variables Declaration For Temperature Conversion
int tem_selector;
double celcius, kelvin, fahrenheit;

// Function Declaration For Temperature Conversion
void TempConversion();
void CeFar();
void CeKel();
void FarKel();
void FarCel();
void KelToCel();
void KelToFar();
void subMenuForTemp(int x);

//////////////////////////////////////////////////
//////////////Number System Conversion Start//////
//////////////////////////////////////////////////

/// ALL Number System Conversion///
class AllNumberSystem
{
public:
    char buffer[20];
    string binaryNumber;
    string octalNumber;
    string hexNumber;
    string hextoDec;
    // From Decimal
    // Decimal to Binary conversion
    void DecimaltoBinary()
    {
        system("cls");

        // App Title Menu Formation
        title();

        // Take Integer Number
        cout << endl
             << "   \t\t Enter Your Decimal Number: ";
        cin >> n;

        // Convert Decimal to BINARY
        itoa(n, buffer, 2);

        // Output Style Formation
        output();

        cout << "\t\t   Binary of " << n << " is: " << buffer << endl
             << endl;

        subMenuDecimalToBinary();
    }
    // Decimal to Octal Conversion
    void DecimaltoOctal()
    {
        system("cls");

        // App Title Menu Formation
        title();

        // Take Integer Number
        cout << endl
             << "   \t\t Enter Your Decimal Number: ";
        cin >> n;

        // Convert Decimal to Octal
        itoa(n, buffer, 8);

        // Output Style Formation
        output();

        cout << "\t\t   Octal of " << n << " is: " << buffer << endl
             << endl;

        subMenuDecimalToBinary();
    }
    // Decimal to Hexa Conversion
    void DecimaltoHexa()
    {
        system("cls");

        // App Title Menu Formation
        title();

        // Take Integer Number
        cout << endl
             << "   \t\t Enter Your Decimal Number: ";
        cin >> n;

        // Convert Decimal to Hexa
        itoa(n, buffer, 16);

        // Output Style Formation
        output();

        cout << "\t\t   Hexadecimal of " << n << " is: " << buffer << endl
             << endl;

        subMenuDecimalToBinary();
    }

    // From Binary
    // Binary to Decimal Conversion
    void BinarytoDecimal()
    {
        system("cls");

        // App Title Menu Formation
        title();
        // Take Binary Number
        cout << endl
             << "   \t\t Enter Your Binary Number: ";
        cin >> binaryNumber;

        // Check Number Binary or Not
        bool check = checkBinary(binaryNumber);

        if (check)
        {
            output();
            cout << "\t\t      Decimal of " << binaryNumber << " is: " << stoi(binaryNumber, 0, 2) << endl
                 << endl;
            subMenuDecimalToBinary();
        }
        else
        {
            notForBinaryDec();
        }
    }

    // Binary to Octal
    void BinarytoOctal()
    {
        system("cls");

        // App Title Menu Formation
        title();
        // Take Binary Number
        cout << endl
             << "   \t\t Enter Your Binary Number: ";
        cin >> binaryNumber;

        // Check Number Binary or Not
        bool check = checkBinary(binaryNumber);

        if (check)
        {
            output();
            int x = stoi(binaryNumber, 0, 2);

            cout << "\t\t      Octal of " << binaryNumber << " is: " << oct << x << endl
                 << endl;
            subMenuDecimalToBinary();
        }
        else
        {
            notForBinaryOct();
        }
    }

    // Binary to Hexa
    void BinarytoHex()
    {
        system("cls");

        // App Title Menu Formation
        title();
        // Take Binary Number
        cout << endl
             << "   \t\t Enter Your Binary Number: ";
        cin >> binaryNumber;

        // Check Number Binary or Not
        bool check = checkBinary(binaryNumber);

        if (check)
        {
            output();
            int x = stoi(binaryNumber, 0, 2);

            cout << "\t\t      Hexadecimal of " << binaryNumber << " is: " << hex << x << endl
                 << endl;
            subMenuDecimalToBinary();
        }
        else
        {
            notForBinaryHex();
        }
    }

    // From Octal
    // Octal to Decimal
    void OctalToDec()
    {
        system("cls");

        // App Title Menu Formation
        title();
        // Take Binary Number
        cout << endl
             << "   \t\t Enter Your Octal Number: ";
        cin >> octalNumber;

        // Check Number Octal or Not
        bool check1 = checkOctal(octalNumber);

        if (check1)
        {
            output();

            int x = stoi(octalNumber, 0, 8);
            cout << "\t\t      Decimal of " << octalNumber << " is: " << x << endl
                 << endl;
            subMenuDecimalToBinary();
        }
        else
        {
            notForOctaDec();
        }
    }
    // Octal to Bin
    void OctalToBin()
    {
        system("cls");

        // App Title Menu Formation
        title();
        // Take Binary Number
        cout << endl
             << "   \t\t Enter Your Octal Number: ";
        cin >> octalNumber;

        // Check Number Octal or Not
        bool check1 = checkOctal(octalNumber);

        if (check1)
        {
            output();

            int ocToBin = stoi(octalNumber, 0, 8);

            itoa(ocToBin, buffer, 2);
            cout << "\t\t      Binary of " << octalNumber << " is: " << buffer << endl
                 << endl;
            subMenuDecimalToBinary();
        }
        else
        {
            notForOctaBin();
        }
    }
    // Octal to Hexadecimal
    void OctalToHex()
    {
        system("cls");

        // App Title Menu Formation
        title();
        // Take Binary Number
        cout << endl
             << "   \t\t Enter Your Octal Number: ";
        cin >> octalNumber;

        // Check Number Octal or Not
        bool check1 = checkOctal(octalNumber);

        if (check1)
        {
            output();

            int ocToHex = stoi(octalNumber, 0, 8);

            itoa(ocToHex, buffer, 16);
            cout << "\t\t      Hexadecimal of " << octalNumber << " is: " << buffer << endl
                 << endl;
            subMenuDecimalToBinary();
        }
        else
        {
            notForOctaHex();
        }
    }

    // From Hexa
    // Hexa to Decimal
    void hexToDecimal()
    {
        system("cls");

        // App Title Menu Formation
        title();
        // Take Binary Number
        cout << endl
             << "   \t\t Enter Your Hexadecimal Number: ";
        cin >> hexNumber;

        // Check Number Hex or Not
        bool check = checkHex(hexNumber);
        if (check)
        {
            output();
            cout << "\t\t      Decimal of " << hexNumber << " is: " << stoi(hexNumber, 0, 16) << endl
                 << endl;
            subMenuDecimalToBinary();
        }
        else
        {
            notForHexDec();
        }
    }
    // Hexa to Binary
    void hexoBinary()
    {
        system("cls");

        // App Title Menu Formation
        title();
        // Take Binary Number
        cout << endl
             << "   \t\t Enter Your Hexadecimal Number: ";
        cin >> hexNumber;

        // Check Number Hex or Not
        bool check = checkHex(hexNumber);
        if (check)
        {
            output();
            int hex = stoi(hexNumber, 0, 16);
            cout << "\t\t      Binary of " << hexNumber << " is: " << itoa(hex, buffer, 2) << endl
                 << endl;
            subMenuDecimalToBinary();
        }
        else
        {
            notForHexBin();
        }
    }
    // hexa to Octal
    void hexaToOctal()
    {
        system("cls");

        // App Title Menu Formation
        title();
        // Take Binary Number
        cout << endl
             << "   \t\t Enter Your Hexadecimal Number: ";
        cin >> hexNumber;

        // Check Number Hex or Not
        bool check = checkHex(hexNumber);
        if (check)
        {
            output();
            int hex = stoi(hexNumber, 0, 16);
            cout << "\t\t      Octal of " << hexNumber << " is: " << itoa(hex, buffer, 8) << endl
                 << endl;
            subMenuDecimalToBinary();
        }
        else
        {
            notForHexOct();
        }
    }
};

// IF Number is Not Binary Run Those functions
void notForBinaryDec()
{
    system("cls");
    output();
    if (*c == 1)
    {
        cout << "\t\tError: Your Selection is Not correct." << endl;
        cout << "\t\t         Input Correct Option:" << endl
             << endl;
        *c = 0;
    }
    else
    {
        cout << "\t\t       It's Not a Binary Number" << endl
             << endl;
    }

    cout << "\t\t Input Again For Select       : 1" << endl;
    cout << "\t\t Number System Menu For Select: 2" << endl;
    cout << "\t\t Main Menu For Select         : 3" << endl;
    cout << "\t\t Exit For Select              : 4" << endl;
    cout << endl
         << "\t\t Enter Menu Number: ";
    cin >> n;
    AllNumberSystem ob;
    switch (n)
    {
    case 1:
        ob.BinarytoDecimal();
        break;
    case 2:
        NumberSystem();
        break;
    case 3:
        main();
        break;
    case 4:
        return;
    default:
        *c = 1;
        notForBinaryDec();
        break;
    }
}
void notForBinaryOct()
{
    system("cls");
    output();
    if (*c == 1)
    {
        cout << "\t\tError: Your Selection is Not correct." << endl;
        cout << "\t\t         Input Correct Option:" << endl
             << endl;
        *c = 0;
    }
    else
    {
        cout << "\t\t       It's Not Binary Number" << endl
             << endl;
    }

    cout << "\t\t Input Again For Select       : 1" << endl;
    cout << "\t\t Number System Menu For Select: 2" << endl;
    cout << "\t\t Main Menu For Select         : 3" << endl;
    cout << "\t\t Exit For Select              : 4" << endl;
    cout << endl
         << "\t\t Enter Menu Number: ";
    cin >> n;
    AllNumberSystem ob;
    switch (n)
    {
    case 1:
        ob.BinarytoOctal();
        break;
    case 2:
        NumberSystem();
        break;
    case 3:
        main();
        break;
    case 4:
        return;
    default:
        *c = 1;
        notForBinaryOct();
        break;
    }
}
void notForBinaryHex()
{
    system("cls");

    output();
    if (*c == 1)
    {
        cout << "\t\tError: Your Selection is Not correct." << endl;
        cout << "\t\t         Input Correct Option:" << endl
             << endl;
        *c = 0;
    }
    else
    {
        cout << "\t\t       It's Not Binary Number" << endl
             << endl;
    }

    cout << "\t\t Input Again For Select       : 1" << endl;
    cout << "\t\t Number System Menu For Select: 2" << endl;
    cout << "\t\t Main Menu For Select         : 3" << endl;
    cout << "\t\t Exit For Select              : 4" << endl;
    cout << endl
         << "\t\t Enter Menu Number: ";
    cin >> n;
    AllNumberSystem ob;
    switch (n)
    {
    case 1:
        ob.BinarytoHex();
        break;
    case 2:
        NumberSystem();
        break;
    case 3:
        main();
        break;
    case 4:
        return;
    default:
        *c = 1;
        notForBinaryHex();
        break;
    }
}

// IF Number is Not Octal Run Those functions
void notForOctaDec()
{
    system("cls");

    output();
    if (*c == 1)
    {
        cout << "\t\tError: Your Selection is Not correct." << endl;
        cout << "\t\t         Input Correct Option:" << endl
             << endl;
        *c = 0;
    }
    else
    {
        cout << "\t\t       It's Not a Octal Number" << endl
             << endl;
    }

    cout << "\t\t Input Again For Select       : 1" << endl;
    cout << "\t\t Number System Menu For Select: 2" << endl;
    cout << "\t\t Main Menu For Select         : 3" << endl;
    cout << "\t\t Exit For Select              : 4" << endl;
    cout << endl
         << "\t\t Enter Menu Number: ";
    cin >> n;
    AllNumberSystem ob;
    switch (n)
    {
    case 1:
        ob.OctalToDec();
        break;
    case 2:
        NumberSystem();
        break;
    case 3:
        main();
        break;
    case 4:
        return;
    default:
        *c = 1;
        notForOctaDec();
        break;
    }
}
void notForOctaBin()
{
    system("cls");

    output();
    if (*c == 1)
    {
        cout << "\t\tError: Your Selection is Not correct." << endl;
        cout << "\t\t         Input Correct Option:" << endl
             << endl;
        *c = 0;
    }
    else
    {
        cout << "\t\t       It's Not a Octal Number" << endl
             << endl;
    }

    cout << "\t\t Input Again For Select       : 1" << endl;
    cout << "\t\t Number System Menu For Select: 2" << endl;
    cout << "\t\t Main Menu For Select         : 3" << endl;
    cout << "\t\t Exit For Select              : 4" << endl;
    cout << endl
         << "\t\t Enter Menu Number: ";
    cin >> n;
    AllNumberSystem ob;
    switch (n)
    {
    case 1:
        ob.OctalToBin();
        break;
    case 2:
        NumberSystem();
        break;
    case 3:
        main();
        break;
    case 4:
        return;
    default:
        *c = 1;
        notForOctaBin();
        break;
    }
}
void notForOctaHex()
{
    system("cls");

    output();
    if (*c == 1)
    {
        cout << "\t\tError: Your Selection is Not correct." << endl;
        cout << "\t\t         Input Correct Option:" << endl
             << endl;
        *c = 0;
    }
    else
    {
        cout << "\t\t       It's Not a Octal Number" << endl
             << endl;
    }

    cout << "\t\t Input Again For Select       : 1" << endl;
    cout << "\t\t Number System Menu For Select: 2" << endl;
    cout << "\t\t Main Menu For Select         : 3" << endl;
    cout << "\t\t Exit For Select              : 4" << endl;
    cout << endl
         << "\t\t Enter Menu Number: ";
    cin >> n;
    AllNumberSystem ob;
    switch (n)
    {
    case 1:
        ob.OctalToHex();
        break;
    case 2:
        NumberSystem();
        break;
    case 3:
        main();
        break;
    case 4:
        return;
    default:
        *c = 1;
        notForOctaHex();
        break;
    }
}

// IF Number is Not Hex Run Those functions
void notForHexDec()
{
    system("cls");

    output();
    if (*c == 1)
    {
        cout << "\t\tError: Your Selection is Not correct." << endl;
        cout << "\t\t         Input Correct Option:" << endl
             << endl;
        *c = 0;
    }
    else
    {
        cout << "\t\t       It's Not a Hexadecimal Number" << endl
             << endl;
    }

    cout << "\t\t Input Again For Select       : 1" << endl;
    cout << "\t\t Number System Menu For Select: 2" << endl;
    cout << "\t\t Main Menu For Select         : 3" << endl;
    cout << "\t\t Exit For Select              : 4" << endl;
    cout << endl
         << "\t\t Enter Menu Number: ";
    cin >> n;
    AllNumberSystem ob;
    switch (n)
    {
    case 1:
        ob.hexToDecimal();
        break;
    case 2:
        NumberSystem();
        break;
    case 3:
        main();
        break;
    case 4:
        return;
    default:
        *c = 1;
        notForHexDec();
        break;
    }
}
void notForHexBin()
{
    system("cls");

    output();
    if (*c == 1)
    {
        cout << "\t\tError: Your Selection is Not correct." << endl;
        cout << "\t\t         Input Correct Option:" << endl
             << endl;
        *c = 0;
    }
    else
    {
        cout << "\t\t       It's Not a Hexadecimal Number" << endl
             << endl;
    }

    cout << "\t\t Input Again For Select       : 1" << endl;
    cout << "\t\t Number System Menu For Select: 2" << endl;
    cout << "\t\t Main Menu For Select         : 3" << endl;
    cout << "\t\t Exit For Select              : 4" << endl;
    cout << endl
         << "\t\t Enter Menu Number: ";
    cin >> n;
    AllNumberSystem ob;
    switch (n)
    {
    case 1:
        ob.hexoBinary();
        break;
    case 2:
        NumberSystem();
        break;
    case 3:
        main();
        break;
    case 4:
        return;
    default:
        *c = 1;
        notForHexBin();
        break;
    }
}
void notForHexOct()
{
    system("cls");

    output();
    if (*c == 1)
    {
        cout << "\t\tError: Your Selection is Not correct." << endl;
        cout << "\t\t         Input Correct Option:" << endl
             << endl;
        *c = 0;
    }
    else
    {
        cout << "\t\t       It's Not a Hexadecimal Number" << endl
             << endl;
    }

    cout << "\t\t Input Again For Select       : 1" << endl;
    cout << "\t\t Number System Menu For Select: 2" << endl;
    cout << "\t\t Main Menu For Select         : 3" << endl;
    cout << "\t\t Exit For Select              : 4" << endl;
    cout << endl
         << "\t\t Enter Menu Number: ";
    cin >> n;
    AllNumberSystem ob;
    switch (n)
    {
    case 1:
        ob.hexaToOctal();
        break;
    case 2:
        NumberSystem();
        break;
    case 3:
        main();
        break;
    case 4:
        return;
    default:
        *c = 1;
        notForHexOct();
        break;
    }
}

// Sub menu for All Number System
void subMenuDecimalToBinary()
{
    // Sub Menu
    if (*c == 1)
    {
        cout << "\t\tError: Your Selection is Not correct." << endl;
        cout << "\t\t         Input Correct Option:" << endl
             << endl;
        *c = 0;
    }
    cout << "\t\t" << icon1 << " MENU" << endl;
    cout << "\t\t" << icon2 << " Main Menu For Select          : 1 " << endl;
    cout << "\t\t" << icon2 << " Numbers System Menu For Select: 2 " << endl;
    cout << "\t\t" << icon2 << " Exit For Select               : 3 " << endl;

    // Take Input For Sub menu selection
    cout << endl
         << "\t\t Enter Menu Number: ";
    cin >> n;

    // Switch Statement Sub Menu Select For Select
    switch (n)
    {
    case 1:
        system("cls");
        main();
        break;
    case 2:
        NumberSystem();
        break;
    case 3:
        return;
        break;
    default:
        cout << system("cls");
        title();
        cout << "\t\tError: Your Selection is Not correct." << endl;
        cout << "\t\t         Input Correct Option:" << endl
             << endl;
        *c = 1;
        subMenuDecimalToBinary();
    }
}

// Check Number Binary or not
bool checkBinary(string s1)
{
    bool bIsBinary = true;
    int lenB = s1.length();
    for (int i = 0; i < lenB; i++)
    {
        if (s1.at(i) != '1' && s1.at(i) != '0')
        {
            bIsBinary = false;
        }
    }
    return bIsBinary;
}

// Check Number Octal or not
bool checkOctal(string s1)
{
    bool IsOctal = true;
    int lenOct = s1.length();
    for (int i = 0; i < lenOct; i++)
    {
        if (s1.at(i) == '8' || s1.at(i) == '9' || s1.at(i) > 57)
        {
            IsOctal = false;
            break;
        }
    }
    return IsOctal;
}

// Check Number Hex or not
bool checkHex(string s)
{
    bool IsHex = true;
    int n = s.length();

    // Iterate over string
    for (int i = 0; i < n; i++)
    {
        char ch = s[i];

        // Check if the character
        // is invalid
        if ((ch < '0' || ch > '9') &&
            (ch < 'A' || ch > 'F') && (ch < 'a' || ch > 'f'))
        {
            IsHex = false;
            break;
        }
    }
    return IsHex;
}

/// Number System Menu
void NumberSystem()
{
    system("cls");
    // App Title Menu Formation
    title();

    if (*c == 1)
    {
        cout << "\t\tError: Your Selection is Not correct." << endl;
        cout << "\t\t         Input Correct Option:" << endl
             << endl;
        *c = 0;
    }

    // SubMenu For All Number System Select
    cout << "\t\t" << icon1 << " MENU" << endl;
    cout << "\t\t" << icon2 << " Decimal to Binary For Select     : 1 " << endl;
    cout << "\t\t" << icon2 << " Decimal to Octal For Select      : 2 " << endl;
    cout << "\t\t" << icon2 << " Decimal to Hexadecimal For Select: 3 " << endl;
    cout << "\t\t" << icon2 << " Binary to Decimal For Select     : 4 " << endl;
    cout << "\t\t" << icon2 << " Binary to Octal For Select       : 5 " << endl;
    cout << "\t\t" << icon2 << " Binary to Hexadecimal For Select : 6 " << endl;
    cout << "\t\t" << icon2 << " Octal to Decimal For Select      : 7 " << endl;
    cout << "\t\t" << icon2 << " Octal to Binary For Select       : 8 " << endl;
    cout << "\t\t" << icon2 << " Octal to Hexadecimal For Select  : 9 " << endl;
    cout << "\t\t" << icon2 << " Hexadecimal to Decimal For Select: 10 " << endl;
    cout << "\t\t" << icon2 << " Hexadecimal to Binary For Select : 11 " << endl;
    cout << "\t\t" << icon2 << " Hexadecimal to Octal For Select  : 12 " << endl;
    cout << "\t\t" << icon2 << " Exit For Select                  : 13 " << endl;
    cout << "\t\t" << icon2 << " Back Step For Select             : 14 " << endl;

    // Input For menu Selection
    cout << endl
         << "\t\t Enter Menu Number: ";
    cin >> n;

    // Switch Statement For Menu Selection
    AllNumberSystem ob;
    switch (n)
    {

    case 1:
        ob.DecimaltoBinary();
        break;
    case 2:
        ob.DecimaltoOctal();
        break;
    case 3:
        ob.DecimaltoHexa();
        break;
    case 4:
        ob.BinarytoDecimal();
        break;
    case 5:
        ob.BinarytoOctal();
        break;
    case 6:
        ob.BinarytoHex();
        break;
    case 7:
        ob.OctalToDec();
        break;
    case 8:
        ob.OctalToBin();
        break;
    case 9:
        ob.OctalToHex();
        break;
    case 10:
        ob.hexToDecimal();
        break;
    case 11:
        ob.hexoBinary();
        break;
    case 12:
        ob.hexaToOctal();
        break;
    case 13:
        break;
    case 14:
        main();
        break;
    default:
        *c = 1;
        NumberSystem();
        break;
    }
}
//////////////////////////////////////////////////
//////////////Number System Conversion End////////
//////////////////////////////////////////////////

//////////////////////////////////////////////////
//////////////Time System  Conversion Start///////
//////////////////////////////////////////////////
class AllTimeSystemConversion
{
public:
    void dayCoverter()
    {

        int day_in;
        system("cls");

        title();

        if (falseSelection)
        {
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl
             << endl;
        cout << "\t\t" << icon2 << " Day To Hours For Select  : 1 " << endl;
        cout << "\t\t" << icon2 << " Day To Minutes For Select: 2" << endl;
        cout << "\t\t" << icon2 << " Day To Second For Select : 3" << endl;
        cout << "\t\t" << icon2 << " Back For Select          : 4" << endl;
        cout << "\t\t" << icon2 << " Exit For Select          : 5" << endl
             << endl;
        cout << "\t\t Enter Menu Number: ";
        cin >> day_in;

        switch (day_in)
        {
        case 1:
            dayToHours();
            break;
        case 2:
            dayToMinutes();
            break;
        case 3:
            dayToSecond();
            break;
        case 4:
            TimeConversion();
            break;
        case 5:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            dayCoverter();
            break;
        }
    }

    void hoursCoverter()
    {
        int hours_in;
        system("cls");

        title();

        if (falseSelection)
        {
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl
             << endl;
        cout << "\t\t" << icon2 << " Hours To Minute For Select : 1 " << endl;
        cout << "\t\t" << icon2 << " Hours To Second For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Hours To Day For Select    : 3" << endl;
        cout << "\t\t" << icon2 << " Back For Select            : 4" << endl;
        cout << "\t\t" << icon2 << " Exit For Select            : 5" << endl
             << endl;
        cout << "\t\t Enter Menu Number: ";
        cin >> hours_in;

        switch (hours_in)
        {
        case 1:
            hourToMinute();
            break;
        case 2:
            hourToSecond();
            break;
        case 3:
            hoursToDay();
            break;
        case 4:
            TimeConversion();
            break;
        case 5:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            hoursCoverter();
            break;
        }
    }

    void minutesConverter()
    {
        int minuts_in;
        system("cls");

        title();

        if (falseSelection)
        {
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl
             << endl;
        cout << "\t\t" << icon2 << " Minutes To Day For Select    : 1 " << endl;
        cout << "\t\t" << icon2 << " Minutes to Hour For Select   : 2" << endl;
        cout << "\t\t" << icon2 << " Minutes to Second For Select : 3" << endl;
        cout << "\t\t" << icon2 << " Back For Select              : 4" << endl;
        cout << "\t\t" << icon2 << " Exit For Select              : 5" << endl
             << endl;
        cout << "\t\t Enter Menu Number: ";
        cin >> minuts_in;

        switch (minuts_in)
        {
        case 1:
            minutesToDay();
            break;
        case 2:
            minutesToHour();
            break;
        case 3:
            minutesToSecond();
            break;
        case 4:
            TimeConversion();
            break;
        case 5:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            minutesConverter();
            break;
        }
    }

    void secondConverter()
    {
        int second_in;
        system("cls");

        title();

        if (falseSelection)
        {
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl
             << endl;
        cout << "\t\t" << icon2 << " Seconds To Minute For Select: 1 " << endl;
        cout << "\t\t" << icon2 << " Seconds to Hour For Select  : 2" << endl;
        cout << "\t\t" << icon2 << " Seconds to Day For Select   : 3" << endl;
        cout << "\t\t" << icon2 << " Back For Select             : 4" << endl;
        cout << "\t\t" << icon2 << " Exit For Select             : 5" << endl
             << endl;
        cout << "\t\t Enter Menu Number: ";
        cin >> second_in;

        switch (second_in)
        {
        case 1:
            secondsToMinute();
            break;
        case 2:
            secondsToHour();
            break;
        case 3:
            secondsToDay();
            break;
        case 4:
            TimeConversion();
            break;
        case 5:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            minutesConverter();
            break;
        }
    }
};

AllTimeSystemConversion obDay;
void dayToHours()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Days: ";
    cin >> day;
    output();
    cout << "\t\t   Hours of " << day << " days is " << 24 * day << " Hours" << endl
         << endl
         << endl;
    subMenuTimeDayToHours();
}
void dayToMinutes()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Days: ";
    cin >> day;
    output();
    cout << "\t\t   Minutes of " << day << " days is " << 24 * day * 60 << " Minutes" << endl
         << endl
         << endl;
    subMenuTimeDayToMinutes();
}
void dayToSecond()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Days: ";
    cin >> day;
    output();
    cout << "\t\t   Seconds of " << day << " days is " << 24 * day * 60 * 60 << " Seconds" << endl
         << endl
         << endl;
    subMenuTimeDayToSecond();
}
void hourToMinute()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Hours: ";
    cin >> hour;
    output();
    cout << "\t\t   Minutes of " << hour << " Hours is " << hour * 60 << " Minutes" << endl
         << endl
         << endl;
    subMenuHourToMinute();
}
void hourToSecond()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Hours: ";
    cin >> hour;
    output();
    cout << "\t\t   Seconds of " << hour << " Hours is " << hour * 60 * 60 << " Seconds" << endl
         << endl
         << endl;
    subMenuHoruToSecond();
}
void hoursToDay()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Hours: ";
    cin >> hour;
    output();
    cout << "\t\t   Day of " << hour << " Hours is " << hour / 24 << " Day,  " << hour % 24 << " Hours" << endl
         << endl
         << endl;
    subMenuHoruToDay();
}
void minutesToHour()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Minute: ";
    cin >> minute;
    output();
    cout << "\t\t   Hours of " << minute << " minutes is " << minute / 60 << " Hours," << minute % 60 << " Minutes" << endl
         << endl
         << endl;
    subMenuminutesToHour();
}
void minutesToSecond()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Minute: ";
    cin >> minute;
    output();
    cout << "\t\t   Seconds of " << minute << " minutes is " << minute * 60 << " Second" << endl
         << endl
         << endl;
    subMenuminutesToSecond();
}
void minutesToDay()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Minute: ";
    cin >> minute;
    int store_minute = minute;
    day = minute / 1440;
    hour = (minute % 1440) / 60;
    minute = ((minute % 1440) % 60);
    output();
    cout << "\t   Days of " << store_minute << " minutes is " << day << " Days, " << hour << " Hours, " << minute << " Minutes" << endl
         << endl
         << endl;
    subMenuminutesTODay();
}
void secondsToMinute()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Seconds: ";
    cin >> second;
    output();
    cout << "\t   Minutes of " << second << " Seconds is " << second / 60 << " Minutes, " << second % 60 << " Seconds" << endl
         << endl
         << endl;
    subMenusecondsToMinute();
}
void secondsToHour()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Seconds: ";
    cin >> second;
    int store_second = second;
    hour = second / 3600;
    minute = (second % 3600) / 60;
    second = (second % 3600) % 60;
    output();
    cout << "\t   Hours of " << store_second << " Seconds is " << hour << " Hours, " << minute << " Minutes, " << second << " Second" << endl
         << endl
         << endl;
    subMenusecondsToHour();
}
void secondsToDay()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Seconds: ";
    cin >> second;
    int store_second = second;
    day = second / 86400;
    hour = (second % 86400) / 3600;
    minute = ((second % 86400) % 3600) / 60;
    second = ((second % 86400) % 3600) % 60;
    output();
    cout << "\t   Day of " << store_second << " Seconds is " << day << " Days, " << hour << " Hours, " << minute << " Minutes, " << second << " Second" << endl
         << endl
         << endl;
    subMenusecondsToDay();
}

// SubMenuTime
void subMenuTimeDayToHours()
{
    if (falseSelection)
    {
        system("cls");
        title();
        cout << "\t\tError: Your Selection is Not correct." << endl;
        cout << "\t\t         Input Correct Option:" << endl
             << endl;
        falseSelection = 0;
    }

    cout << "\t\t" << icon1 << " MENU" << endl;
    cout << "\t\t" << icon2 << " Input Again For Select         : 1 " << endl;
    cout << "\t\t" << icon2 << " Day Conversion Menu For Select : 2" << endl;
    cout << "\t\t" << icon2 << " Main Menu For Select           : 3" << endl;
    cout << "\t\t" << icon2 << " Exit For Select                : 4" << endl
         << endl;

    // User Input For Main Menu Selection
    cout << "\t\t Enter Menu Number: ";
    cin >> t_selector;
    AllTimeSystemConversion obTime;
    switch (t_selector)
    {
    case 1:
        dayToHours();
        break;
    case 2:
        obTime.dayCoverter();
        break;
    case 3:
        main();
        break;
    case 4:
        system("cls");
        return;
        break;
    default:
        falseSelection = 1;
        subMenuTimeDayToHours();
        break;
    }
}
void subMenuTimeDayToMinutes()
{
    if (falseSelection)
    {
        system("cls");
        title();
        cout << "\t\tError: Your Selection is Not correct." << endl;
        cout << "\t\t         Input Correct Option:" << endl
             << endl;
        falseSelection = 0;
    }

    cout << "\t\t" << icon1 << " MENU" << endl;
    cout << "\t\t" << icon2 << " Input Again For Select         : 1 " << endl;
    cout << "\t\t" << icon2 << " Day Conversion Menu For Select : 2" << endl;
    cout << "\t\t" << icon2 << " For Main Menu For Select       : 3" << endl;
    cout << "\t\t" << icon2 << " Exit For Select                : 4" << endl
         << endl;

    // User Input For Main Menu Selection
    cout << "\t\t Enter Menu Number: ";
    cin >> t_selector;
    AllTimeSystemConversion obTime;
    switch (t_selector)
    {
    case 1:
        dayToMinutes();
        break;
    case 2:
        obTime.dayCoverter();
        break;
    case 3:
        main();
        break;
    case 4:
        system("cls");
        return;
        break;
    default:
        falseSelection = 1;
        subMenuTimeDayToMinutes();
        break;
    }
}
void subMenuTimeDayToSecond()
{
    if (falseSelection)
    {
        system("cls");
        title();
        cout << "\t\tError: Your Selection is Not correct." << endl;
        cout << "\t\t         Input Correct Option:" << endl
             << endl;
        falseSelection = 0;
    }

    cout << "\t\t" << icon1 << " MENU" << endl;
    cout << "\t\t" << icon2 << " Input Again For Select         : 1 " << endl;
    cout << "\t\t" << icon2 << " Day Conversion Menu For Select : 2" << endl;
    cout << "\t\t" << icon2 << " Main Menu For Select           : 3" << endl;
    cout << "\t\t" << icon2 << " Exit For Select                : 4" << endl
         << endl;

    // User Input For Main Menu Selection
    cout << "\t\t Enter Menu Number: ";
    cin >> t_selector;
    AllTimeSystemConversion obTime;
    switch (t_selector)
    {
    case 1:
        dayToSecond();
        break;
    case 2:
        obTime.dayCoverter();
        break;
    case 3:
        main();
        break;
    case 4:
        system("cls");
        return;
        break;
    default:
        falseSelection = 1;
        subMenuTimeDayToSecond();
        break;
    }
}
void subMenuHourToMinute()
{
    if (falseSelection)
    {
        system("cls");
        title();
        cout << "\t\tError: Your Selection is Not correct." << endl;
        cout << "\t\t         Input Correct Option:" << endl
             << endl;
        falseSelection = 0;
    }

    cout << "\t\t" << icon1 << " MENU" << endl;
    cout << "\t\t" << icon2 << " Input Again For Select          : 1 " << endl;
    cout << "\t\t" << icon2 << " Hours Conversion Menu For Select: 2" << endl;
    cout << "\t\t" << icon2 << " Main Menu For Select            : 3" << endl;
    cout << "\t\t" << icon2 << " Exit For Select                 : 4" << endl
         << endl;

    // User Input For Main Menu Selection
    cout << "\t\t Enter Menu Number: ";
    cin >> t_selector;
    AllTimeSystemConversion obTime;
    switch (t_selector)
    {
    case 1:
        hourToMinute();
        break;
    case 2:
        obTime.hoursCoverter();
        break;
    case 3:
        main();
        break;
    case 4:
        system("cls");
        return;
        break;
    default:
        falseSelection = 1;
        subMenuHourToMinute();
        break;
    }
}
void subMenuHoruToSecond()
{
    if (falseSelection)
    {
        system("cls");
        title();
        cout << "\t\tError: Your Selection is Not correct." << endl;
        cout << "\t\t         Input Correct Option:" << endl
             << endl;
        falseSelection = 0;
    }

    cout << "\t\t" << icon1 << " MENU" << endl;
    cout << "\t\t" << icon2 << " Input Again For Select          : 1 " << endl;
    cout << "\t\t" << icon2 << " Hours Conversion Menu For Select: 2" << endl;
    cout << "\t\t" << icon2 << " Main Menu For Select            : 3" << endl;
    cout << "\t\t" << icon2 << " Exit For Select                 : 4" << endl
         << endl;

    // User Input For Main Menu Selection
    cout << "\t\t Enter Menu Number: ";
    cin >> t_selector;
    AllTimeSystemConversion obTime;
    switch (t_selector)
    {
    case 1:
        hourToSecond();
        break;
    case 2:
        obTime.hoursCoverter();
        break;
    case 3:
        main();
        break;
    case 4:
        system("cls");
        return;
        break;
    default:
        falseSelection = 1;
        subMenuHoruToSecond();
        break;
    }
};
void subMenuHoruToDay()
{
    if (falseSelection)
    {
        system("cls");
        title();
        cout << "\t\tError: Your Selection is Not correct." << endl;
        cout << "\t\t         Input Correct Option:" << endl
             << endl;
        falseSelection = 0;
    }

    cout << "\t\t" << icon1 << " MENU" << endl;
    cout << "\t\t" << icon2 << " Input Again For Select      : 1 " << endl;
    cout << "\t\t" << icon2 << " Hours Conversion Menu For Select: 2" << endl;
    cout << "\t\t" << icon2 << " Main Menu For Select        : 3" << endl;
    cout << "\t\t" << icon2 << " Exit For Select             : 4" << endl
         << endl;

    // User Input For Main Menu Selection
    cout << "\t\t Enter Menu Number: ";
    cin >> t_selector;
    AllTimeSystemConversion obTime;
    switch (t_selector)
    {
    case 1:
        hoursToDay();
        break;
    case 2:
        obTime.hoursCoverter();
        break;
    case 3:
        main();
        break;
    case 4:
        system("cls");
        return;
        break;
    default:
        falseSelection = 1;
        subMenuHoruToDay();
        break;
    }
}
void subMenuminutesToHour()
{
    if (falseSelection)
    {
        system("cls");
        title();
        cout << "\t\tError: Your Selection is Not correct." << endl;
        cout << "\t\t         Input Correct Option:" << endl
             << endl;
        falseSelection = 0;
    }

    cout << "\t\t" << icon1 << " MENU" << endl;
    cout << "\t\t" << icon2 << " Input Again For Select             : 1 " << endl;
    cout << "\t\t" << icon2 << " Minute Conversion Menu For Select  : 2" << endl;
    cout << "\t\t" << icon2 << " Main Menu For Select               : 3" << endl;
    cout << "\t\t" << icon2 << " Exit For Select                    : 4" << endl
         << endl;

    // User Input For Main Menu Selection
    cout << "\t\t Enter Menu Number: ";
    cin >> t_selector;
    AllTimeSystemConversion obTime;
    switch (t_selector)
    {
    case 1:
        minutesToHour();
        break;
    case 2:
        obTime.minutesConverter();
        break;
    case 3:
        main();
        break;
    case 4:
        system("cls");
        return;
        break;
    default:
        falseSelection = 1;
        subMenuminutesToHour();
        break;
    }
}
void subMenuminutesToSecond()
{
    if (falseSelection)
    {
        system("cls");
        title();
        cout << "\t\tError: Your Selection is Not correct." << endl;
        cout << "\t\t         Input Correct Option:" << endl
             << endl;
        falseSelection = 0;
    }

    cout << "\t\t" << icon1 << " MENU" << endl;
    cout << "\t\t" << icon2 << " Input Again For Select            : 1 " << endl;
    cout << "\t\t" << icon2 << " Minutes Conversion Menu For Select: 2" << endl;
    cout << "\t\t" << icon2 << " Main Menu For Select              : 3" << endl;
    cout << "\t\t" << icon2 << " Exit For Select                   : 4" << endl
         << endl;

    // User Input For Main Menu Selection
    cout << "\t\t Enter Menu Number: ";
    cin >> t_selector;
    AllTimeSystemConversion obTime;
    switch (t_selector)
    {
    case 1:
        minutesToSecond();
        break;
    case 2:
        obTime.minutesConverter();
        break;
    case 3:
        main();
        break;
    case 4:
        system("cls");
        return;
        break;
    default:
        falseSelection = 1;
        subMenuminutesToSecond();
        break;
    }
};
void subMenuminutesTODay()
{
    if (falseSelection)
    {
        system("cls");
        title();
        cout << "\t\tError: Your Selection is Not correct." << endl;
        cout << "\t\t         Input Correct Option:" << endl
             << endl;
        falseSelection = 0;
    }

    cout << "\t\t" << icon1 << " MENU" << endl;
    cout << "\t\t" << icon2 << " Input Again For Select             : 1 " << endl;
    cout << "\t\t" << icon2 << " Minutes Conversion Menu For Select : 2" << endl;
    cout << "\t\t" << icon2 << " Main Menu For Select               : 3" << endl;
    cout << "\t\t" << icon2 << " Exit For Select                    : 4" << endl
         << endl;

    // User Input For Main Menu Selection
    cout << "\t\t Enter Menu Number: ";
    cin >> t_selector;
    AllTimeSystemConversion obTime;
    switch (t_selector)
    {
    case 1:
        minutesToDay();
        break;
    case 2:
        obTime.minutesConverter();
        break;
    case 3:
        main();
        break;
    case 4:
        system("cls");
        return;
        break;
    default:
        falseSelection = 1;
        subMenuminutesTODay();
        break;
    }
};

void subMenusecondsToMinute()
{
    if (falseSelection)
    {
        system("cls");
        title();
        cout << "\t\tError: Your Selection is Not correct." << endl;
        cout << "\t\t         Input Correct Option:" << endl
             << endl;
        falseSelection = 0;
    }

    cout << "\t\t" << icon1 << " MENU" << endl;
    cout << "\t\t" << icon2 << " Input Again For Select             : 1 " << endl;
    cout << "\t\t" << icon2 << " Seconds Conversion Menu For Select : 2" << endl;
    cout << "\t\t" << icon2 << " Main Menu For Select               : 3" << endl;
    cout << "\t\t" << icon2 << " Exit For Select                    : 4" << endl
         << endl;

    // User Input For Main Menu Selection
    cout << "\t\t Enter Menu Number: ";
    cin >> t_selector;
    AllTimeSystemConversion obTime;
    switch (t_selector)
    {
    case 1:
        secondsToMinute();
        break;
    case 2:
        obTime.secondConverter();
        break;
    case 3:
        main();
        break;
    case 4:
        system("cls");
        return;
        break;
    default:
        falseSelection = 1;
        subMenusecondsToMinute();
        break;
    }
};
void subMenusecondsToHour()
{
    if (falseSelection)
    {
        system("cls");
        title();
        cout << "\t\tError: Your Selection is Not correct." << endl;
        cout << "\t\t         Input Correct Option:" << endl
             << endl;
        falseSelection = 0;
    }

    cout << "\t\t" << icon1 << " MENU" << endl;
    cout << "\t\t" << icon2 << " Input Again For Select             : 1 " << endl;
    cout << "\t\t" << icon2 << " Seconds Conversion Menu For Select : 2" << endl;
    cout << "\t\t" << icon2 << " Main Menu For Select               : 3" << endl;
    cout << "\t\t" << icon2 << " Exit For Select                    : 4" << endl
         << endl;

    // User Input For Main Menu Selection
    cout << "\t\t Enter Menu Number: ";
    cin >> t_selector;
    AllTimeSystemConversion obTime;
    switch (t_selector)
    {
    case 1:
        secondsToHour();
        break;
    case 2:
        obTime.secondConverter();
        break;
    case 3:
        main();
        break;
    case 4:
        system("cls");
        return;
        break;
    default:
        falseSelection = 1;
        subMenusecondsToHour();
        break;
    }
};
void subMenusecondsToDay()
{
    if (falseSelection)
    {
        system("cls");
        title();
        cout << "\t\tError: Your Selection is Not correct." << endl;
        cout << "\t\t         Input Correct Option:" << endl
             << endl;
        falseSelection = 0;
    }

    cout << "\t\t" << icon1 << " MENU" << endl;
    cout << "\t\t" << icon2 << " Input Again For Select            : 1 " << endl;
    cout << "\t\t" << icon2 << " Seconds Conversion Menu For Select: 2" << endl;
    cout << "\t\t" << icon2 << " Main Menu For Select              : 3" << endl;
    cout << "\t\t" << icon2 << " Exit For Select                   : 4" << endl
         << endl;

    // User Input For Main Menu Selection
    cout << "\t\t Enter Menu Number: ";
    cin >> t_selector;
    AllTimeSystemConversion obTime;
    switch (t_selector)
    {
    case 1:
        secondsToDay();
        break;
    case 2:
        obTime.secondConverter();
        break;
    case 3:
        main();
        break;
    case 4:
        system("cls");
        return;
        break;
    default:
        falseSelection = 1;
        subMenusecondsToDay();
        break;
    }
};

// Time Conversion Menu
void TimeConversion()
{
    system("cls");
    title();

    if (falseSelection)
    {
        cout << "\t\tError: Your Selection is Not correct." << endl;
        cout << "\t\t         Input Correct Option:" << endl
             << endl;
        falseSelection = 0;
    }

    cout << "\t\t" << icon1 << " MENU" << endl
         << endl;
    cout << "\t\t" << icon2 << " Day Conversion For Select   : 1 " << endl;
    cout << "\t\t" << icon2 << " Hours Conversion For Select : 2" << endl;
    cout << "\t\t" << icon2 << " Minute Conversion For Select: 3" << endl;
    cout << "\t\t" << icon2 << " Second Conversion For Select: 4" << endl;
    cout << "\t\t" << icon2 << " Main Menu For Select        : 5" << endl;
    cout << "\t\t" << icon2 << " Exit For Select             : 6" << endl
         << endl;
    // User Input For Main Menu Selection
    cout << "\t\t Enter Menu Number: ";
    cin >> t_selector;
    AllTimeSystemConversion obTime;
    switch (t_selector)
    {
    case 1:
        obTime.dayCoverter();
        break;
    case 2:
        obTime.hoursCoverter();
        break;
    case 3:
        obTime.minutesConverter();
        break;
    case 4:
        obTime.secondConverter();
        break;
    case 5:
        main();
        break;
    case 6:
        system("cls");
        return;
        break;
    default:
        falseSelection = 1;
        TimeConversion();
        break;
    }
}
//////////////////////////////////////////////////
//////////////Time System Conversion End//////////
//////////////////////////////////////////////////

//////////////////////////////////////////////////
////////////Length System Conversion Start////////
//////////////////////////////////////////////////
class LengthConversionSystem
{
public:
    void MeterCoverter()
    {
        int meter_in;
        system("cls");

        title();

        if (falseSelection)
        {
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl
             << endl;
        cout << "\t\t" << icon2 << " Meter to Kilometer For Select : 1 " << endl;
        cout << "\t\t" << icon2 << " Meter to Centimeter For Select: 2" << endl;
        cout << "\t\t" << icon2 << " Meter to foot For Select      : 3" << endl;
        cout << "\t\t" << icon2 << " Meter to inch For Select      : 4" << endl;
        cout << "\t\t" << icon2 << " Back For Select               : 5" << endl;
        cout << "\t\t" << icon2 << " Exit For Select               : 6" << endl
             << endl;
        cout << "\t\t Enter Menu Number: ";
        cin >> meter_in;

        switch (meter_in)
        {
        case 1:
            MetertoKilometer();
            break;
        case 2:
            MetertoCentimeter();
            break;
        case 3:
            Metertofoot();
            break;
        case 4:
            Metertoinch();
            break;
        case 5:
            LengthConversion();
            break;
        case 6:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            MeterCoverter();
            break;
        }
    }
    void KiloMeterCoverter()
    {
        int kmeter_in;
        system("cls");

        title();

        if (falseSelection)
        {
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl
             << endl;
        cout << "\t\t" << icon2 << " Kilometer to Meter For Select      : 1 " << endl;
        cout << "\t\t" << icon2 << " Kilometer to Centimeter For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Kilometer to foot For Select       : 3" << endl;
        cout << "\t\t" << icon2 << " Kilometer to inch For Select       : 4" << endl;
        cout << "\t\t" << icon2 << " Back For Select                    : 5" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                    : 6" << endl
             << endl;
        cout << "\t\t Enter Menu Number: ";
        cin >> kmeter_in;

        switch (kmeter_in)
        {
        case 1:
            KilometertoMeter();
            break;
        case 2:
            KilometertoCentimeter();
            break;
        case 3:
            Kilometertofoot();
            break;
        case 4:
            Kilometertoinch();
            break;
        case 5:
            LengthConversion();
            break;
        case 6:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            KiloMeterCoverter();
            break;
        }
    }
    void FootCoverter()
    {
        int feet_in;
        system("cls");

        title();

        if (falseSelection)
        {
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl
             << endl;
        cout << "\t\t" << icon2 << " Feet to Meter For Select      : 1 " << endl;
        cout << "\t\t" << icon2 << " Feet to Kilometer For Select  : 2" << endl;
        cout << "\t\t" << icon2 << " Feet to Centimeter For Select : 3" << endl;
        cout << "\t\t" << icon2 << " Feet to inch For Select       : 4" << endl;
        cout << "\t\t" << icon2 << " Back For Select               : 5" << endl;
        cout << "\t\t" << icon2 << " Exit For Select               : 6" << endl
             << endl;
        cout << "\t\t Enter Menu Number: ";
        cin >> feet_in;

        switch (feet_in)
        {
        case 1:
            FeettoMeter();
            break;
        case 2:
            FeettoKilometer();
            break;
        case 3:
            FeettoCentimeter();
            break;
        case 4:
            Feettoinch();
            break;
        case 5:
            LengthConversion();
            break;
        case 6:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            FootCoverter();
            break;
        }
    }
    void InchCoverter()
    {
        int Inch_in;
        system("cls");

        title();

        if (falseSelection)
        {
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl
             << endl;
        cout << "\t\t" << icon2 << " Inch to Meter For Select      : 1 " << endl;
        cout << "\t\t" << icon2 << " Inch to Kilometer For Select  : 2" << endl;
        cout << "\t\t" << icon2 << " Inch to Centimeter For Select : 3" << endl;
        cout << "\t\t" << icon2 << " Inch to Feet For Select       : 4" << endl;
        cout << "\t\t" << icon2 << " Back For Select               : 5" << endl;
        cout << "\t\t" << icon2 << " Exit For Select               : 6" << endl
             << endl;
        cout << "\t\t Enter Menu Number: ";
        cin >> Inch_in;

        switch (Inch_in)
        {
        case 1:
            InchToMeter();
            break;
        case 2:
            InchToKilometer();
            break;
        case 3:
            InchToCentimeter();
            break;
        case 4:
            InchTofoot();
            break;
        case 5:
            LengthConversion();
            break;
        case 6:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            InchCoverter();
            break;
        }
    }
    void CenCoverter()
    {
        int cen_in;
        system("cls");
        title();

        if (falseSelection)
        {
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl
             << endl;
        cout << "\t\t" << icon2 << " Centimeter to Meter For Select     : 1 " << endl;
        cout << "\t\t" << icon2 << " Centimeter to Kilometer For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Centimeter to Inches For Select    : 3" << endl;
        cout << "\t\t" << icon2 << " Centimeter to Feet For Select      : 4" << endl;
        cout << "\t\t" << icon2 << " Back For Select                    : 5" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                    : 6" << endl
             << endl;
        cout << "\t\t Enter Menu Number: ";
        cin >> cen_in;

        switch (cen_in)
        {
        case 1:
            CenToMeter();
            break;
        case 2:
            CenToKilometer();
            break;
        case 3:
            CenToInch();
            break;
        case 4:
            CenTofoot();
            break;
        case 5:
            LengthConversion();
            break;
        case 6:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            CenCoverter();
            break;
        }
    }
};

void MetertoKilometer()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Meter: ";
    cin >> meter;
    output();
    cout << "\t\t   Kilometer of " << meter << " meter is " << (meter / 1000) << " Kilometer" << endl
         << endl
         << endl;
    subMenuForLength(1);
}
void MetertoCentimeter()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Meter: ";
    cin >> meter;
    output();
    cout << "\t\t   Centimeter of " << meter << " meter is " << meter * 100 << " Cm" << endl
         << endl
         << endl;
    subMenuForLength(2);
};
void Metertofoot()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Meter: ";
    cin >> meter;
    output();
    cout << "\t\t   Feet of " << meter << " meter is " << (meter * 3.28084) << " Feet" << endl
         << endl
         << endl;
    subMenuForLength(3);
};
void Metertoinch()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Meter: ";
    cin >> meter;
    output();
    cout << "\t\t   Inches of " << meter << " meter is " << (meter * 39.3701) << " Inches" << endl
         << endl
         << endl;
    subMenuForLength(4);
};
void KilometertoMeter()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Kilometer: ";
    cin >> kmeter;
    output();
    cout << "\t\t   Meter of " << kmeter << " Kilometer is " << (kmeter * 1000) << " Meter" << endl
         << endl
         << endl;
    subMenuForLength(5);
};
void KilometertoCentimeter()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Kilometer: ";
    cin >> kmeter;
    output();
    cout << "\t\t   Centimeter of " << kmeter << " Kilometer is " << (kmeter * 100000) << " Centimeter" << endl
         << endl
         << endl;
    subMenuForLength(6);
};
void Kilometertofoot()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Kilometer: ";
    cin >> kmeter;
    output();
    cout << "\t\t   Feet of " << kmeter << " Kilometer is " << (kmeter * 3280.84) << " Feet" << endl
         << endl
         << endl;
    subMenuForLength(7);
};
void Kilometertoinch()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Kilometer: ";
    cin >> kmeter;
    output();
    cout << "\t\t   Inches of " << kmeter << " Kilometer is " << (kmeter * 39370.1) << " Inches" << endl
         << endl
         << endl;
    subMenuForLength(8);
};
void FeettoMeter()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Feet: ";
    cin >> foot;
    output();
    cout << "\t\t   Meter of " << foot << " Feet is " << (foot * 0.3048) << " Meter" << endl
         << endl
         << endl;
    subMenuForLength(9);
}
void FeettoKilometer()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Feet: ";
    cin >> foot;
    output();
    cout << "\t\t   kilometer of " << foot << " Feet is " << (foot * 0.0003048) << " kilometer" << endl
         << endl
         << endl;
    subMenuForLength(10);
}
void FeettoCentimeter()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Feet: ";
    cin >> foot;
    output();
    cout << "\t\t   Centimeter of " << foot << " Feet is " << (foot * 30.48) << " Centimeter" << endl
         << endl
         << endl;
    subMenuForLength(11);
}
void Feettoinch()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Feet: ";
    cin >> foot;
    output();
    cout << "\t\t   Inches of " << foot << " Feet is " << (foot * 12) << " Inches" << endl
         << endl
         << endl;
    subMenuForLength(12);
}
void InchToMeter()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Inch: ";
    cin >> inch;
    output();
    cout << "\t\t   Meter of " << inch << " Inches is " << (inch * 0.0254) << " Meter" << endl
         << endl
         << endl;
    subMenuForLength(13);
}
void InchToKilometer()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Inch: ";
    cin >> inch;
    output();
    cout << "\t\t   Kilometer of " << inch << " Inches is " << (inch * 0.0000254) << " Kilometer" << endl
         << endl
         << endl;
    subMenuForLength(14);
}
void InchToCentimeter()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Inch: ";
    cin >> inch;
    output();
    cout << "\t\t   Centimeter of " << inch << " Inches is " << (inch * 2.54) << " Centimeter" << endl
         << endl
         << endl;
    subMenuForLength(15);
}
void InchTofoot()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Inch: ";
    cin >> inch;
    output();
    cout << "\t\t   Foot of " << inch << " Inches is " << (inch * 0.0833333) << " Foot" << endl
         << endl
         << endl;
    subMenuForLength(16);
}

void CenToMeter()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Centimeter: ";
    cin >> centimeter;
    output();
    cout << "\t\t   Meter of " << centimeter << " Centimeter is " << (centimeter * 0.01) << " Meter" << endl
         << endl
         << endl;
    subMenuForLength(17);
};
void CenToKilometer()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Centimeter: ";
    cin >> centimeter;
    output();
    cout << "\t\t   Kilometer of " << centimeter << " Centimeter is " << (centimeter * 0.00001) << " Kilometer" << endl
         << endl
         << endl;
    subMenuForLength(18);
};
void CenToInch()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Centimeter: ";
    cin >> centimeter;
    output();
    cout << "\t\t   Inches of " << centimeter << " Centimeter is " << (centimeter * 0.393701) << " Inches" << endl
         << endl
         << endl;
    subMenuForLength(19);
};
void CenTofoot()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Centimeter: ";
    cin >> centimeter;
    output();
    cout << "\t\t   Foot of " << centimeter << " Centimeter is " << (centimeter * 0.0328084) << " Foot" << endl
         << endl
         << endl;
    subMenuForLength(20);
};

void subMenuForLength(int x)
{
    if (x == 1)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select            : 1 " << endl;
        cout << "\t\t" << icon2 << " Meter Conversion Menu For Select  : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select              : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                   : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        LengthConversionSystem obTime;
        switch (t_selector)
        {
        case 1:
            MetertoKilometer();
            break;
        case 2:
            obTime.MeterCoverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForLength(x);
            break;
        }
    }
    else if (x == 2)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select            : 1 " << endl;
        cout << "\t\t" << icon2 << " Meter Conversion Menu For Select  : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select              : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                   : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        LengthConversionSystem obTime;
        switch (t_selector)
        {
        case 1:
            MetertoCentimeter();
            break;
        case 2:
            obTime.MeterCoverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForLength(x);
            break;
        }
    }
    else if (x == 3)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select            : 1 " << endl;
        cout << "\t\t" << icon2 << " Meter Conversion Menu For Select  : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select              : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                   : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        LengthConversionSystem obTime;
        switch (t_selector)
        {
        case 1:
            Metertofoot();
            break;
        case 2:
            obTime.MeterCoverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForLength(x);
            break;
        }
    }
    else if (x == 4)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select            : 1 " << endl;
        cout << "\t\t" << icon2 << " Meter Conversion Menu For Select  : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select              : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                   : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        LengthConversionSystem obTime;
        switch (t_selector)
        {
        case 1:
            Metertoinch();
            break;
        case 2:
            obTime.MeterCoverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForLength(x);
            break;
        }
    }
    else if (x == 5)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select               : 1 " << endl;
        cout << "\t\t" << icon2 << " Kilometer Conversion Menu For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select                 : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                      : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        LengthConversionSystem obLen;
        switch (t_selector)
        {
        case 1:
            KilometertoMeter();
            break;
        case 2:
            obLen.KiloMeterCoverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForLength(x);
            break;
        }
    }
    else if (x == 6)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select               : 1 " << endl;
        cout << "\t\t" << icon2 << " Kilometer Conversion Menu For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select                 : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                      : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        LengthConversionSystem obLen;
        switch (t_selector)
        {
        case 1:
            KilometertoCentimeter();
            break;
        case 2:
            obLen.KiloMeterCoverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForLength(x);
            break;
        }
    }
    else if (x == 7)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select               : 1 " << endl;
        cout << "\t\t" << icon2 << " Kilometer Conversion Menu For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select                 : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                      : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        LengthConversionSystem obLen;
        switch (t_selector)
        {
        case 1:
            Kilometertofoot();
            break;
        case 2:
            obLen.KiloMeterCoverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForLength(x);
            break;
        }
    }
    else if (x == 8)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select               : 1 " << endl;
        cout << "\t\t" << icon2 << " Kilometer Conversion Menu For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select                 : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                      : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        LengthConversionSystem obLen;
        switch (t_selector)
        {
        case 1:
            Kilometertoinch();
            break;
        case 2:
            obLen.KiloMeterCoverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForLength(x);
            break;
        }
    }
    else if (x == 9)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select          : 1 " << endl;
        cout << "\t\t" << icon2 << " Feet Conversion Menu For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select            : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                 : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        LengthConversionSystem obLen;
        switch (t_selector)
        {
        case 1:
            FeettoMeter();
            break;
        case 2:
            obLen.FootCoverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForLength(x);
            break;
        }
    }
    else if (x == 10)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select              : 1 " << endl;
        cout << "\t\t" << icon2 << " Feet Conversion Menu For Select     : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select                : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                     : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        LengthConversionSystem obLen;
        switch (t_selector)
        {
        case 1:
            FeettoKilometer();
            break;
        case 2:
            obLen.FootCoverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForLength(x);
            break;
        }
    }
    else if (x == 11)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select          : 1 " << endl;
        cout << "\t\t" << icon2 << " Feet Conversion Menu For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select            : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                 : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        LengthConversionSystem obLen;
        switch (t_selector)
        {
        case 1:
            FeettoCentimeter();
            break;
        case 2:
            obLen.FootCoverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForLength(x);
            break;
        }
    }
    else if (x == 12)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select          : 1 " << endl;
        cout << "\t\t" << icon2 << " Feet Conversion Menu For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select            : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                 : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        LengthConversionSystem obLen;
        switch (t_selector)
        {
        case 1:
            Feettoinch();
            break;
        case 2:
            obLen.FootCoverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForLength(x);
            break;
        }
    }
    else if (x == 13)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select            : 1 " << endl;
        cout << "\t\t" << icon2 << " Inches Conversion Menu For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select              : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                   : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        LengthConversionSystem obLen;
        switch (t_selector)
        {
        case 1:
            InchToMeter();
            break;
        case 2:
            obLen.InchCoverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForLength(x);
            break;
        }
    }
    else if (x == 14)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select              : 1 " << endl;
        cout << "\t\t" << icon2 << " Inches Conversion Menu For Select   : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select                : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                     : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        LengthConversionSystem obLen;
        switch (t_selector)
        {
        case 1:
            InchToKilometer();
            break;
        case 2:
            obLen.InchCoverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForLength(x);
            break;
        }
    }
    else if (x == 15)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select              : 1 " << endl;
        cout << "\t\t" << icon2 << " Inches Conversion Menu For Select   : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select                : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                     : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        LengthConversionSystem obLen;
        switch (t_selector)
        {
        case 1:
            InchToCentimeter();
            break;
        case 2:
            obLen.InchCoverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForLength(x);
            break;
        }
    }
    else if (x == 16)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select              : 1 " << endl;
        cout << "\t\t" << icon2 << " Inches Conversion Menu For Select   : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select                : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                     : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        LengthConversionSystem obLen;
        switch (t_selector)
        {
        case 1:
            InchTofoot();
            break;
        case 2:
            obLen.InchCoverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForLength(x);
            break;
        }
    }
    else if (x == 17)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select                : 1 " << endl;
        cout << "\t\t" << icon2 << " Centimeter Conversion Menu For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select                  : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                       : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        LengthConversionSystem obLen;
        switch (t_selector)
        {
        case 1:
            CenToMeter();
            break;
        case 2:
            obLen.CenCoverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForLength(x);
            break;
        }
    }
    else if (x == 18)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Exit                : 1 " << endl;
        cout << "\t\t" << icon2 << " Centimeter Conversion Menu For Exit : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Exit                  : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Exit                       : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        LengthConversionSystem obLen;
        switch (t_selector)
        {
        case 1:
            CenToKilometer();
            break;
        case 2:
            obLen.CenCoverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForLength(x);
            break;
        }
    }
    else if (x == 19)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select               : 1 " << endl;
        cout << "\t\t" << icon2 << " Centimeter Conversion Menu For Select: 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select                 : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                      : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        LengthConversionSystem obLen;
        switch (t_selector)
        {
        case 1:
            CenToInch();
            break;
        case 2:
            obLen.CenCoverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForLength(x);
            break;
        }
    }
    else if (x == 20)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again  For Select                : 1 " << endl;
        cout << "\t\t" << icon2 << " Centimeter Conversion Menu  For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu  For Select                  : 3" << endl;
        cout << "\t\t" << icon2 << " Exit  For Select                       : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        LengthConversionSystem obLen;
        switch (t_selector)
        {
        case 1:
            CenTofoot();
            break;
        case 2:
            obLen.CenCoverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForLength(x);
            break;
        }
    }
}
void LengthConversion()
{
    system("cls");
    title();

    if (falseSelection)
    {
        cout << "\t\tError: Your Selection is Not correct." << endl;
        cout << "\t\t         Input Correct Option:" << endl
             << endl;
        falseSelection = 0;
    }

    cout << "\t\t" << icon1 << " MENU" << endl
         << endl;
    cout << "\t\t" << icon2 << " Meter Conversion For Select      : 1 " << endl;
    cout << "\t\t" << icon2 << " Kilometer Conversion For Select  : 2" << endl;
    cout << "\t\t" << icon2 << " Foot Conversion For Select       : 3" << endl;
    cout << "\t\t" << icon2 << " Inch Conversion For Select       : 4" << endl;
    cout << "\t\t" << icon2 << " Centimeter Conversion For Select : 5" << endl;
    cout << "\t\t" << icon2 << " Main Menu For Select             : 6" << endl;
    cout << "\t\t" << icon2 << " Exit For Select                  : 7" << endl
         << endl;
    // User Input For Main Menu Selection
    cout << "\t\t Enter Menu Number: ";
    cin >> l_selector;
    LengthConversionSystem obLength;
    switch (l_selector)
    {
    case 1:
        obLength.MeterCoverter();
        break;
    case 2:
        obLength.KiloMeterCoverter();
        break;
    case 3:
        obLength.FootCoverter();
        break;
    case 4:
        obLength.InchCoverter();
        break;
    case 5:
        obLength.CenCoverter();
        break;
    case 6:
        main();
        break;
    case 7:
        system("cls");
        return;
        break;
    default:
        falseSelection = 1;
        LengthConversion();
        break;
    }
}
//////////////////////////////////////////////////
//////////Length// System Conversion End//////////
//////////////////////////////////////////////////

//////////////////////////////////////////////////
//////////////Mass System Conversion Start////////
//////////////////////////////////////////////////
class MassConversionSystem
{
public:
    void KilogramConverter()
    {
        int kg_in;
        system("cls");

        title();

        if (falseSelection)
        {
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl
             << endl;
        cout << "\t\t" << icon2 << " Kilogram to Gram For Select : 1 " << endl;
        cout << "\t\t" << icon2 << " Kilogram to Pound For Select: 2" << endl;
        cout << "\t\t" << icon2 << " Kilogram to Ton For Select  : 3" << endl;
        cout << "\t\t" << icon2 << " Kilogram to Carat For Select: 4" << endl;
        cout << "\t\t" << icon2 << " Back For Select             : 5" << endl;
        cout << "\t\t" << icon2 << " Exit For Select             : 6" << endl
             << endl;
        cout << "\t\t Enter Menu Number: ";
        cin >> kg_in;

        switch (kg_in)
        {
        case 1:
            kgToGram();
            break;
        case 2:
            kgTopound();
            break;
        case 3:
            kgToTon();
            break;
        case 4:
            kgToCarat();
            break;
        case 5:
            MassConversion();
            break;
        case 6:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            KilogramConverter();
            break;
        }
    }
    void GramConverter()
    {
        int g_in;
        system("cls");

        title();

        if (falseSelection)
        {
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl
             << endl;
        cout << "\t\t" << icon2 << " Gram to kilogram For Select : 1" << endl;
        cout << "\t\t" << icon2 << " Gram to Pound For Select    : 2" << endl;
        cout << "\t\t" << icon2 << " Gram to Ton For Select      : 3" << endl;
        cout << "\t\t" << icon2 << " Gram to Carat For Select    : 4" << endl;
        cout << "\t\t" << icon2 << " Back For Select             : 5" << endl;
        cout << "\t\t" << icon2 << " Exit For Select             : 6" << endl
             << endl;
        cout << "\t\t Enter Menu Number: ";
        cin >> g_in;

        switch (g_in)
        {
        case 1:
            GramToKg();
            break;
        case 2:
            GramTopound();
            break;
        case 3:
            GramToTon();
            break;
        case 4:
            GramToCarat();
            break;
        case 5:
            MassConversion();
            break;
        case 6:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            GramConverter();
            break;
        }
    }
    void TonConverter()
    {
        int t_in;
        system("cls");

        title();

        if (falseSelection)
        {
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl
             << endl;
        cout << "\t\t" << icon2 << " Ton to Gram For Select     : 1" << endl;
        cout << "\t\t" << icon2 << " Ton to Kilogram For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Ton to Pound For Select    : 3" << endl;
        cout << "\t\t" << icon2 << " Ton to Carat For Select    : 4" << endl;
        cout << "\t\t" << icon2 << " Back For Select            : 5" << endl;
        cout << "\t\t" << icon2 << " Exit For Select            : 6" << endl
             << endl;
        cout << "\t\t Enter Menu Number: ";
        cin >> t_in;

        switch (t_in)
        {
        case 1:
            TonToGram();
            break;
        case 2:
            TonToKg();
            break;
        case 3:
            TonToPound();
            break;
        case 4:
            TonToCarat();
            break;
        case 5:
            MassConversion();
            break;
        case 6:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            TonConverter();
            break;
        }
    }
    void PoundConverter()
    {
        int p_in;
        system("cls");

        title();

        if (falseSelection)
        {
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl
             << endl;
        cout << "\t\t" << icon2 << " Pound to Gram For Select     : 1" << endl;
        cout << "\t\t" << icon2 << " Pound to Kilogram For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Pound to Ton For Select      : 3" << endl;
        cout << "\t\t" << icon2 << " Pound to Carat For Select    : 4" << endl;
        cout << "\t\t" << icon2 << " Back For Select              : 5" << endl;
        cout << "\t\t" << icon2 << " Exit For Select              : 6" << endl
             << endl;
        cout << "\t\t Enter Menu Number: ";
        cin >> p_in;

        switch (p_in)
        {
        case 1:
            PoundtoGram();
            break;
        case 2:
            PoundtoKg();
            break;
        case 3:
            PoundtoTon();
            break;
        case 4:
            PoundtoCarat();
            break;
        case 5:
            MassConversion();
            break;
        case 6:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            PoundConverter();
            break;
        }
    }
    void CaratConverter()
    {
        int c_in;
        system("cls");

        title();

        if (falseSelection)
        {
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl
             << endl;
        cout << "\t\t" << icon2 << " Carat to Gram For Select     : 1" << endl;
        cout << "\t\t" << icon2 << " Carat to Kilogram For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Carat to Ton For Select      : 3" << endl;
        cout << "\t\t" << icon2 << " Carat to Pound For Select    : 4" << endl;
        cout << "\t\t" << icon2 << " Back For Select              : 5" << endl;
        cout << "\t\t" << icon2 << " Exit For Select              : 6" << endl
             << endl;
        cout << "\t\t Enter Menu Number: ";
        cin >> c_in;

        switch (c_in)
        {
        case 1:
            caratToGram();
            break;
        case 2:
            caratTokg();
            break;
        case 3:
            caratToTon();
            break;
        case 4:
            caratToPound();
            break;
        case 5:
            MassConversion();
            break;
        case 6:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            CaratConverter();
            break;
        }
    }
};

void kgToGram()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Kg: ";
    cin >> kilogram;
    output();
    cout << "\t\t   Gram of " << kilogram << " Kg is " << (kilogram * 1000) << " Gram" << endl
         << endl
         << endl;
    subMenuForMass(1);
};
void kgTopound()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Kg: ";
    cin >> kilogram;
    output();
    cout << "\t\t   Pound of " << kilogram << " Kg is " << (kilogram * 2.20462) << " Pound" << endl
         << endl
         << endl;
    subMenuForMass(2);
};
void kgToTon()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Kg: ";
    cin >> kilogram;
    output();
    cout << "\t\t   Ton of " << kilogram << " Kg is " << (kilogram * 0.00110231) << " Ton" << endl
         << endl
         << endl;
    subMenuForMass(3);
};
void kgToCarat()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Kg: ";
    cin >> kilogram;
    output();
    cout << "\t\t   Carat of " << kilogram << " Kg is " << (kilogram * 5000) << " Carat" << endl
         << endl
         << endl;
    subMenuForMass(4);
};

void GramToKg()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Gram: ";
    cin >> gram;
    output();
    cout << "\t\t   Kilogram of " << gram << " Gram is " << (gram * 0.001) << " Kilogram" << endl
         << endl
         << endl;
    subMenuForMass(5);
};
void GramTopound()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Gram: ";
    cin >> gram;
    output();
    cout << "\t\t   Pound of " << gram << " Gram is " << (gram * 0.00220462) << " Pound" << endl
         << endl
         << endl;
    subMenuForMass(6);
};
void GramToTon()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Gram: ";
    cin >> gram;
    output();
    cout << "\t\t   Ton of " << gram << " Gram is " << (gram * 0.0000011023) << " Ton" << endl
         << endl
         << endl;
    subMenuForMass(7);
};
void GramToCarat()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Gram: ";
    cin >> gram;
    output();
    cout << "\t\t   Carat of " << gram << " Gram is " << (gram * 5) << " Carat" << endl
         << endl
         << endl;
    subMenuForMass(8);
};

void TonToGram()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Ton: ";
    cin >> ton;
    output();
    cout << "\t\t   Gram of " << ton << " Ton is " << (ton * 1000000) << " Gram" << endl
         << endl
         << endl;
    subMenuForMass(9);
};
void TonToKg()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Ton: ";
    cin >> ton;
    output();
    cout << "\t\t   Kilogram of " << ton << " Ton is " << (ton * 1000) << " Kilogram" << endl
         << endl
         << endl;
    subMenuForMass(10);
};
void TonToPound()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Ton: ";
    cin >> ton;
    output();
    cout << "\t\t   Pound of " << ton << " Ton is " << (ton * 2204.6226218) << " Pound" << endl
         << endl
         << endl;
    subMenuForMass(11);
};
void TonToCarat()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Ton: ";
    cin >> ton;
    output();
    cout << "\t\t   Carat of " << ton << " Ton is " << (ton * 5000000) << " Carat" << endl
         << endl
         << endl;
    subMenuForMass(12);
};

void PoundtoGram()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Pound: ";
    cin >> pound;
    output();
    cout << "\t\t   Gram of " << pound << " Pound is " << (pound * 453.59237) << " Gram" << endl
         << endl
         << endl;
    subMenuForMass(13);
};
void PoundtoKg()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Pound: ";
    cin >> pound;
    output();
    cout << "\t\t   Kilogram of " << pound << " Pound is " << (pound * 0.45359237) << " Kilogram" << endl
         << endl
         << endl;
    subMenuForMass(14);
};
void PoundtoTon()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Pound: ";
    cin >> pound;
    output();
    cout << "\t\t   Ton of " << pound << " Pound is " << (pound * 0.0004535924) << " Ton" << endl
         << endl
         << endl;
    subMenuForMass(15);
};
void PoundtoCarat()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Pound: ";
    cin >> pound;
    output();
    cout << "\t\t   Carat of " << pound << " Pound is " << (pound * 2267.96185) << " Carat" << endl
         << endl
         << endl;
    subMenuForMass(16);
};

void caratToGram()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Carat: ";
    cin >> carat;
    output();
    cout << "\t\t   Gram of " << carat << " Carat is " << (carat * 0.2) << " Gram" << endl
         << endl
         << endl;
    subMenuForMass(17);
}
void caratTokg()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Carat: ";
    cin >> carat;
    output();
    cout << "\t\t   Kilogram of " << carat << " Carat is " << (carat * 0.0002) << " Kilogram" << endl
         << endl
         << endl;
    subMenuForMass(18);
}
void caratToTon()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Carat: ";
    cin >> carat;
    output();
    cout << "\t\t   Ton of " << carat << " Carat is " << (carat * 0.0000002) << " Ton" << endl
         << endl
         << endl;
    subMenuForMass(19);
}
void caratToPound()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Carat: ";
    cin >> carat;
    output();
    cout << "\t\t   Pound of " << carat << " Carat is " << (carat * 0.0004409245) << " Pound" << endl
         << endl
         << endl;
    subMenuForMass(20);
}

void subMenuForMass(int x)
{
    if (x == 1)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Agai For Selectn        : 1 " << endl;
        cout << "\t\t" << icon2 << " Kg Conversion Men For Selectu : 2" << endl;
        cout << "\t\t" << icon2 << " Main Men For Selectu          : 3" << endl;
        cout << "\t\t" << icon2 << " Exi For Selectt               : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        MassConversionSystem obMass;
        switch (t_selector)
        {
        case 1:
            kgToGram();
            break;
        case 2:
            obMass.KilogramConverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForMass(x);
            break;
        }
    }
    else if (x == 2)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select        : 1 " << endl;
        cout << "\t\t" << icon2 << " Kg Conversion Menu For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select          : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select               : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        MassConversionSystem obMass;
        switch (t_selector)
        {
        case 1:
            kgTopound();
            break;
        case 2:
            obMass.KilogramConverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForMass(x);
            break;
        }
    }
    else if (x == 3)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select        : 1 " << endl;
        cout << "\t\t" << icon2 << " Kg Conversion Menu For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select          : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select               : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        MassConversionSystem obMass;
        switch (t_selector)
        {
        case 1:
            kgToTon();
            break;
        case 2:
            obMass.KilogramConverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForMass(x);
            break;
        }
    }
    else if (x == 4)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select        : 1 " << endl;
        cout << "\t\t" << icon2 << " Kg Conversion Menu For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select          : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select               : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        MassConversionSystem obMass;
        switch (t_selector)
        {
        case 1:
            kgToCarat();
            break;
        case 2:
            obMass.KilogramConverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForMass(x);
            break;
        }
    }
    else if (x == 5)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select          : 1 " << endl;
        cout << "\t\t" << icon2 << " Gram Conversion Menu For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select            : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                 : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        MassConversionSystem obMass;
        switch (t_selector)
        {
        case 1:
            GramToKg();
            break;
        case 2:
            obMass.GramConverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForMass(x);
            break;
        }
    }
    else if (x == 6)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select          : 1 " << endl;
        cout << "\t\t" << icon2 << " Gram Conversion Menu: 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select            : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                 : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        MassConversionSystem obMass;
        switch (t_selector)
        {
        case 1:
            GramTopound();
            break;
        case 2:
            obMass.GramConverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForMass(x);
            break;
        }
    }
    else if (x == 7)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select          : 1 " << endl;
        cout << "\t\t" << icon2 << " Gram Conversion Menu For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select            : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                 : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        MassConversionSystem obMass;
        switch (t_selector)
        {
        case 1:
            GramToTon();
            break;
        case 2:
            obMass.GramConverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForMass(x);
            break;
        }
    }
    else if (x == 8)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select          : 1 " << endl;
        cout << "\t\t" << icon2 << " Gram Conversion Menu For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select            : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                 : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        MassConversionSystem obMass;
        switch (t_selector)
        {
        case 1:
            GramToCarat();
            break;
        case 2:
            obMass.GramConverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForMass(x);
            break;
        }
    }
    else if (x == 9)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select         : 1 " << endl;
        cout << "\t\t" << icon2 << " Ton Conversion Menu For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select           : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        MassConversionSystem obMass;
        switch (t_selector)
        {
        case 1:
            TonToGram();
            break;
        case 2:
            obMass.TonConverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForMass(x);
            break;
        }
    }
    else if (x == 10)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select         : 1 " << endl;
        cout << "\t\t" << icon2 << " Ton Conversion Menu For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select           : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        MassConversionSystem obMass;
        switch (t_selector)
        {
        case 1:
            TonToKg();
            break;
        case 2:
            obMass.TonConverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForMass(x);
            break;
        }
    }
    else if (x == 11)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select         : 1 " << endl;
        cout << "\t\t" << icon2 << " Ton Conversion Menu For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select           : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        MassConversionSystem obMass;
        switch (t_selector)
        {
        case 1:
            TonToPound();
            break;
        case 2:
            obMass.TonConverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForMass(x);
            break;
        }
    }
    else if (x == 12)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select         : 1 " << endl;
        cout << "\t\t" << icon2 << " Ton Conversion Menu For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select           : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        MassConversionSystem obMass;
        switch (t_selector)
        {
        case 1:
            TonToCarat();
            break;
        case 2:
            obMass.TonConverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForMass(x);
            break;
        }
    }
    else if (x == 13)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select           : 1 " << endl;
        cout << "\t\t" << icon2 << " Pound Conversion Menu For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select             : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                  : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        MassConversionSystem obMass;
        switch (t_selector)
        {
        case 1:
            PoundtoGram();
            break;
        case 2:
            obMass.PoundConverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForMass(x);
            break;
        }
    }
    else if (x == 14)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select           : 1 " << endl;
        cout << "\t\t" << icon2 << " Pound Conversion Menu For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select             : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                  : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        MassConversionSystem obMass;
        switch (t_selector)
        {
        case 1:
            PoundtoKg();
            break;
        case 2:
            obMass.PoundConverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForMass(x);
            break;
        }
    }
    else if (x == 15)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select           : 1 " << endl;
        cout << "\t\t" << icon2 << " Pound Conversion Menu For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select             : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                  : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        MassConversionSystem obMass;
        switch (t_selector)
        {
        case 1:
            PoundtoTon();
            break;
        case 2:
            obMass.PoundConverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForMass(x);
            break;
        }
    }
    else if (x == 16)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select           : 1 " << endl;
        cout << "\t\t" << icon2 << " Pound Conversion Menu For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select             : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                  : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        MassConversionSystem obMass;
        switch (t_selector)
        {
        case 1:
            PoundtoCarat();
            break;
        case 2:
            obMass.PoundConverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForMass(x);
            break;
        }
    }
    else if (x == 17)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select           : 1 " << endl;
        cout << "\t\t" << icon2 << " Carat Conversion Menu For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select             : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                  : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        MassConversionSystem obMass;
        switch (t_selector)
        {
        case 1:
            caratToGram();
            break;
        case 2:
            obMass.CaratConverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForMass(x);
            break;
        }
    }
    else if (x == 18)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select           : 1 " << endl;
        cout << "\t\t" << icon2 << " Carat Conversion Menu For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select             : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                  : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        MassConversionSystem obMass;
        switch (t_selector)
        {
        case 1:
            caratTokg();
            break;
        case 2:
            obMass.CaratConverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForMass(x);
            break;
        }
    }
    else if (x == 19)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select           : 1 " << endl;
        cout << "\t\t" << icon2 << " Carat Conversion Menu For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select             : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                  : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        MassConversionSystem obMass;
        switch (t_selector)
        {
        case 1:
            caratToTon();
            break;
        case 2:
            obMass.CaratConverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForMass(x);
            break;
        }
    }
    else if (x == 20)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select           : 1 " << endl;
        cout << "\t\t" << icon2 << " Carat Conversion Menu For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select             : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                  : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        MassConversionSystem obMass;
        switch (t_selector)
        {
        case 1:
            caratToPound();
            break;
        case 2:
            obMass.CaratConverter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForMass(x);
            break;
        }
    }
}
void MassConversion()
{
    system("cls");
    title();

    if (falseSelection)
    {
        cout << "\t\tError: Your Selection is Not correct." << endl;
        cout << "\t\t         Input Correct Option:" << endl
             << endl;
        falseSelection = 0;
    }
    cout << "\t\t" << icon1 << " MENU" << endl
         << endl;
    cout << "\t\t" << icon2 << " Kilogram Conversion For Select : 1 " << endl;
    cout << "\t\t" << icon2 << " Gram Conversion For Select     : 2" << endl;
    cout << "\t\t" << icon2 << " Ton Conversion For Select      : 3" << endl;
    cout << "\t\t" << icon2 << " Pound Conversion For Select    : 4" << endl;
    cout << "\t\t" << icon2 << " Carat Conversion For Select    : 5" << endl;
    cout << "\t\t" << icon2 << " Main Menu For Select           : 6" << endl;
    cout << "\t\t" << icon2 << " Exit For Select                : 7" << endl
         << endl;
    // User Input For Main Menu Selection
    cout << "\t\t Enter Menu Number: ";
    cin >> m_selector;
    MassConversionSystem obMass;
    switch (m_selector)
    {
    case 1:
        obMass.KilogramConverter();
        break;
    case 2:
        obMass.GramConverter();
        break;
    case 3:
        obMass.TonConverter();
        break;
    case 4:
        obMass.PoundConverter();
        break;
    case 5:
        obMass.CaratConverter();
        break;
    case 6:
        main();
        break;
    case 7:
        system("cls");
        return;
        break;
    default:
        falseSelection = 1;
        MassConversion();
        break;
    }
}

//////////////////////////////////////////////////
//////////////Mass System Conversion End//////////
//////////////////////////////////////////////////

//////////////////////////////////////////////////
////////Temperature System Conversion Start////////
//////////////////////////////////////////////////
class TempConversionSystem
{
public:
    void celciusConveter()
    {
        int ce_in;
        system("cls");

        title();

        if (falseSelection)
        {
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl
             << endl;
        cout << "\t\t" << icon2 << " Celcius to Fahrenheit For Select : 1 " << endl;
        cout << "\t\t" << icon2 << " Celcius to Kelvin For Select     : 2" << endl;
        cout << "\t\t" << icon2 << " Back For Select                  : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                  : 4" << endl
             << endl;
        cout << "\t\t Enter Menu Number: ";
        cin >> ce_in;

        switch (ce_in)
        {
        case 1:
            CeFar();
            break;
        case 2:
            CeKel();
            break;
        case 3:
            TempConversion();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            celciusConveter();
            break;
        }
    }
    void fareheitConveter()
    {
        int fa_in;
        system("cls");

        title();

        if (falseSelection)
        {
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl
             << endl;
        cout << "\t\t" << icon2 << " Fahrenheit to Celsius For Select : 1 " << endl;
        cout << "\t\t" << icon2 << " Fahrenheit to Kelvin For Select  : 2" << endl;
        cout << "\t\t" << icon2 << " Back For Select                  : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                  : 4" << endl
             << endl;
        cout << "\t\t Enter Menu Number: ";
        cin >> fa_in;

        switch (fa_in)
        {
        case 1:
            FarCel();
            break;
        case 2:
            FarKel();
            break;
        case 3:
            TempConversion();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            fareheitConveter();
            break;
        }
    }
    void kelvinConveter()
    {
        int ke_in;
        system("cls");

        title();

        if (falseSelection)
        {
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl
             << endl;
        cout << "\t\t" << icon2 << " Kelvin to Celsius For Select    : 1 " << endl;
        cout << "\t\t" << icon2 << " Kelvin to Fahrenheit For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Back For Select                 : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                 : 4" << endl
             << endl;
        cout << "\t\t Enter Menu Number: ";
        cin >> ke_in;

        switch (ke_in)
        {
        case 1:
            KelToCel();
            break;
        case 2:
            KelToFar();
            break;
        case 3:
            TempConversion();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            kelvinConveter();
            break;
        }
    }
};

void CeFar()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Celsius: ";
    cin >> celcius;
    output();
    cout << "\t\t   Fahrenheit of " << celcius << " Celsius is " << (celcius * 9 / 5) + 32 << " Fahrenheit" << endl
         << endl
         << endl;
    subMenuForTemp(1);
}
void CeKel()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Celsius: ";
    cin >> celcius;
    output();
    cout << "\t\t   Kelvin of " << celcius << " Celsius is " << (celcius + 273.15) << " Kelvin" << endl
         << endl
         << endl;
    subMenuForTemp(2);
}
void FarCel()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Fahrenheit: ";
    cin >> fahrenheit;
    output();
    cout << "\t\t   Celsius of " << fahrenheit << " Fahrenheit is " << ((fahrenheit - 32) * 5) / 9 << " Celsius" << endl
         << endl
         << endl;
    subMenuForTemp(3);
}
void FarKel()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Fahrenheit: ";
    cin >> fahrenheit;
    output();
    cout << "\t\t   Kelvin of " << fahrenheit << " Fahrenheit is " << (((fahrenheit - 32) * 5) / 9) + 273.15 << " Kelvin" << endl
         << endl
         << endl;
    subMenuForTemp(4);
}
void KelToCel()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Kelvin: ";
    cin >> kelvin;
    output();
    cout << "\t\t   Celsius of " << kelvin << " Kelvin is " << (kelvin - 273.15) << " Celsius" << endl
         << endl
         << endl;
    subMenuForTemp(5);
}
void KelToFar()
{
    system("cls");
    title();
    cout << endl
         << "   \t\t Enter Your Kelvin: ";
    cin >> kelvin;
    output();
    cout << "\t\t   Fahrenheit of " << kelvin << " Kelvin is " << (((kelvin - 273.15) * 9) / 5) + 32 << " Fahrenheit" << endl
         << endl
         << endl;
    subMenuForTemp(6);
}

void subMenuForTemp(int x)
{
    if (x == 1)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select             : 1 " << endl;
        cout << "\t\t" << icon2 << " Celsius Conversion Menu For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select               : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                    : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        TempConversionSystem obTemp;
        switch (t_selector)
        {
        case 1:
            CeFar();
            break;
        case 2:
            obTemp.celciusConveter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForTemp(x);
            break;
        }
    }
    else if (x == 2)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select             : 1 " << endl;
        cout << "\t\t" << icon2 << " Celsius Conversion Menu For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select               : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                    : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        TempConversionSystem obTemp;
        switch (t_selector)
        {
        case 1:
            CeKel();
            break;
        case 2:
            obTemp.celciusConveter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForTemp(x);
            break;
        }
    }
    else if (x == 3)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select                : 1 " << endl;
        cout << "\t\t" << icon2 << " Fahrenheit Conversion Menu For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select                  : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                       : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        TempConversionSystem obTemp;
        switch (t_selector)
        {
        case 1:
            FarCel();
            break;
        case 2:
            obTemp.fareheitConveter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForTemp(x);
            break;
        }
    }
    else if (x == 4)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select                : 1 " << endl;
        cout << "\t\t" << icon2 << " Fahrenheit Conversion Menu For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select                  : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                       : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        TempConversionSystem obTemp;
        switch (t_selector)
        {
        case 1:
            FarKel();
            break;
        case 2:
            obTemp.fareheitConveter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForTemp(x);
            break;
        }
    }
    else if (x == 5)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select            : 1 " << endl;
        cout << "\t\t" << icon2 << " Kelvin Conversion Menu For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select              : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                   : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        TempConversionSystem obTemp;
        switch (t_selector)
        {
        case 1:
            KelToCel();
            break;
        case 2:
            obTemp.kelvinConveter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForTemp(x);
            break;
        }
    }
    else if (x == 6)
    {
        if (falseSelection)
        {
            system("cls");
            title();
            cout << "\t\tError: Your Selection is Not correct." << endl;
            cout << "\t\t         Input Correct Option:" << endl
                 << endl;
            falseSelection = 0;
        }

        cout << "\t\t" << icon1 << " MENU" << endl;
        cout << "\t\t" << icon2 << " Input Again For Select            : 1 " << endl;
        cout << "\t\t" << icon2 << " Kelvin Conversion Menu For Select : 2" << endl;
        cout << "\t\t" << icon2 << " Main Menu For Select              : 3" << endl;
        cout << "\t\t" << icon2 << " Exit For Select                   : 4" << endl
             << endl;

        // User Input For Main Menu Selection
        cout << "\t\t Enter Menu Number: ";
        cin >> t_selector;
        TempConversionSystem obTemp;
        switch (t_selector)
        {
        case 1:
            KelToFar();
            break;
        case 2:
            obTemp.kelvinConveter();
            break;
        case 3:
            main();
            break;
        case 4:
            system("cls");
            return;
            break;
        default:
            falseSelection = 1;
            subMenuForTemp(x);
            break;
        }
    }
}

void TempConversion()
{
    system("cls");
    title();

    if (falseSelection)
    {
        cout << "\t\tError: Your Selection is Not correct." << endl;
        cout << "\t\t         Input Correct Option:" << endl
             << endl;
        falseSelection = 0;
    }
    cout << "\t\t" << icon1 << " MENU" << endl
         << endl;
    cout << "\t\t" << icon2 << " Celsius Conversion For Select    : 1 " << endl;
    cout << "\t\t" << icon2 << " Fahrenheit Conversion For Select : 2" << endl;
    cout << "\t\t" << icon2 << " Kelvin Conversion For Select     : 3" << endl;
    cout << "\t\t" << icon2 << " Main Menu For Select             : 4" << endl;
    cout << "\t\t" << icon2 << " Exit For Select                  : 5" << endl
         << endl;
    // User Input For Main Menu Selection
    cout << "\t\t Enter Menu Number: ";
    cin >> tem_selector;
    TempConversionSystem obTemp;
    switch (tem_selector)
    {
    case 1:
        obTemp.celciusConveter();
        break;
    case 2:
        obTemp.fareheitConveter();
        break;
    case 3:
        obTemp.kelvinConveter();
        break;
    case 4:
        main();
        break;
    case 5:
        system("cls");
        return;
        break;
    default:
        falseSelection = 1;
        TempConversion();
        break;
    }
}

//////////////////////////////////////////////////
////////Temperature System Conversion End//////////
//////////////////////////////////////////////////

//////////////////////////////////////////////////
/////////////////LogIn Start//////////////////////
//////////////////////////////////////////////////

// Function to check if a given username already exists in the user database
void selectLoginOption();
bool usernameExists(string username)
{
    ifstream inFile("users.txt");
    string line;
    while (getline(inFile, line))
    {
        if (line.find(username) != string::npos)
        {
            return true;
        }
    }
    return false;
}

// Function to register a new user
void registerUser()
{
    system("cls");
    cout << "\n\n\t\t\t*=*=*=*=*=*=*=*=*=*=*=*=*" << endl;
    cout << "\t\t\t*=*=*= REGISTRATION =*=*=" << endl;
    cout << "\t\t\t*=*=*=*=*=*=*=*=*=*=*=*=*\n"
         << endl;
    string username, name, id, password, repassword;

    cout << "\t\t\tEnter a username : ";
    cin >> username;
    if (usernameExists(username))
    {
        MessageBox(GetActiveWindow(), "Username already exists. Please choose a different username.", "ALERT", MB_OK);
        registerUser();
        return;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "\t\t\tEnter your name  : ";
    getline(cin, name);
    cout << "\t\t\tEnter your ID    : ";
    cin >> id;
    cout << "\t\t\tEnter a password : ";
    char c;
    // read characters until Enter key is pressed
    while ((c = getch()) != '\r')
    {
        if (c == '\b')
        { // handle backspace
            if (!password.empty())
            {
                password.pop_back();
                cout << "\b \b"; // erase the asterisk and move the cursor back
            }
        }
        else
        {
            password += c;
            cout << '*';
        }
    }

    cout << "\n\t\t\tConfirm password : ";
    while ((c = getch()) != '\r')
    {
        if (c == '\b')
        { // handle backspace
            if (!repassword.empty())
            {
                repassword.pop_back();
                cout << "\b \b"; // erase the asterisk and move the cursor back
            }
        }
        else
        {
            repassword += c;
            cout << '*';
        }
    }

    while (password != repassword)
    {
        repassword.clear();
        MessageBox(GetActiveWindow(), "Password Not Match", "Alert", MB_OK);
        cout << "\n\t\t\tConfirm password : ";
        while ((c = getch()) != '\r')
        {
            if (c == '\b')
            { // handle backspace
                if (!repassword.empty())
                {
                    repassword.pop_back();
                    cout << "\b \b"; // erase the asterisk and move the cursor back
                }
            }
            else
            {
                repassword += c;
                cout << '*';
            }
        }
    }

    ofstream outFile("users.txt", ios::app);
    outFile << username << " " << name << " " << id << " " << password << endl;
    outFile.close();
    MessageBox(GetActiveWindow(), "Registration successful!", "Successful", MB_OK);
    selectLoginOption();
}

// Function to authenticate a user based on their username and password
bool authenticateUser(string username, string password)
{
    ifstream inFile("users.txt");
    string line;
    while (getline(inFile, line))
    {
        if (line.find(username) != string::npos && line.find(password) != string::npos)
        {
            return true;
        }
    }
    return false;
}

// Function to handle the login process
void loginUser()
{
    system("cls");
    cout << "\n\n\t\t\t*=*=*=*=*=*=*=*=*=*=*=*=**" << endl;
    cout << "\t\t\t*=*=*=*=  LOG IN  =*=*=*=*" << endl;
    cout << "\t\t\t*=*=*=*=*=*=*=*=*=*=*=*=**" << endl;
    cout << endl;

    string username, password;
    cout << "\t\t\tEnter your username: ";
    cin >> username;
    cout << "\t\t\tEnter your password: ";
    char c;
    while ((c = getch()) != '\r')
    {
        if (c == '\b')
        { // handle backspace
            if (!password.empty())
            {
                password.pop_back();
                cout << "\b \b"; // erase the asterisk and move the cursor back
            }
        }
        else
        {
            password += c;
            cout << '*';
        }
    }

    if (authenticateUser(username, password))
    {
        MessageBox(GetActiveWindow(), "Login successful!", "Successful", MB_OK);
    }
    else
    {
        MessageBox(GetActiveWindow(), "Invalid username or password. Please try again.", "Alert", MB_OK);
        selectLoginOption();
    }
}

void selectLoginOption()
{
    system("cls");
    title();
    cout << "\t\t"
         << "\t    Choose an option\n"
         << endl;
    cout << "\t\t\t" << icon1 << " MENU" << endl;
    cout << "\t\t\t" << icon2 << " Register For Select  : 1 " << endl;
    cout << "\t\t\t" << icon2 << " Login For Select     : 2" << endl;
    cout << "\t\t\t" << icon2 << " Main Menu For Select : 3" << endl;
    cout << "\t\t\t" << icon2 << " Quit For Select      : 4" << endl;
    int choice;
    cout << "\n\t\t\tInput Your Option: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        registerUser();
        break;
    case 2:
        loginUser();
        break;
    case 3:
        main();
        break;
    case 4:
        system("cls");
        exit(0);
    default:
        MessageBox(GetActiveWindow(), "Invalid choice. Please try again.", "Alert", MB_OK);
        selectLoginOption();
    }
}
//////////////////////////////////////////////////
///////////////////LogIn End//////////////////////
//////////////////////////////////////////////////
// Output Formation Function
void output()
{
    cout << endl;
    system("cls");
    cout << "\n\n\t\t\t*=*=*=*=*=*=*=*=*=*=*" << endl;
    cout << "\t\t\t*=*=*=* Output *=*=**" << endl;
    cout << "\t\t\t*=*=*=*=*=*=*=*=*=*=*" << endl
         << endl;
}
// App Title Formation Function
void title()
{

    cout << "\n\n\t\t\t*=*=*=*=*=*=*=*=*=*=*=*=*" << endl;
    cout << "\t\t\t* UNIT CONVERTER SYSTEM *" << endl;
    cout << "\t\t\t*=*=*=*=*=*=*=*=*=*=*=*=*" << endl;
    cout << endl;
}

/// Main function///
int main()
{

    system("cls");

    system("Color F0");
    title();

    // Formation For Main menu select title
    cout << "\t\t   ----------------------------------" << endl;
    cout << "\t\t   Please Select Your Converter Option" << endl;
    cout << "\t\t   ----------------------------------" << endl;

    cout << endl;
    cout << endl;

    if (falseSelection)
    {
        cout << "\t\tError: Your Selection is Not correct." << endl;
        cout << "\t\t         Input Correct Option:" << endl
             << endl;
        falseSelection = 0;
    }
    // Main Menu Option
    cout << "\t\t" << icon1 << " MENU" << endl
         << endl;
    cout << "\t\t" << icon2 << " Number Conversion For Select      : 1 " << endl;
    cout << "\t\t" << icon2 << " Time Conversion For Select        : 2" << endl;
    cout << "\t\t" << icon2 << " Length Conversion For Select      : 3" << endl;
    cout << "\t\t" << icon2 << " Mass Conversion For Select        : 4" << endl;
    cout << "\t\t" << icon2 << " Temperature Conversion For Select : 5" << endl;
    cout << "\t\t" << icon2 << " Exit For Select                   : 6" << endl;
    cout << endl;

    // User Input For Main Menu Selection
    cout << "\t\t Enter Menu Number: ";
    cin >> n;

    // Id Stored
    if (chek_user && n < 6 && n > 0)
    {
        selectLoginOption();
        chek_user = 0;
    }

    // Switch Statement for main Menu Selection
    switch (n)
    {
    case 1:
        NumberSystem();
        break;
    case 2:
        TimeConversion();
        break;
    case 3:
        LengthConversion();
        break;
    case 4:
        MassConversion();
        break;
    case 5:
        TempConversion();
        break;
    case 6:
        system("cls");
        break;
    default:
        falseSelection = 1;
        main();
    }
}
