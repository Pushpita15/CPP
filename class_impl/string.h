#include<iostream>
using namespace std;
class word
{
    char * str;
    int len;

    public:
        word();
        word(int size);
        friend istream& operator>>(istream & in,word & ob);
        int strlen(word obj);
        friend ostream & operator << (ostream & out,word & ob);
        void strcpy(word dest);
};