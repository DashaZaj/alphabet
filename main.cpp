#include <iostream>
#include <array>

using namespace std;

void v(array<string, 6> &s)
{
    s[0] += "\\          //";
    s[1] += " \\        // ";
    s[2] += "  \\      //  ";
    s[3] += "   \\    //   ";
    s[4] += "    \\  //    ";
    s[5] += "     \\//     ";
}

void z(array<string, 6> &s)
{
    s[0] += "______";
    s[1] += "    //";
    s[2] += "   // ";
    s[3] += "  //  ";
    s[4] += " //   ";
    s[5] += "______";
}

void r(array<string, 6> &s)
{
    s[0] += "|==\\  ";
    s[1] += "|   | ";
    s[2] += "|__// ";
    s[3] += "|\\    ";
    s[4] += "| \\   ";
    s[5] += "|  \\  ";
}

int main()
{
    array<string, 6> screen;
    z(screen);
    r(screen);
    v(screen);
    for (int i=0; i<6; i++)
        cout << screen[i] << endl;

    return 0;
}
