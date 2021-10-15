#include <iostream>
#include <array>

using namespace std;

void a(array<string, 6> &s)
{
s[0] += "      //\\\\      ";
s[1] += "     //  \\\\     ";
s[2] += "    //    \\\\    ";
s[3] += "   //------\\\\   ";
s[4] += "  //        \\\\  ";
s[5] += " //          \\\\ ";
}

void b(array<string, 6> &s)
{
    s[0] += "||====\\ ";
    s[1] += "||     |";
    s[2] += "||___ //";
    s[3] += "||    \\ ";
    s[4] += "||     |";
    s[5] += "||====//";
}

void c(array<string, 6> &s)
{
  s[0] +=  "   //////    ";
  s[1] +=  " ||          ";
  s[2] +=  " ||          ";
  s[3] +=  " ||          ";
  s[4] +=  " ||          ";
  s[5] +=  "   \\\\\\\\\\\\    ";
}

void D(array<string, 6> &s)
{
  s[0] += "|======\\\\  ";
  s[1] += "|       || ";
  s[2] += "|       || ";
  s[3] += "|       || ";
  s[4] += "|       || ";
  s[5] += "|------//  ";
}

void H(array<string, 6> &s)
{
    s[0] += " ||     | ";
    s[1] += " ||     | ";
    s[2] += " ||_____| ";
    s[3] += " ||-----| ";
    s[4] += " ||     | ";
    s[5] += " ||     | ";
}

void r(array<string, 6> &s)
{
    s[0] += " ||===\\\\ ";
    s[1] += " ||   || ";
    s[2] += " ||___// ";
    s[3] += " ||\\\\    ";
    s[4] += " || \\\\   ";
    s[5] += " ||  \\\\  ";
}

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
    s[0] += " ______ ";
    s[1] += "     // ";
    s[2] += "    //  ";
    s[3] += "   //   ";
    s[4] += "  //    ";
    s[5] += " ______ ";
}

int main()

{
    array<string, 6> screen;
    a(screen);
    b(screen);
    c(screen);
    D(screen);
    H(screen);
    r(screen);
    v(screen);
    z(screen);
    for (int i=0; i<6; i++)
        cout << screen[i] << endl;
    return 0;
}
