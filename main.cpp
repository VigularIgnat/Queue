#include <iostream>
#include "Queue.h"
using namespace std;

int main()
{
    Queue qu_stack(5);
    qu_stack.print_qu();
    qu_stack.add("dd","ccc",100);
    qu_stack.add("ff","kkk",20);
    qu_stack.add("mmm","nnn",60);
    qu_stack.add("ppp","pppp",10);
    qu_stack.add("9999090","iiiii",60);
    qu_stack.add("jjjjjjj","ppppppp",10);

    qu_stack.add("jjjjjjj","ppppppp",10);
    qu_stack.print_qu();
    Transaction elem1=qu_stack.pop();
    Transaction elem2=qu_stack.pop();
    int tmp_sum=elem1.sum;
    elem1.sum=elem2.sum;
    elem2.sum=tmp_sum;
    cout<<"\nAdded";
    qu_stack.add_object(elem1);
    qu_stack.add_object(elem2);
    qu_stack.print_qu();
    qu_stack.pop();
    qu_stack.pop();
    qu_stack.pop();
    qu_stack.pop();
    qu_stack.pop();
    qu_stack.pop();
    qu_stack.pop();
    qu_stack.pop();
    return 0;
}
