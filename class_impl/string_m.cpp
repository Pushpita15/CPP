#include "string.h"

int main()
{
    word s1,s2(8),cpy;
    int length;
    cout <<" enter a string:" ;
    cin >> s2;
    cout << s2 << endl;
    length=s2.strlen(s2);
    cout << length << endl;
    s2.strcpy(cpy);
    cout << cpy;
    return 0;
}
