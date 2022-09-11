#include "ll.h"

int main()
{
    linked_list L;
    Node * search,*check;
    int input;
    for(int i=0;i<4;++i)
    {
        cout << "enter the data:" ;
        cin >> input;
        L.append(input);
    }
    L.add_n(2,3);
    search=L.search_by_pos(4);
    cout << "the value you searched:";
    cout << *search ;
    L.delbeg();
    L.delend();
    L.deln(3);
    L.reverse();
    //L.reverse_rec(check);
    cout << L; 

    return 0;
}
