#include "ll.h"

int main()
{
    linked_list L;
    Node * search,*check;
    int input;
    for(int i=0;i<5;++i)
    {
        cout << "enter the data:" ;
        cin >> input;
        L.append(input);
    }
    L.add_n(2,3);
    cout << L << endl;
    search=L.search_by_pos(3);
    cout << "the value you searched:";
    cout << *search <<endl;
    L.delbeg();
    L.delend();
    L.deln(3);
    L.reverse();
    L.insertion_sort();
    //L.reverse_rec(check);
    cout << L; 
    

    return 0;
}
