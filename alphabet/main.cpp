#include <iostream>
#include <array>

using namespace std;

void q(array < string, 6> &s)
{ 
    s[0] += "   _____     ";
    s[1] += "  ||   ||    ";
    s[2] += "  ||   ||    ";
    s[3] += "  ||   ||    ";
    s[4] += "  ||   ||    ";
    s[5] += "   ----\\\\    ";
}
int main()
{
    array<string, 6> screen;
    q(screen);
    q(screen);
    for (int i=0; i<6; i++)
        cout << screen[i] << endl;

    return 0;
}
