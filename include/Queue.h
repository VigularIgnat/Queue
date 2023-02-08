#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
#include <string>
using namespace std;

struct Transaction{
    string num_card_send;
    string num_card_reciep;
    long int sum;
    Transaction* pointer;
};

class Queue
{
    public:
        int qu_size=2;
        int cur=0;
        Transaction* p=NULL;
        Queue(int qu_size);
        void add_object(Transaction object);

        void add(string num_card_send,string num_card_reciep,long int sum);
        Transaction pop();
        void print_qu();

        virtual ~Queue();

    protected:

    private:
};

#endif // QUEUE_H
