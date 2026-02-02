//////////////////////////////////////
// Generalised Data structer library 
//////////////////////////////////////

/*
----------------------------------------------------------------------------------------------------
Type                  Name of class for node                   Name of class for Functionality
----------------------------------------------------------------------------------------------------
Singly Linear         SinglyLLLnode                            SinglyLLL       Done
Singly Circular       SinglyCLLnode                            SinglyCLL       Done
Doubly Linear         DoublyLLLnode                            DoublyLLL       Done
Doubly Circular       DoublyCLLnode                            DoublyCLL       Done
Stack                 Stacknode                                Stack           Done
Queue                 Queuenode                                Queue           Done
-----------------------------------------------------------------------------------------------------
*/

#include<iostream>
using namespace std;

//////////////////////////////////////////////////////
//       singlyLLL using generic approach
//////////////////////////////////////////////////////

#pragma pack(1)
template<class T>
class SinglyLLLnode
{
    public:
        T data; 
        SinglyLLLnode<T> *next;

        SinglyLLLnode(T no)
        {
            this->data=no;
            this->next=NULL;
        }
};

template<class T>
class SinglyLLL
{
    private:  
        SinglyLLLnode<T> * first;
        int iCount;

    public:
        SinglyLLL();

        void Insertfirst(T);
        void Insertlast(T no);
        void DeleteFirst();
        void DeleteLast();
        void Display();
        int Count();
        void InsertAtPos(T,int);
        void DeleteAtPos(int);

};

template<class T>
SinglyLLL<T> :: SinglyLLL()
{
    cout<<"object of SinglyLLL gets created.\n";
    this->first=NULL;
    this->iCount=0;
}

////////////////////////////////////////////////////////////////////////////////////////////
//
//   Function Name:    InsertFirest
//   Input:            Data of node
//   Output:           Nothing
//   Description:      Used to insert node at first position
//   Auther:           Harsh Nilesh Barbhai
//   Date:             06/01/2026
//
////////////////////////////////////////////////////////////////////////////////////////////

template<class T>
void SinglyLLL<T> :: Insertfirst(T no)
{
    SinglyLLLnode<T> *  newn=NULL;

    newn=new SinglyLLLnode<T>(no);  

    newn->next=this->first;
    this->first=newn;
    
    this->iCount++;
}

template<class T>
void SinglyLLL<T> :: Insertlast(T no)
{
    SinglyLLLnode<T> *  newn=NULL;
    SinglyLLLnode<T> *  temp=NULL;

    newn=new SinglyLLLnode<T>(no);  

    if(this->iCount==0) 
    {
        this->first=newn;
    }
    else 
    {
        temp=this->first;
        while(temp->next != NULL)
        {
            temp=temp->next;
        }

        temp->next=newn;
        
    }
    this->iCount++;
}

template<class T>
void SinglyLLL<T> :: DeleteFirst()
{
    SinglyLLLnode<T> *  temp=NULL;
    if(this->first==NULL)
    {
        return;
    }
    else if(this->first->next==NULL) 
    {
        delete this->first;
        this->first=NULL;
    }
    else 
    {
        temp=this->first;
        this->first=this->first->next;
        delete temp;
    }
    this->iCount--;

}

template<class T>
void SinglyLLL<T> :: DeleteLast()
{
    SinglyLLLnode<T> *  temp=NULL;

    if(this->first==NULL)
    {
        return;
    }
    else if(this->first->next==NULL) 
    {
        delete this->first;
        this->first=NULL;
    }
    else 
    {
        temp=this->first;
        while(temp->next->next != NULL)
        {
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;

    }
    this->iCount--;
}

template<class T>
void SinglyLLL<T> :: Display()
{
    SinglyLLLnode<T> *  temp=NULL;
    int iCnt=0;

    temp=this->first;

    for(iCnt=1;iCnt<=this->iCount;iCnt++)   
    {
        cout<<"| "<<temp->data<<" |->";
        temp=temp->next;
    }
    cout<<"NULL\n";
}

template<class T>
int SinglyLLL<T> :: Count()
{
    return this->iCount;
}

template<class T>
void SinglyLLL<T> :: InsertAtPos(T no,int pos)
{
    SinglyLLLnode<T> *  newn=NULL;
    SinglyLLLnode<T> *  temp=NULL;
    int iCnt=0;

    if(pos<1 || pos>this->iCount+1)
    {
        cout<<"Invalid position\n";
        return;
    }

    if(pos==1)
    {
        this->Insertfirst(no);
    }
    else if(pos == this->iCount+1)
    {
        this->Insertlast(no);
    }
    else 
    {
        newn=new SinglyLLLnode<T>(no);

        temp=this->first;

        for(iCnt=1;iCnt<pos-1;iCnt++)
        {
            temp=temp->next;
        }

        newn->next=temp->next;
        temp->next=newn;

        this->iCount++;
    }
}

template<class T>
void SinglyLLL<T> :: DeleteAtPos(int pos)
{  
    SinglyLLLnode<T> *  temp=NULL;
    SinglyLLLnode<T> *  target=NULL;

    int iCnt=0;

    if(pos<1 || pos>this->iCount)
    {
        cout<<"Invalid position\n";
        return;
    }

    if(pos==1)
    {
        this->DeleteFirst();
    }
    else if(pos == iCount+1)
    {
        this->DeleteLast();
    }
    else 
    {
        temp=this->first;

        for(iCnt=1;iCnt<pos-1;iCnt++)
        {
            temp=temp->next;
        }

        target=temp->next;

        temp->next=target->next;
        delete target;

        this->iCount--;
    }
}



//////////////////////////////////////////////////////
//      DoublyLLL using generic approach
//////////////////////////////////////////////////////

#pragma pack(1)
template<class T>
class DoublyLLLnode
{
    public:
        T data;
        DoublyLLLnode *next;
        DoublyLLLnode *prev;  
        
        DoublyLLLnode(T no)
        {
            this->data=no;
            this->next=NULL;
            this->prev=NULL;
        }
};

template<class T>
class DoublyLLL
{
    private:
        DoublyLLLnode<T> * first;
        int iCount;

    public:
        DoublyLLL();

        void InsertFirst(T);
        void InsertLast(T);
        void InsertAtPos(T,int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);

        void Dispaly();
        int Count();
};

template<class T>
DoublyLLL<T> :: DoublyLLL()
{
    cout<<"object of DoublyLLL gets created\n";
    this->first=NULL;
    this->iCount=0;
}

template<class T>
void DoublyLLL<T> :: InsertFirst(T no)
{
    DoublyLLLnode<T> *newn=NULL;

    newn=new DoublyLLLnode<T>(no);

    if(this->first == NULL)
    {
        this->first=newn;
    }
    else
    {
        newn->next=this->first;
        this->first->prev=newn;
        this->first=newn;
    }
    this->iCount++;
}

template<class T>
void DoublyLLL<T> :: InsertLast(T no)
{
    DoublyLLLnode<T> *newn=NULL;
    DoublyLLLnode<T> *temp=NULL;

    newn=new DoublyLLLnode<T>(no);

    if(this->first == NULL)
    {
        this->first=newn;
    }
    else
    {
        temp=this->first;

        while(temp->next != NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
        newn->prev=temp;
    }
    this->iCount++;
    
}

template<class T>
void DoublyLLL<T> :: InsertAtPos(T no,int pos)
{
    DoublyLLLnode<T> *temp=NULL;
    DoublyLLLnode<T> *newn=NULL;

    int iCnt=0;

    if((pos<1) || (pos>this->iCount+1))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(pos==1)
    {
        this->InsertFirst(no);
    }
    else if(pos==this->iCount+1)
    {
        this->InsertLast(no);
    }
    else 
    {
        newn=new DoublyLLLnode<T>(no);
        temp=this->first;

        for(iCnt=1;iCnt<pos-1;iCnt++)
        {
            temp=temp->next;
        }

        newn->next=temp->next;
        temp->next->prev=newn;

        temp->next=newn;
        newn->prev=temp;

        this->iCount++;
    }

}

template<class T>
void DoublyLLL<T> :: DeleteFirst()
{
    if(this->first == NULL)             //LL is empty
    {
        return;
    }   
    else if(this->first->next == NULL)   //LL contains one node 
    {
        delete this->first;
        this->first=NULL;
    }
    else                                //LL contains more than one node
    {
        this->first=this->first->next;
        delete(this->first->prev);
        this->first->prev=NULL; 
    }
    this->iCount--;
}

template<class T>
void DoublyLLL<T> :: DeleteLast()
{
    DoublyLLLnode<T> *temp=NULL;

    if(this->first == NULL)             //LL is empty
    {
        return;
    }   
    else if(this->first->next == NULL)   //LL contains one node 
    {
        delete this->first;
        this->first=NULL;
    }
    else                                //LL contains more than one node
    {
        temp=this->first;
        while(temp->next->next != NULL)
        {
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
    }
    this->iCount--;
}

template<class T>
void DoublyLLL<T> :: DeleteAtPos(int pos)
{
    DoublyLLLnode<T> *temp=NULL;
    int iCnt=0;

    if((pos<1) || (pos>this->iCount))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(pos==1)
    {
        this->DeleteFirst();
    }
    else if(pos==this->iCount+1)
    {
        this->DeleteLast();
    }
    else 
    {
        temp=this->first;

        for(iCnt=1;iCnt<pos-1;iCnt++)
        {
            temp=temp->next;
        }

        temp->next=temp->next->next;
        delete temp->next->prev;
        temp->next->prev=temp;

        this->iCount--;
    }
}

template<class T>
void DoublyLLL<T> :: Dispaly()
{
    DoublyLLLnode<T> *temp=NULL;

    temp=this->first;

    cout<<"NULL<=>";
    while(temp !=NULL)
    {
        cout<<"| "<<temp->data<<" |<=>";
        temp=temp->next;
    }
    cout<<"NULL\n";
    
}

template<class T>
int DoublyLLL<T> :: Count()
{
    return this->iCount;
}


///////////////////////////////////////////////////////////////
//        SinglyLLL using Generic Approach
//////////////////////////////////////////////////////////////

#pragma pack(1)
template<class T>
class SinglyCLLnode
{
    public:
        T data;
        SinglyCLLnode<T> *next;

        SinglyCLLnode(T no)
        {
            this->data=no;
            this->next=NULL;
        }
};

template<class T>
class SinglyCLL
{
    private:
        SinglyCLLnode<T> *first;
        SinglyCLLnode<T> *last;
        int iCount;

    public:
        SinglyCLL();

        void InsertFirst(T);
        void InsertLast(T);
        void DeleteFirst();
        void DeleteLast();
        void Display();
        int Count();
        void InsertAtPos(T,int);
        void DeleteAtPos(int);
};

template<class T>
SinglyCLL<T> :: SinglyCLL()
{
    cout<<"object of SinglyCLL gets created.\n";
    this->first=NULL;
    this->last=NULL;
    this->iCount=0;
}

template<class T>
void SinglyCLL<T> :: InsertFirst(T no)
{ 
    SinglyCLLnode<T> *newn=NULL;
    newn=new SinglyCLLnode<T>(no);

    if(this->first==NULL && this->last==NULL)
    {
        this->first=newn;
        this->last=newn;  
    }
    else 
    {
        newn->next=this->first;
        this->first=newn;  
    }
    this->last->next=this->first;
    this->iCount++;
}

template<class T>
void SinglyCLL<T> :: InsertLast(T no)
{ 
    SinglyCLLnode<T> * newn=NULL;
    SinglyCLLnode<T> * temp=NULL;

    newn=new SinglyCLLnode<T>(no);

    if(this->first==NULL && this->last==NULL)
    {
        this->first=newn;
        this->last=newn;  
    }
    else 
    {
        this->last->next=newn;
        this->last=newn;  
    }
    this->last->next=this->first;
    this->iCount++;

}

template<class T>
void SinglyCLL<T> :: DeleteFirst()
{
    SinglyCLLnode<T> * temp=NULL;
    if(this->first==NULL && this->last==NULL)
    {
        return; 
    }
    else if(this->first->next == this->first && this->last->next == this->last)
    {
        delete(this->first);
        this->first=NULL;
        this->last=NULL;
        this->iCount--;
    }
    else 
    {
        temp=this->first;
        this->first=this->first->next;
        delete(temp);
        this->last->next=this->first;
        this->iCount--;
    }
}

template<class T>
void SinglyCLL<T> :: DeleteLast()
{
    SinglyCLLnode<T> * temp=NULL;
    if(this->first==NULL && this->last==NULL)
    {
        return; 
    }
    else if(this->first->next == this->first && this->last->next == this->last)
    {
        delete(this->first);
        this->first=NULL;
        this->last=NULL;
        this->iCount--;
    }
    else 
    {
        temp=this->first;
        while(temp->next->next != this->first)
        {
            temp=temp->next;
        }
        delete(temp->next);
        temp->next=this->first;
        this->last=temp;
        this->iCount--;
    }
}

template<class T>
void SinglyCLL<T> :: Display()
{
    if(first == NULL && last == NULL)   // LL is empty
    {
        cout<<"Linked List is empty\n";
        return;
    }

    cout<<" <- ";
    SinglyCLLnode<T> * temp=NULL;
    temp=this->first;
    do
    {
        cout<<"| "<<temp->data<<" | ->";
        temp=temp->next;
    } while(temp != this->first);
    cout<<"\n";
    
}

template<class T>
int SinglyCLL<T> :: Count()
{
    return this->iCount;
}

template<class T>
void SinglyCLL<T> :: InsertAtPos(T no,int pos)
{ 
    SinglyCLLnode<T> * temp=NULL;
    SinglyCLLnode<T> * newn=NULL;

    int iCnt=0;
    if(pos<1 || pos>this->iCount+1)
    {
        cout<<"Invalid position\n";
        return;
    }

    if(pos==1)
    {
        this->InsertFirst(no);
    }
    else if(pos==this->iCount+1)
    {
        this->InsertLast(no);
    }
    else 
    {
        newn=new SinglyCLLnode<T>(no);

        temp=this->first;
        for(iCnt=1;iCnt<pos-1;iCnt++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
        this->iCount++;
    }
}

template<class T>
void SinglyCLL<T> :: DeleteAtPos(int pos)
{
    SinglyCLLnode<T> * temp=NULL;
    SinglyCLLnode<T> * target=NULL;

    int iCnt=0;
    if(pos<1 || pos>this->iCount)
    {
        cout<<"Invalid position\n";
        return;
    }

    if(pos==1)
    {
        this->DeleteFirst();
    }
    else if(pos==this->iCount)
    {
        this->DeleteLast();
    }
    else 
    {
        temp=this->first;
        for(iCnt=1;iCnt<pos-1;iCnt++)
        {
            temp=temp->next;
        }
        target=temp->next;
        temp->next=target->next;
        delete(target);
        this->iCount--;
    }
}

//////////////////////////////////////////////////////////////////
//             DoublyCLL using Generic Approach
//////////////////////////////////////////////////////////////////

#pragma pack(1)
template<class T>
class DoublyCLLnode
{
    public:
        T data;
        DoublyCLLnode<T> *next;
        DoublyCLLnode<T> *prev;

        DoublyCLLnode<T>(T no)
        {
            this->data=no;
            this->next=NULL;
            this->prev=NULL;
        }
};

template<class T>
class DoublyCLL
{
    private:
        DoublyCLLnode<T> *first;
        DoublyCLLnode<T> *last;
        int iCount;
    public:
        DoublyCLL();

        void InsertFirst(T no);

        void InsertLast(T no);

        void DeleteFirst();

        void DeleteLast();

        void Display();

        int Count();

        void InsertAtPos(T,int);

        void DeleteAtPos(int);
};

template<class T>
DoublyCLL<T> :: DoublyCLL()
{
    this->first=NULL;
    this->last=NULL;
    this->iCount=0;
}

template<class T>
void DoublyCLL<T> :: InsertFirst(T no)
{ 
    DoublyCLLnode<T> * newn=NULL;
    newn=new DoublyCLLnode<T>(no);

    if(this->first==NULL && this->last==NULL)
    {
        this->first=newn;
        this->last=newn;  
    }
    else 
    {
        newn->next=this->first;
        this->first=newn;      
    }
    this->first->prev=this->last; //newn->prev=last;
    this->last->next=this->first;
    this->iCount++;
}

template<class T>
void DoublyCLL<T> :: InsertLast(T no)
{ 
    DoublyCLLnode<T> * newn=NULL;
    DoublyCLLnode<T> * temp=NULL;

    newn=new DoublyCLLnode<T>(no);

    if(this->first==NULL && this->last==NULL)
    {
        this->first=newn;
        this->last=newn; 
        newn->prev=this->last; 
    }
    else 
    {
        newn->prev=last;
        this->last->next=newn;
        this->last=newn; 
        this->last->prev->next=newn;
    }
    this->first->prev=this->last; 
    this->last->next=this->first;
    this->iCount++;

}

template<class T>
void DoublyCLL<T> :: DeleteFirst()
{
    DoublyCLLnode<T> * temp=NULL;
    if(this->first==NULL && this->last==NULL)
    {
        return; 
    }
    else if(this->first->next == this->first && this->last->next == this->last)
    {
        delete(this->first);
        this->first=NULL;
        this->last=NULL;
        this->iCount--;
    }
    else 
    {
        temp=this->first;
        this->first=this->first->next;
        delete(temp);
        this->first->prev=this->last;
        this->last->next=this->first;
        this->iCount--;
    }
}

template<class T>
void DoublyCLL<T> :: DeleteLast()
{ 
    if(this->first==NULL && this->last==NULL)
    {
        return; 
    }
    else if(this->first->next == this->first && this->last->next == this->last)
    {
        delete(this->first);
        this->first=NULL;
        this->last=NULL;
        this->iCount--;
    }
    else 
    {
        this->last=this->last->prev;
        delete(last->next);
        last->next=this->first;
        this->first->prev=this->last;
        this->iCount--;
    }
}

template<class T>
void DoublyCLL<T> :: Display()
{
    if(first == NULL && last == NULL)   // LL is empty
    {
        cout<<"Linked List is empty\n";
        return;
    }
    DoublyCLLnode<T> * temp=NULL;
    temp=this->first;
    cout<<" <=> ";
    do
    {
        cout<<"| "<<temp->data<<" |<=>";
        temp=temp->next;
    } while(temp != this->first);
    cout<<"\n";
    
}

template<class T>
int DoublyCLL<T> :: Count()
{
    return this->iCount;
}

template<class T>
void DoublyCLL<T> :: InsertAtPos(T no,int pos)
{ 
    DoublyCLLnode<T> * temp=NULL;
    DoublyCLLnode<T> * newn=NULL;
    int iCnt=0;
    if(pos<1 || pos>this->iCount+1)
    {
        cout<<"Invalid position\n";
        return;
    }

    if(pos==1)
    {
        this->InsertFirst(no);
    }
    else if(pos==this->iCount+1)
    {
        this->InsertLast(no);
    }
    else 
    {
        newn=new DoublyCLLnode<T>(no);

        temp=this->first;
        for(iCnt=1;iCnt<pos-1;iCnt++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        newn->prev=temp;
        newn->next->prev=newn;
        temp->next=newn;
        this->iCount++;
    }
}

template<class T>
void DoublyCLL<T> :: DeleteAtPos(int pos)
{
    DoublyCLLnode<T> * temp=NULL;
    DoublyCLLnode<T> * target=NULL;

    int iCnt=0;
    if(pos<1 || pos>this->iCount)
    {
        cout<<"Invalid position\n";
        return;
    }

    if(pos==1)
    {
        this->DeleteFirst();
    }
    else if(pos==this->iCount)
    {
        this->DeleteLast();
    }
    else 
    {
        temp=this->first;
        for(iCnt=1;iCnt<pos-1;iCnt++)
        {
            temp=temp->next;
        }
        target=temp->next;
        temp->next=target->next;
        target->next->prev=temp;
        delete(target);
        this->iCount--;
    }
}


//////////////////////////////////////////////////////
//       Stack using generic approach
//////////////////////////////////////////////////////


#pragma pack(1)
template<class T>
class Stacknode
{
    public:
        T data;
        Stacknode<T> *next;

        Stacknode(T no)
        {
            this->data=no;
            this->next=NULL;
        }
};

template<class T>
class Stack
{
    private:
        Stacknode<T> *first;
        int iCount;

    public:
        Stack();

        void Push(T); 
        T Pop();      
        T Peep();
        void Display();
        int Count();
};

template<class T>
Stack<T> :: Stack()
{
    cout<<"Stack gets created Successfully..\n";

    this->first=NULL;
    this->iCount=0;
}

template<class T>
void Stack<T> :: Push(T no)
{
    Stacknode<T> *newn =NULL;

    newn=new Stacknode<T>(no);

    newn->next=this->first;
    this->first=newn;

    this->iCount++;
}

template<class T>
T Stack<T> :: Pop() 
{
    Stacknode<T> *temp=this->first;
    T Value=0;

    if(this->first == NULL)
    {
        cout<<"Stack is Empty\n";
        return -1;
    }

    Value = this->first->data;

    this->first=this->first->next;
    delete temp;

    this->iCount--;

    return Value;
}

template<class T>
T Stack<T> :: Peep()
{
    T Value=0;

    if(this->first == NULL)
    {
        cout<<"Stack is Empty\n";
        return -1;
    }

    Value = this->first->data;
    
    return Value;
}

template<class T>
void Stack<T> :: Display()
{
    Stacknode<T> *temp=this->first;

    if(this->first == NULL)
    {
        cout<<"Stack is empty\n";
        return;
    }

    while(temp != NULL)
    {
        cout<<"|\t"<<temp->data<<"\t|\n";
        temp=temp->next;
    }
}

template<class T>
int Stack<T> :: Count()
{
    return this->iCount;
}


////////////////////////////////// End of library //////////////////////////////////////////////

int main()
{
    SinglyLLL<int> *obj = new SinglyLLL<int>();
    int iRet=0;

    obj->Insertfirst(51);
    obj->Insertfirst(21);
    obj->Insertfirst(11);

    obj->Display();

    iRet=obj->Count();

    cout<<"Number of nodes are: "<<iRet<<"\n"; 

    obj->Insertlast(101);
    obj->Insertlast(111);
    obj->Insertlast(121);

    obj->Display();

    iRet=obj->Count();
    cout<<"Number of nodes are: "<<iRet<<"\n"; 

    obj->DeleteFirst();

    obj->Display();

    iRet=obj->Count();
    cout<<"Number of nodes are: "<<iRet<<"\n"; 

    obj->DeleteLast();

    obj->Display();

    iRet=obj->Count();
    cout<<"Number of nodes are: "<<iRet<<"\n";

    obj->InsertAtPos(105,4);

    obj->Display();

    iRet=obj->Count();
    cout<<"Number of nodes are: "<<iRet<<"\n";

    obj->DeleteAtPos(4);
    obj->Display();

    iRet=obj->Count();
    cout<<"Number of nodes are: "<<iRet<<"\n";

    delete obj;
    cout<<"\n";
/////////////////////////////////////////////////////////////////////////////////////////

    DoublyLLL<char> *dobj = new DoublyLLL<char>();
    int cRet=0;

    dobj->InsertFirst('A');
    dobj->InsertFirst('B');
    dobj->InsertFirst('C');

    dobj->Dispaly();

    cRet=dobj->Count();
    cout<<"Number of elements are: "<<cRet<<"\n";

    dobj->InsertLast('X');
    dobj->InsertLast('Y');
    dobj->InsertLast('Z');

    dobj->Dispaly();

    cRet=dobj->Count();
    cout<<"Number of elements are: "<<cRet<<"\n";

    dobj->DeleteFirst();

    dobj->Dispaly();

    cRet=dobj->Count();
    cout<<"Number of elements are: "<<cRet<<"\n";

    dobj->DeleteLast();

    dobj->Dispaly();

    cRet=dobj->Count();
    cout<<"Number of elements are: "<<cRet<<"\n";

    dobj->InsertAtPos('$',4);

    dobj->Dispaly();

    cRet=dobj->Count();
    cout<<"Number of elements are: "<<cRet<<"\n";

    dobj->DeleteAtPos(4);

    dobj->Dispaly();

    cRet=dobj->Count();
    cout<<"Number of elements are: "<<cRet<<"\n";

    delete dobj;
    cout<<"\n";

///////////////////////////////////////////////////////////////////////////////////

    SinglyCLL<float> *slobj=new SinglyCLL<float>();
    int fRet=0;

    slobj->InsertFirst(51.73);
    slobj->InsertFirst(21.34);
    slobj->InsertFirst(11.55);

    slobj->Display();

    fRet=slobj->Count();
    cout<<"number of elements are: "<<fRet<<"\n";

    slobj->InsertLast(101.23);
    slobj->InsertLast(111.32);
    slobj->InsertLast(121.34);

    slobj->Display();

    fRet=slobj->Count();
    cout<<"number of elements are: "<<fRet<<"\n";

    slobj->DeleteFirst();

    slobj->Display();

    fRet=slobj->Count();
    cout<<"number of elements are: "<<fRet<<"\n";

    slobj->DeleteLast();

    slobj->Display();

    fRet=slobj->Count();
    cout<<"number of elements are: "<<fRet<<"\n";

    slobj->InsertAtPos(55.24,3);

    slobj->Display();

    fRet=slobj->Count();
    cout<<"number of elements are: "<<fRet<<"\n";

    slobj->DeleteAtPos(3);
    slobj->Display();

    fRet=slobj->Count();
    cout<<"number of elements are: "<<fRet<<"\n";

    delete slobj;
    cout<<"\n";
///////////////////////////////////////////////////////////////////////////////////////////////


    DoublyCLL<double> *clobj=new DoublyCLL<double>();
    int dRet=0;

    clobj->InsertFirst(51.345);
    clobj->InsertFirst(21.345);
    clobj->InsertFirst(11.345);

    clobj->Display();

    dRet=clobj->Count();
    cout<<"number of elements are: "<<dRet<<"\n";

    clobj->InsertLast(101.234);
    clobj->InsertLast(111.345);
    clobj->InsertLast(121.345);

    clobj->Display();

    dRet=clobj->Count();
    cout<<"number of elements are: "<<dRet<<"\n";

    clobj->DeleteFirst();

    clobj->Display();

    dRet=clobj->Count();
    cout<<"number of elements are: "<<dRet<<"\n";

    clobj->DeleteLast();

    clobj->Display();

    dRet=clobj->Count();
    cout<<"number of elements are: "<<dRet<<"\n";

    clobj->InsertAtPos(55.347,3);

    clobj->Display();

    dRet=clobj->Count();
    cout<<"number of elements are: "<<dRet<<"\n";

    clobj->DeleteAtPos(3);
    clobj->Display();

    dRet=clobj->Count();
    cout<<"number of elements are: "<<dRet<<"\n";

    delete clobj;

////////////////////////////////////////////////////////////////////////////////////////////////////////////

    Stack<char> *sobj = new Stack<char>();

    sobj->Push('a');
    sobj->Push('b');
    sobj->Push('c');
    sobj->Push('d');

    sobj->Display();

    cout<<"Number of elements in stack are: "<<sobj->Count()<<"\n";

    cout<<"Return Value of peep is: "<<sobj->Peep()<<"\n";

    sobj->Display();

    cout<<"Number of elements in stack are: "<<sobj->Count()<<"\n";

    cout<<"Poped element is: "<<sobj->Pop()<<"\n";

    sobj->Display();

    cout<<"Number of elements in stack are: "<<sobj->Count()<<"\n";

    cout<<"Poped element is: "<<sobj->Pop()<<"\n";

    sobj->Display();

    cout<<"Number of elements in stack are: "<<sobj->Count()<<"\n";

    sobj->Push('e');

    sobj->Display();

    cout<<"Number of elements in stack are: "<<sobj->Count()<<"\n";

    delete sobj;
    
    return 0;
}