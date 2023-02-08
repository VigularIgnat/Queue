#include "Queue.h"

Queue::Queue(int qu_size){
    this->qu_size=qu_size;
}
void Queue::add_object(Transaction object){
    if (cur==qu_size){
        cout<<"The max elements limit";

        return;
    }
    else{
    cout<<"\n"<<qu_size;
    Transaction* elem=new Transaction;
    // Transaction tmp=p.pointer;
    elem->num_card_send=object.num_card_send;
    elem->num_card_reciep=object.num_card_reciep;
    elem->sum=object.sum;
    if (p== NULL){

        elem->pointer=NULL;
        p=elem;
    }
    else if(p->pointer==NULL){
         elem->pointer=NULL;
        p->pointer=elem;
    }
    else{

    Transaction* tmp=p;
        while(true){
            if(tmp->pointer==NULL){

                tmp->pointer=elem;
                elem->pointer=NULL;
                //cout<<"\n"<<elem->num_card_reciep;
                break;
            }
            tmp=tmp->pointer;
        }
    }
    cur=cur++;
    }

}
void Queue::add(string num_card_send,string num_card_reciep,long int sum){
    if (cur==qu_size){
        cout<<"\nThe max elements limit";

        return;
    }
    else{
    //cout<<"\n"<<cur;
    Transaction* elem=new Transaction;
    // Transaction tmp=p.pointer;
    elem->num_card_send=num_card_send;
    elem->num_card_reciep=num_card_reciep;
    elem->sum=sum;
    if (p== NULL){

        elem->pointer=NULL;
        p=elem;
    }
    else if(p->pointer==NULL){
         elem->pointer=NULL;
        p->pointer=elem;
    }
    else{

    Transaction* tmp=p;
        while(true){
            if(tmp->pointer==NULL){

                tmp->pointer=elem;
                elem->pointer=NULL;
                //cout<<"\n"<<elem->num_card_reciep;
                break;
            }
            tmp=tmp->pointer;
        }
    }
    cur++;
    }


}
Transaction Queue::pop(){
    Transaction elem={"","",0,NULL};

    if(p!=NULL){
        Transaction* tmp=p;
        if(p->pointer==NULL){
            cout<<"\nOnly one elem";
            p=NULL;
        }
        else{
            p=p->pointer;
        }
        elem=*tmp;

        delete tmp;

    }
    return elem;
    cur--;
}

void Queue::print_qu(){
    if(p!=NULL){
        Transaction* elem=p;
        while(elem!=NULL){
            cout<<"\n"<<elem->num_card_send<<"\t"<<elem->num_card_reciep<<"\t"<<elem->sum;
            elem=elem->pointer;
        }
    }
    else{
        cout<<"\n"<<"Queue is empty";
    }
}


Queue::~Queue()
{
    Transaction* tmp=p;
    while(tmp!=NULL){
        Transaction* elem=tmp->pointer;
        delete tmp;
        tmp=elem;

    }
}
