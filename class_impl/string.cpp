#include "string.h"

word::word()
{
    int len=10;
    this->str=new char[len+1];
    this->len=len;
}
word::word(int size)
{
    str=new char[size+1];
    this->len=size;
}
istream& operator>>(istream & in,word & ob)
{
    int i;
    for(i=0;i<ob.len;++i)
    {
        in>> ob.str[i];
    }
    ob.str[ob.len]='\0';
    return in;
}
int word::strlen(word ob)
{
    int count=0;
    for(int i=0;str[i]!='\0';++i)
        count++;
    return count;
}
ostream& operator<<(ostream & out ,word & ob)
{
    for(int i=0;ob.str[i]!='\0';++i)
    {
        out << ob.str[i];
    }
    out << endl;
}
void word::strcpy(word dest)
{
    int i;
    for(i=0;this->str[i]!='\0';++i)
    {
        dest.str[i]=this->str[i];
    }
    dest.str[i]='\0';
}