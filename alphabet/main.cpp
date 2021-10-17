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
  s[0] +=  "   ////// ";
  s[1] +=  " ||       ";
  s[2] +=  " ||       ";
  s[3] +=  " ||       ";
  s[4] +=  " ||       ";
  s[5] +=  "   \\\\\\\\\\\\ ";
}

void d(array<string, 6> &s)
{
  s[0] += "|======\\\\  ";
  s[1] += "|       || ";
  s[2] += "|       || ";
  s[3] += "|       || ";
  s[4] += "|       || ";
  s[5] += "|------//  ";
}

void e(array<string, 6> &s)
{
   s[0] += "||----- ";
   s[1] += "||      ";
   s[2] += "||___   ";
   s[3] += "||      ";
   s[4] += "||      ";
   s[5] += "||_____ ";
}

void f(array<string, 6> &s)
{
    s[0] += " ||----- ";
    s[1] += " ||      ";
    s[2] += " ||_____ ";
    s[3] += " ||      ";
    s[4] += " ||      ";
    s[5] += " ||      ";
}

void g(array<string, 6> &s )
{
  s[0] +="    ===   ";
  s[1] +="  //      " ;
  s[2] +=" ||       ";
  s[3] +=" ||   === ";
  s[4] +="  \\\\   // ";
  s[5] +="    ===   ";
}

void h(array<string, 6> &s)
{
    s[0] += " ||     | ";
    s[1] += " ||     | ";
    s[2] += " ||_____| ";
    s[3] += " ||-----| ";
    s[4] += " ||     | ";
    s[5] += " ||     | ";
}

void i(array < string, 6> &s)
{
    s[0] += "  ======  ";
    s[1] += "    ||    ";
    s[2] += "    ||    ";
    s[3] += "    ||    ";
    s[4] += "    ||    ";
    s[5] += "  ======  ";
}

void j(array<string, 6> &s)
{
    s[0] += "_______ ";
    s[1] += "     || ";
    s[2] += "     || ";
    s[3] += "     || ";
    s[4] += "     // ";
    s[5] += " |__//  ";
}

void k(array<string, 6> &s )
{
  s[0] +=" ||  // ";
  s[1] +=" || //  ";
  s[2] +=" ||//   ";
  s[3] +=" ||\\\\   ";
  s[4] +=" || \\\\  ";
  s[5] +=" ||  \\\\ ";
}

void l(array<string, 6> &s)
{
    s[0] += " ||      ";
    s[1] += " ||      ";
    s[2] += " ||      ";
    s[3] += " ||      ";
    s[4] += " ||      ";
    s[5] += " \\\\____//";
}

void m(array<string, 6> &s)
{
    s[0] += " ||\\     /|| ";
    s[1] += " || \\   / || ";
    s[2] += " ||  \\ /  || ";
    s[3] += " ||       || ";
    s[4] += " ||       || ";
    s[5] += " ||       || ";
}

void n(array<string, 6> &s)
{
    s[0] += " |\\\\     | ";
    s[1] += " | \\\\    | ";
    s[2] += " |  \\\\   | ";
    s[3] += " |   \\\\  | ";
    s[4] += " |    \\\\ | ";
    s[5] += " |     \\\\| ";
}

void o(array<string, 6> &s )
{
  s[0] +="   ====   ";
  s[1] +=" ||    || ";
  s[2] +=" ||    || ";
  s[3] +=" ||    || ";
  s[4] +=" ||    || ";
  s[5] +="   ====   ";
}

void p(array<string, 6 > &s)
{
    s[0] += " ||===\\\\";
    s[1] += " ||   ||";
    s[2] += " ||___||";
    s[3] += " ||----/";
    s[4] += " ||     ";
    s[5] += " ||     ";
}

void q(array < string, 6> &s)
{
    s[0] += "  _____  ";
    s[1] += " ||   || ";
    s[2] += " ||   || ";
    s[3] += " ||   || ";
    s[4] += " ||   || ";
    s[5] += "  ----\\\\ ";
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

void s(array<string, 6> &s )
{
  s[0] += " //---\\ ";
  s[1] += " ||     ";
  s[2] += "  \\\\    ";
  s[3] += "   \\\\   ";
  s[4] += "    \\\\  ";
  s[5] += " \\___// ";
}

void t(array<string, 6> &s)
{
    s[0] += "==========";
    s[1] += "    ||    ";
    s[2] += "    ||    ";
    s[3] += "    ||    ";
    s[4] += "    ||    ";
    s[5] += "    ||    ";
}

void u(array < string, 6> &s)
{
    s[0] += " ||     || ";
    s[1] += " ||     || ";
    s[2] += " ||     || ";
    s[3] += " ||     || ";
    s[4] += " ||     || ";
    s[5] += "  \\_____/  ";
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

void w(array<string, 6> &s )
{
  s[0] +=" \\                    // ";
  s[1] +="  \\        //\        //  ";
  s[2] +="   \\      // \\      //   ";
  s[3] +="    \\    //   \\    //    ";
  s[4] +="     \\  //     \\  //     ";
  s[5] +="      \\//       \\//      ";
}

void x(array<string, 6> &s )
{
  s[0] +="  \\\\    // ";
  s[1] +="   \\\\  //  ";
  s[2] +="    \\\\//   ";
  s[3] +="    //\\\\   ";
  s[4] +="   //  \\\\  ";
  s[5] +="  //    \\\\ ";
}

void y(array < string, 6> &s)
{
    s[0] += " \\\\    // ";
    s[1] += "  \\\\  //  ";
    s[2] += "   \\\\//   ";
    s[3] += "    ||    ";
    s[4] += "    ||    ";
    s[5] += "    ||    ";
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
    f(screen);
    i(screen);
    n(screen);
    i(screen);
    s(screen);
    h(screen);
    e(screen);
    d(screen);
    for (int i=0; i<6; i++)
       cout << screen[i] << endl;
    return 0;
}
