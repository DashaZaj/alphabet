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
   s[0] += " ______ ";
   s[1] += "||      ";
   s[2] += "||      ";
   s[3] += "||___   ";
   s[4] += "||      ";
   s[5] += "||_____ ";
}

void f(array<string, 6> &s)
{
    s[0] += " ||_____ ";
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
    s[0] += "     00 ";
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
    s[0] += " ||       ";
    s[1] += " ||       ";
    s[2] += " ||       ";
    s[3] += " ||       ";
    s[4] += " ||       ";
    s[5] += " \\\\_____//";
}

void m(array<string, 6> &s)
{
    s[0] += " ||\\     /||  ";
    s[1] += " || \\   / ||  ";
    s[2] += " ||  \\ /  ||  ";
    s[3] += " ||       ||  ";
    s[4] += " ||       ||  ";
    s[5] += " ||       ||  ";
}

void n(array<string, 6> &s)
{
    s[0] += " |\\     | ";
    s[1] += " | \\    | ";
    s[2] += " |  \\   | ";
    s[3] += " |   \\  | ";
    s[4] += " |    \\ | ";
    s[5] += " |     \\| ";
}

void o(array<string, 6> &s )
{
  s[0] +="     ====     ";
  s[1] +="   ||    ||   ";
  s[2] +="   ||    ||   ";
  s[3] +="   ||    ||   ";
  s[4] +="   ||    ||   ";
  s[5] +="     ====     ";
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
  s[0] += " //--\\ ";
  s[1] += " ||    ";
  s[2] += "  \\\\   ";
  s[3] += "   \\\\  ";
  s[4] += "    \\\\ ";
  s[5] += " \\__// ";
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
  s[0] +=" \\\\                      // ";
  s[1] +="  \\\\        //\\\\        //  ";
  s[2] +="   \\\\      //  \\\\      //   ";
  s[3] +="    \\\\    //    \\\\    //    ";
  s[4] +="     \\\\  //      \\\\  //     ";
  s[5] +="      \\\\//        \\\\//      ";
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
    a(screen);
    b(screen);
    c(screen);
    d(screen);
    e(screen);
    f(screen);
    g(screen);
    h(screen);
    i(screen);
    j(screen);
    k(screen);
    l(screen);
    m(screen);
    n(screen);
    o(screen);
    p(screen);
    r(screen);
    s(screen);
    t(screen);
    v(screen);
    w(screen);
    x(screen);
    y(screen);
    z(screen);
    for (int i=0; i<6; i++)
       cout << screen[i] << endl;
    return 0;
}