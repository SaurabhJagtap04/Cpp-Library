/*

    GENERIC C++ FUNCTIONS LIBRARY

    FUNCTIONS LIST:

        Singly Linear Linked List :
    
        01. SinglyLL : InsertFirst();
        02. SinglyLL : InsertLast();
        03. SinglyLL : InsertAtPos();
        04. SinglyLL : DeleteFirst();
        05. SinglyLL : DeleteLast();
        06. SinglyLL : DeleteAtPos();
        07. SinglyLL : Display();
        08. SinglyLL : Count();
        09. DoublyLL : FirstOccurance();
        10. DoublyLL : LastOccurance();
        11. DoublyLL : CalFrequency();
        12. DoublyLL : FindMinimum();
        13. DoublyLL : FindMaximum();
        14. DoublyLL : Summation();

        Doubly Linear Linked List :
    
        15. DoublyLL : InsertFirst();
        16. DoublyLL : InsertLast();
        17. DoublyLL : InsertAtPos();
        18. DoublyLL : DeleteFirst();
        19. DoublyLL : DeleteLast();
        20. DoublyLL : DeleteAtPos();
        21. DoublyLL : Display();
        22. DoublyLL : Count();
        23. DoublyLL : FirstOccurance();
        24. DoublyLL : LastOccurance();
        25. DoublyLL : CalFrequency();
        26. DoublyLL : FindMinimum();
        27. DoublyLL : FindMaximum();
        28. DoublyLL : Summation();

        Singly Circular Linked List :
    
        29. SinglyCL : InsertFirst();
        30. SinglyCL : InsertLast();
        31. SinglyCL : InsertAtPos();
        32. SinglyCL : DeleteFirst();
        33. SinglyCL : DeleteLast();
        34. SinglyCL : DeleteAtPos();
        35. SinglyCL : Display();
        36. SinglyCL : Count();
        37. DoublyCL : FirstOccurance();
        38. DoublyCL : LastOccurance();
        39. DoublyCL : CalFrequency();
        40. DoublyCL : FindMinimum();
        41. DoublyCL : FindMaximum();
        42. DoublyCL : Summation();

        Doubly Circular Linked List :
    
        43. DoublyCL : InsertFirst();
        44. DoublyCL : InsertLast();
        45. DoublyCL : InsertAtPos();
        46. DoublyCL : DeleteFirst();
        47. DoublyCL : DeleteLast();
        48. DoublyCL : DeleteAtPos();
        49. DoublyCL : Display();
        50. DoublyCL : Count();
        51. DoublyCL : FirstOccurance();
        52. DoublyCL : LastOccurance();
        53. DoublyCL : CalFrequency();
        54. DoublyCL : FindMinimum();
        55. DoublyCL : FindMaximum();
        56. DoublyCL : Summation();

        Functions on Array :
 
        57. Accept();
        58. Display();
 
        Functions on Searching :
 
        59. LinearSearch(T);
        60. BidirectinalSearch(T);
        61. BinarySearch(T);

        Functions on Sorting :
 
        62. CheckSorted();
        63. SelectionSort();
        64. InsertionSort();    
 
        Functions on Binary Search Tree :

        65. Insert();
        66. Search();
        67. Preorder();
        68. Postorder();
        69. Inorder();
        70. CountNodes();
        71. CountLeafNodes();
        72. CountParentNodes(); 

        Functions on Stack :

        73. Push();
        74. Pop();
        75. Display();
        76. Count();

        Functions on Queue :

        77. Enqueue();
        78. Dequeue();
        79. Display();
        80. Count();

*/

#include <iostream>
using namespace std;

template <class T>
class NodeS
{
    public:
        T data;
        NodeS *next;

        NodeS()
        {
            data = 0;
            next = NULL;
        }

        NodeS(T Value)
        {
            data = Value;
            next = NULL;
        }
};

template <class T>
class NodeD
{
    public:
        T data;
        NodeD* next;
        NodeD* prev;

        NodeD()
        {
            data = 0;
            next = NULL;
            prev = NULL;
        }

        NodeD(T Value)
        {
            data = Value;
            next = NULL;
            prev = NULL;
        }
};

template <class T>
class NodeB
{
    public:
        T data;
        NodeB<T>* right;
        NodeB<T>* left;

        NodeB()
        {
            data;
            right = NULL;
            left = NULL;
        }

        NodeB(T No)
        {
            data = No;
            right = NULL;
            left = NULL;
        }
};

template <class T>
class SinglyLL
{
public:
    struct NodeS<T> *first;
    int iCount;

    SinglyLL();

    void Display();
    int Count();

    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T, int iPos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);

    int FirstOccurance(T No);
    int LastOccurance(T No);
    int CalFrequency(T No);
    T FindMinimum();
    T FindMaximum();
    T Summation();
};

template <class T>
class DoublyLL
{
public:
    struct NodeD<T> *head;
    int iCount;

    DoublyLL();

    void Display();
    int Count();

    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T, int iPos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);

    int FirstOccurance(T No);
    int LastOccurance(T No);
    int CalFrequency(T No);
    T FindMinimum();
    T FindMaximum();
    T Summation();
};

template <class T>
class SinglyCL
{
public:
    NodeS<T> *head;
    NodeS<T> *tail;
    int iCount;

    SinglyCL();

    void Display();
    int Count();

    void InsertFirst(T No);
    void InsertLast(T No);
    void InsertAtPos(T No, int iPos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);

    int FirstOccurance(T No);
    int LastOccurance(T No);
    int CalFrequency(T No);
    T FindMinimum();
    T FindMaximum();
    T Summation();
};

template <class T>
class DoublyCL
{
    public:
        NodeD<T>* head;
        NodeD<T>* tail;
        int iCount;

        DoublyCL();

        void Display();
        int Count();
        
        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPos(T No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        int FirstOccurance(T No);
        int LastOccurance(T No);
        int CalFrequency(T No);
        T FindMinimum();
        T FindMaximum();
        T Summation();
};

template <class T>
class ArrayX
{
    public:
        T *Arr;
        int iSize;

        ArrayX(int);
        ~ArrayX();
        void Accept();
        void Display();
        bool LinearSearch(T);
        bool BidirectinalSearch(T);
        bool BinarySearch(T);
        bool CheckSorted();

        void SelectionSort();
        void InsertionSort();
};

template <class T>
class BST
{
    private:

        void PreorderF(NodeB<T>* head);      
        void PostOrderF(NodeB<T>* head); 
        void InOrderF(NodeB<T>* head);      
        int CountNodesF(NodeB<T>* head);
        int CountLeafNodesF(NodeB<T>* head);
        int CountParentNodesF(NodeB<T>* head);

    public:
        NodeB<T>* head;

        BST();

        void Insert(T No);
        bool Search(T No);
        void Preorder();
        void Postorder();
        void Inorder();
        int CountNodes();
        int CountLeafNodes();
        int CountParentNodes();
};

template <class T>
class Stack
{
    public:
        NodeS<T> *head;
        int iCount;

        Stack();

        void Push(T No);
        void Pop();

        void Display();
        int Count();       
};

template <class T>
class Queue
{
    public:
        NodeS<T> *head;
        int iCount;

        Queue();

        void Enqueue(T No);
        void Dequeue();

        void Display();
        int Count();       
};


///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   SINGLY LINEAR LINKED LIST
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////


template <class T>
SinglyLL<T>::SinglyLL()
{
    first = NULL;
    iCount = 0;
}

template <class T>
void SinglyLL<T>::Display()
{
    NodeS<T> *temp = first;

    for (int i = 1; i <= iCount; i++)
    {
        cout << "| " << temp->data << " | -> ";
        temp = temp->next;
    }
    cout << "\n";
}

template <class T>
int SinglyLL<T>::Count()
{
    return iCount;
}

template <class T>
void SinglyLL<T>::InsertFirst(T no)
{
    NodeS<T> *newn = new NodeS<T>;

    newn->data = no;
    newn->next = NULL;

    if (first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }

    iCount++;
}

template <class T>
void SinglyLL<T>::InsertLast(T no)
{
    NodeS<T> *newn = new NodeS<T>;
    NodeS<T> *temp = first;

    newn->data = no;
    newn->next = NULL;

    if (first == NULL)
    {
        first = newn;
    }
    else
    {
        for (int i = 1; i < iCount; i++)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }

    iCount++;
}

template <class T>
void SinglyLL<T>::DeleteFirst()
{
    NodeS<T> *temp = first;

    if (first == NULL)
    {
        return;
    }
    else if (first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        first = first->next;
        delete temp;
    }

    iCount--;
}

template <class T>
void SinglyLL<T>::DeleteLast()
{
    NodeS<T> *temp = first;

    if (first == NULL)
    {
        return;
    }
    else if (first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        for (int i = 1; i < (iCount - 1); i++)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }

    iCount--;
}

template <class T>
void SinglyLL<T>::InsertAtPos(T no, int ipos)
{
    NodeS<T> *temp = first;

    NodeS<T> *newn = new NodeS<T>;

    newn->data = no;
    newn->next = NULL;

    if (ipos < 1)
    {
        cout << "Invalid Position\n";
    }

    if (ipos > iCount + 1)
    {
        cout << "Invalid Position\n";
    }

    if (ipos == 1)
    {
        InsertFirst(no);
    }
    else if (ipos == iCount + 1)
    {
        InsertLast(no);
    }
    else
    {
        for (int i = 1; i < ipos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }

    iCount++;
}


template <class T>
void SinglyLL<T>::DeleteAtPos(int ipos)
{
    NodeS<T> *temp = first;
    NodeS<T> *tempX = NULL;

    if (ipos < 1)
    {
        cout << "Invalid Position\n";
    }

    if (ipos > iCount)
    {
        cout << "Invalid Position\n";
    }

    if (ipos == 1)
    {
        DeleteFirst();
    }
    else if (ipos == iCount)
    {
        DeleteLast();
    }
    else
    {
        for (int i = 1; i < (ipos - 1); i++)
        {
            temp = temp->next;
        }

        tempX = temp -> next;
        temp -> next = tempX -> next;
        delete tempX;        
    }

    iCount--;
}

template <class T>
int SinglyLL<T>::FirstOccurance(T No)
{
    NodeS<T> *temp = first;
    int iCnt = 1;

    if ((first == NULL))
    {
        cout << "Linked List Empty.\n";
        return 0;
    }
    else
    {
        while (temp->next != NULL)
        {
            if(temp -> data == No)
            {
                break;
            }
            temp = temp->next;
            iCnt++;
        }
    }

    return iCnt;
}

template <class T>
int SinglyLL<T>::LastOccurance(T No)
{
    NodeS<T> *temp = first;
    int iCnt = 0;
    int Occ = 0;

    if ((first == NULL))
    {
        cout << "Linked List Empty.\n";
        return 0;
    }
    else
    {
        for(int i = 1; i <= iCount; i++)
        {
            iCnt++;
            if(temp -> data == No)
            {
                Occ = iCnt;
            }
            temp = temp->next;
        }
    }

    return Occ;
}

template <class T>
int SinglyLL<T>::CalFrequency(T No)
{
    NodeS<T> *temp = first;
    int iCnt = 0;

    if ((first == NULL))
    {
        cout << "Linked List Empty.\n";
        return 0;
    }
    else
    {

        while(temp != NULL)
        {
            if (temp->data == No)
            {
                iCnt++;
            }

            temp = temp->next;            
        }
    }

    return iCnt;
}

template <class T>
T SinglyLL<T>::FindMinimum()
{
    NodeS<T> *temp = first;
    T Min = temp->data;

    if ((first == NULL))
    {
        cout << "Linked List Empty.\n";
        return 0;
    }
    else
    {
        while (temp != NULL)
        {
            if (temp->data < Min)
            {
                Min = temp->data;
            }
            temp = temp->next;

        }
    }

    return Min;
}

template <class T>
T SinglyLL<T>::FindMaximum()
{
    NodeS<T> *temp = first;
    T Max = 0;

    if ((first == NULL))
    {
        cout << "Linked List Empty.\n";
        return 0;
    }
    else
    {
        while (temp != NULL)
        {
            if (temp->data > Max)
            {
                Max = temp->data;
            }
            temp = temp->next;

        }
    }

    return Max;
}

template <class T>
T SinglyLL<T>::Summation()
{
    NodeS<T> *temp = first;
    T Sum = 0;
    

    if ((first == NULL))
    {
        cout << "Linked List Empty.\n";
        return 0;
    }
    else
    {
        while (temp != NULL)
        {
            Sum = Sum + temp->data;
            temp = temp->next;

        }
    }

    return Sum;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   DOUBLY LINEAR LINKED LIST
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
DoublyLL<T>::DoublyLL()
{
    head = NULL;
    iCount = 0;
}

template <class T>
void DoublyLL<T>::Display()
{
    NodeD<T> *temp = head;

    for (int i = 1; i <= iCount; i++)
    {
        cout << "| " << temp->data << " | <=> ";
        temp = temp->next;
    }
    cout << "\n";
}

template <class T>
int DoublyLL<T>::Count()
{
    return iCount;
}

template <class T>
void DoublyLL<T>::InsertFirst(T no)
{
    NodeD<T> *newn = new NodeD<T>;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if (head == NULL)
    {
        head = newn;
    }
    else
    {
        newn -> next = head;
        head = newn;
    }

    iCount++;
}

template <class T>
void DoublyLL<T>::InsertLast(T no)
{
    NodeD<T> *newn = new NodeD<T>;
    NodeD<T> *temp = head;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if (head == NULL)
    {
        head = newn;
    }
    else
    {
        for (int i = 1; i < iCount; i++)
        {
            temp = temp->next;
        }

        temp->next = newn;
        newn->prev = temp;
    }

    iCount++;
}

template <class T>
void DoublyLL<T>::DeleteFirst()
{

    if (head == NULL)
    {
        return;
    }
    else if (head->next == NULL)
    {
        delete head;
        head = NULL;
    }
    else
    {
        head = head->next;
        delete head -> prev;
        head -> prev = NULL;
    }

    iCount--;
}

template <class T>
void DoublyLL<T>::DeleteLast()
{
    NodeD<T> *temp = head;

    if (head == NULL)
    {
        return;
    }
    else if (head->next == NULL)
    {
        delete head;
        head = NULL;
    }
    else
    {
        for (int i = 1; i < (iCount - 1); i++)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }

    iCount--;
}

template <class T>
void DoublyLL<T>::InsertAtPos(T no, int ipos)
{
    NodeD<T> *temp = head;

    NodeD<T> *newn = new NodeD<T>;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if (ipos < 1)
    {
        cout << "Invalid Position\n";
    }

    if (ipos > iCount + 1)
    {
        cout << "Invalid Position\n";
    }

    if (ipos == 1)
    {
        InsertFirst(no);
    }
    else if (ipos == iCount + 1)
    {
        InsertLast(no);
    }
    else
    {
        for (int i = 1; i < ipos - 1; i++)
        {
            temp = temp->next;
        }

        newn -> next = temp -> next;
        temp -> next -> prev = newn;

        temp -> next = newn;
        newn -> prev = temp;
    }

    iCount++;
}


template <class T>
void DoublyLL<T>::DeleteAtPos(int ipos)
{
    NodeD<T> *temp = head;

    if (ipos < 1)
    {
        cout << "Invalid Position\n";
    }

    if (ipos > iCount)
    {
        cout << "Invalid Position\n";
    }

    if (ipos == 1)
    {
        DeleteFirst();
    }
    else if (ipos == iCount)
    {
        DeleteLast();
    }
    else
    {
        for (int i = 1; i < (ipos - 1); i++)
        {
            temp = temp->next;
        }

        temp -> next = temp -> next -> next;
        delete temp -> next -> prev;
        temp -> next -> prev = temp;       
    }

    iCount--;
}

template <class T>
int DoublyLL<T>::FirstOccurance(T No)
{
    NodeD<T> *temp = head;
    int iCnt = 1;

    if ((head == NULL))
    {
        cout << "Linked List Empty.\n";
        return 0;
    }
    else
    {
        while (temp->next != NULL)
        {
            if(temp -> data == No)
            {
                break;
            }
            temp = temp->next;
            iCnt++;
        }
    }

    return iCnt;
}

template <class T>
int DoublyLL<T>::LastOccurance(T No)
{
    NodeD<T> *temp = head;
    int iCnt = 0;
    int Occ = 0;

    if ((head == NULL))
    {
        cout << "Linked List Empty.\n";
        return 0;
    }
    else
    {
        for(int i = 1; i <= iCount; i++)
        {
            iCnt++;
            if(temp -> data == No)
            {
                Occ = iCnt;
            }
            temp = temp->next;
        }
    }

    return Occ;
}

template <class T>
int DoublyLL<T>::CalFrequency(T No)
{
    NodeD<T> *temp = head;
    int iCnt = 0;

    if ((head == NULL))
    {
        cout << "Linked List Empty.\n";
        return 0;
    }
    else
    {

        while(temp != NULL)
        {
            if (temp->data == No)
            {
                iCnt++;
            }

            temp = temp->next;            
        }
    }

    return iCnt;
}

template <class T>
T DoublyLL<T>::FindMinimum()
{
    NodeD<T> *temp = head;
    T Min = temp->data;

    if ((head == NULL))
    {
        cout << "Linked List Empty.\n";
        return 0;
    }
    else
    {
        while (temp != NULL)
        {
            if (temp->data < Min)
            {
                Min = temp->data;
            }
            temp = temp->next;

        }
    }

    return Min;
}

template <class T>
T DoublyLL<T>::FindMaximum()
{
    NodeD<T> *temp = head;
    T Max = 0;

    if ((head == NULL))
    {
        cout << "Linked List Empty.\n";
        return 0;
    }
    else
    {
        while (temp != NULL)
        {
            if (temp->data > Max)
            {
                Max = temp->data;
            }
            temp = temp->next;

        }
    }

    return Max;
}

template <class T>
T DoublyLL<T>::Summation()
{
    NodeD<T> *temp = head;
    T Sum = 0;
    

    if ((head == NULL))
    {
        cout << "Linked List Empty.\n";
        return 0;
    }
    else
    {
        while (temp != NULL)
        {
            Sum = Sum + temp->data;
            temp = temp->next;

        }
    }

    return Sum;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   SINGLY CIRCULAR LINEAR LINKED LIST
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////


template <class T>
SinglyCL<T>::SinglyCL()
{
    head = NULL;
    tail = NULL;
    iCount = 0;
}

template <class T>
void SinglyCL<T>::Display()
{
    NodeS<T> *temp = head;

    for (int i = 1; i <= iCount; i++)
    {
        cout << " | " << temp->data << " | ->";
        temp = temp->next;
    }
    cout << "\n";
}

template <class T>
int SinglyCL<T>::Count()
{
    return iCount;
}

template <class T>
void SinglyCL<T>::InsertFirst(T No)
{
    NodeS<T> *newn = new NodeS(No);

    if ((head == NULL) && (tail == NULL))
    {
        head = newn;
        tail = newn;
    }
    else
    {
        newn->next = head;
        head = newn;
    }
    tail->next = head;

    iCount++;
}

template <class T>
void SinglyCL<T>::InsertLast(T No)
{
    NodeS<T> *newn = new NodeS(No);

    if ((head == NULL) && (tail == NULL))
    {
        head = newn;
        tail = newn;
    }
    else
    {
        tail->next = newn;
        tail = tail->next;
    }
    tail->next = head;

    iCount++;
}

template <class T>
void SinglyCL<T>::DeleteFirst()
{
    if ((head == NULL) && (tail == NULL))
    {
        return;
    }
    else if (head == tail)
    {
        head = NULL;
        tail = NULL;
    }
    else
    {
        NodeS<T> *temp = head;

        head = head->next;
        delete temp;
    }
    tail->next = head;

    iCount--;
}

template <class T>
void SinglyCL<T>::DeleteLast()
{
    if ((head == NULL) && (tail == NULL))
    {
        return;
    }
    else if (head == tail)
    {
        head = NULL;
        tail = NULL;
    }
    else
    {
        NodeS<T> *temp = head;

        for (int i = 1; i < iCount - 1; i++)
        {
            temp = temp->next;
        }

        tail = temp;
        delete temp->next;
    }
    tail->next = head;

    iCount--;
}

template <class T>
void SinglyCL<T>::InsertAtPos(T No, int iPos)
{
    if((iPos < 1) || (iPos > iCount + 1))
    {
        printf("Invalid Position.\n");
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(No);
    }
    else
    {
        NodeS<T> *newn = new NodeS(No);
        NodeS<T> *temp = head;

        for(int i = 1; i < (iPos - 1); i++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp -> next = newn;
    }
    
    iCount++;
}

template <class T>
void SinglyCL<T>::DeleteAtPos(int iPos)
{
    if((iPos < 1) || (iPos > iCount))
    {
        printf("Invalid Position.\n");
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        NodeS<T> *temp = head;
        NodeS<T> *tempX = NULL;

        for(int i = 1; i < (iPos - 1); i++)
        {
            temp = temp -> next;
        }

        tempX = temp -> next;
        temp -> next = tempX -> next;
        delete tempX;
    }
    
    iCount--;
}

template <class T>
int SinglyCL<T>::FirstOccurance(T No)
{
    NodeS<T> *temp = head;
    int iCnt = 0;

    if ((head == NULL))
    {
        cout << "Linked List Empty.\n";
        return 0;
    }
    else
    {
        do
        {
            iCnt++;
            if(temp -> data == No)
            {
                break;
            }
            temp = temp->next;            
        }while(temp != head);
    }

    return iCnt;
}

template <class T>
int SinglyCL<T>::LastOccurance(T No)
{
    NodeS<T> *temp = head;
    int iCnt = 0;
    int Occ = 0;

    if ((head == NULL))
    {
        cout << "Linked List Empty.\n";
        return 0;
    }
    else
    {
        for(int i = 1; i <= iCount; i++)
        {
            iCnt++;
            if(temp -> data == No)
            {
                Occ = iCnt;
            }
            temp = temp->next;
        }
    }

    return Occ;
}

template <class T>
int SinglyCL<T>::CalFrequency(T No)
{
    NodeS<T> *temp = head;
    int iCnt = 0;

    if ((head == NULL))
    {
        cout << "Linked List Empty.\n";
        return 0;
    }
    else
    {

        do
        {
            if (temp->data == No)
            {
                iCnt++;
            }

            temp = temp->next;            
        }while(temp != head);
    }

    return iCnt;
}

template <class T>
T SinglyCL<T>::FindMinimum()
{
    NodeS<T> *temp = head;
    T Min = temp->data;

    if ((head == NULL))
    {
        cout << "Linked List Empty.\n";
        return 0;
    }
    else
    {
        do
        {
            if (temp->data < Min)
            {
                Min = temp->data;
            }
            temp = temp->next;

        }while (temp != head);
    }

    return Min;
}

template <class T>
T SinglyCL<T>::FindMaximum()
{
    NodeS<T> *temp = head;
    T Max = 0;

    if ((head == NULL))
    {
        cout << "Linked List Empty.\n";
        return 0;
    }
    else
    {
        do
        {
            if (temp->data > Max)
            {
                Max = temp->data;
            }
            temp = temp->next;

        }while (temp != head);
    }

    return Max;
}

template <class T>
T SinglyCL<T>::Summation()
{
    NodeS<T> *temp = head;
    T Sum = 0;
    

    if ((head == NULL))
    {
        cout << "Linked List Empty.\n";
        return 0;
    }
    else
    {
        do
        {
            Sum = Sum + temp->data;
            temp = temp->next;

        }while (temp != head);
    }

    return Sum;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   DOUBLY CIRCULAR LINEAR LINKED LIST
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////


template <class T>
DoublyCL<T>::DoublyCL()
{
    head = NULL;
    tail = NULL;
    iCount = 0;
}

template <class T>
void DoublyCL<T>::Display()
{
    NodeD<T> * temp = head;

    for(int i = 1; i <= iCount; i++)
    {
        cout<<"| "<<temp->data<<" | <=>";
        temp = temp -> next;
    }
    cout<<" NULL\n";
}

template <class T>
int DoublyCL<T>::Count()
{
    return iCount;
}

template <class T>
void DoublyCL<T>::InsertFirst(T No)
{
    NodeD<T> *newn = new NodeD(No);

    if((head == NULL) && (tail == NULL))
    {
        head = newn;
        tail = newn;        
    }
    else 
    {
        newn -> next = head;
        head -> prev = newn;
        head = newn;        
    }
    head -> prev = tail;
    tail -> next = head;

    iCount++;
}

template <class T>
void DoublyCL<T>::InsertLast(T No)
{
    NodeD<T> *newn = new NodeD(No);

    if((head == NULL) && (tail == NULL))
    {
        head = newn;
        tail = newn;        
    }
    else 
    {
        tail -> next = newn;
        newn -> prev = tail;
        tail = tail -> next;         
    }
    head -> prev = tail;
    tail -> next = head;

    iCount++;
}

template <class T>
void DoublyCL<T>::DeleteFirst()
{
    if((head == NULL) && (tail == NULL))
    {
        return;       
    }
    else if(head == tail)
    {
        head = NULL;
        tail = NULL;         
    }
    else
    {
        head = head -> next;
        delete (head -> prev);
    }
    head -> prev = tail;
    tail -> next = head;

    iCount--;
}

template <class T>
void DoublyCL<T>::DeleteLast()
{
    if((head == NULL) && (tail == NULL))
    {
        return;       
    }
    else if(head == tail)
    {
        head = NULL;
        tail = NULL;         
    }
    else
    {
        tail = tail -> prev;
        delete tail -> next;
    }
    head -> prev = tail;
    tail -> next = head;

    iCount--;
}

template <class T>
void DoublyCL<T>:: InsertAtPos(T No, int iPos)
{
    if((iPos < 1) || (iPos > iCount + 1))
    {
        cout<<"Invalid Position.\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(No);
    }
    else
    {
        NodeD<T> *temp = head;

        for(int i = 1; i < (iPos -1); i++)
        {
            temp = temp -> next;
        }
        NodeD<T> *newn = new NodeD(No);

        newn -> next = temp -> next;
        temp -> next -> prev = newn;

        temp -> next = newn;
        newn -> prev = temp;        
    }
    iCount++;
}

template <class T>
void DoublyCL<T>:: DeleteAtPos(int iPos)
{
    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid Position.\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        NodeD<T> *temp = head;

        for(int i = 1; i < (iPos -1); i++)
        {
            temp = temp -> next;
        }

        temp -> next = temp -> next -> next;
        delete temp -> next -> prev;
        temp -> next -> prev = temp;      
    }
    iCount--;
}

template <class T>
int DoublyCL<T>::FirstOccurance(T No)
{
    NodeD<T> *temp = head;
    int iCnt = 1;

    if ((head == NULL) && (tail == NULL))
    {
        cout << "Linked List Empty.\n";
        return 0;
    }
    else
    {
        while (temp != head)
        {
            if(temp -> data == No)
            {
                break;
            }
            temp = temp->next;
            iCnt++;
        }
    }

    return iCnt;
}

template <class T>
int DoublyCL<T>::LastOccurance(T No)
{
    NodeD<T> *temp = tail;
    int iCnt = iCount;

    if ((head == NULL) && (tail == NULL))
    {
        cout << "Linked List Empty.\n";
        return 0;
    }
    else
    {
        while (temp->data != No)
        {
            temp = temp->prev;
            iCnt--;
        }
    }

    return iCnt;
}

template <class T>
int DoublyCL<T>::CalFrequency(T No)
{
    NodeD<T> *temp = head;
    int iCnt = 0;

    if ((head == NULL) && (tail == NULL))
    {
        cout << "Linked List Empty.\n";
        return 0;
    }
    else
    {
        do
        {
            if (temp->data == No)
            {
                iCnt++;
            }
            temp = temp->next;
            
        }while (temp != head);
    }

    return iCnt;
}

template <class T>
T DoublyCL<T>::FindMinimum()
{
    NodeD<T> *temp = head;
    T Min = temp->data;

    if ((head == NULL) && (tail == NULL))
    {
        cout << "Linked List Empty.\n";
        return 0;
    }
    else
    {
        do
        {
            if (temp->data < Min)
            {
                Min = temp->data;
            }
            temp = temp->next;

        }while (temp != head);
    }

    return Min;
}

template <class T>
T DoublyCL<T>::FindMaximum()
{
    NodeD<T> *temp = head;
    T Max = 0;

    if ((head == NULL) && (tail == NULL))
    {
        cout << "Linked List Empty.\n";
        return 0;
    }
    else
    {
        do
        {
            if (temp->data > Max)
            {
                Max = temp->data;
            }
            temp = temp->next;

        }while (temp != head);
    }

    return Max;
}

template <class T>
T DoublyCL<T>::Summation()
{
    NodeD<T> *temp = head;
    T Sum = 0;
    

    if ((head == NULL) && (tail == NULL))
    {
        cout << "Linked List Empty.\n";
        return 0;
    }
    else
    {
        do
        {
            Sum = Sum + temp->data;
            temp = temp->next;

        }while (temp != head);
    }

    return Sum;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   CREATE ARRAY
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
ArrayX<T>:: ArrayX(int iNo)
{
    this->iSize = iNo;
    this->Arr = new T[iSize];
}

template <class T>
ArrayX<T> :: ~ArrayX()
{
    delete []Arr;
}

template <class T>
void ArrayX<T> :: Accept()
{
    cout<<"Enter the elements : \n";
    for(int iCnt = 0; iCnt < iSize ; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

template <class T>
void ArrayX<T> :: Display()
{    
    cout<<"Elements of array are: \n";
    for(int iCnt = 0; iCnt < iSize ; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   LINEAR SEARCH
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
bool ArrayX<T> :: LinearSearch(T No)
{
    bool flag  = false;

    for(int iCnt = 0; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] == No)
        {
            flag = true;
            break;
        }
    }
    return flag;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   BIDIRECTIONAL SEARCH
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
bool ArrayX<T> :: BidirectinalSearch(T No)
{
    bool flag  = false;
    int iStart = 0;
    int iEnd = iSize - 1;

    while(iStart <= iEnd)
    {
        if((Arr[iStart] == No) || (Arr[iEnd] == No))
        {
            flag = true;
            break;
        }
        iStart++;
        iEnd--;
    }
    return flag;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   BINARY SEARCH (IF ARRAY IS SORTED)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
bool ArrayX<T> :: BinarySearch(T No)
{
    bool flag = false;

    int iStart = 0, iEnd = 0, iMid = 0;
    
    iStart = 0;
    iEnd = iSize - 1;

    while(iStart <= iEnd)
    {
        iMid = iStart + (iEnd - iStart) / 2;
        if( (Arr[iMid] == No) || (Arr[iStart] == No) || (Arr[iEnd] == No))
        {
            flag = true;
            break;
        }
        else if(Arr[iMid] < No)
        {
            iStart = iMid + 1;
        }
        else if(Arr[iMid] > No)
        {
            iEnd = iMid - 1;
        }
    }
    return flag;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  CHECKSORTED
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
bool ArrayX<T> :: CheckSorted()
{
    int iCnt = 0;
    bool flag = true;

    for(iCnt = 0; iCnt < iSize-1; iCnt++)
    {
        if(Arr[iCnt] <= Arr[iCnt+1])
        {
            continue;
        }
        else 
        {
            flag = false;
            break;
        }
    }
    return flag;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   SELECTION SORT
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void ArrayX <T>::SelectionSort()
{
    int i = 0, j = 0, min_index = 0;
    T temp;

    for(i = 0; i < iSize-1; i++)
    {
        min_index = i;

        for(j = i+1; j < iSize; j++)
        {
            if(Arr[j] < Arr[min_index])
            {
                min_index = j;
            }
        }
        temp = Arr[i];
        Arr[i] = Arr[min_index];
        Arr[min_index] = temp;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   INSERTION SORT
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void ArrayX <T>::InsertionSort()
{
    int i =0, j = 0;
    T selected;

    for(i = 1; i < iSize; i++)
    {
        for(j = i -1, selected = Arr[i] ; ((j >= 0) && (Arr[j] > selected)) ; j--)
        {
            Arr[j + 1] = Arr[j];
        }
        Arr[j + 1] = selected;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   BINARY SEARCH TREE FUNCTIONS  
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////


template <class T>
BST<T>::BST()
{
    head = NULL;
}

template <class T>
void BST<T>::Insert(T No)
{
    NodeB<T> * newn = new NodeB(No);
    NodeB<T> * temp = head;

    if(head == NULL)
    {
        head = newn;
    }
    else
    {
        while(1)
        {
            if(temp->data == No)
            {
                cout<<"Dupliacte Element.\n";
                delete newn;
                break;
            }
            else if(No < temp->data)
            {
                if(temp->left == NULL)
                {
                    temp->left = newn;
                    break;
                }
                temp = temp->left;
            }
            else if(No > temp->data)
            {
                if(temp->right == NULL)
                {
                    temp->right = newn;
                    break;
                }
                temp = temp->right;
            }
        }
    }
}

template <class T>
bool BST<T>::Search(T No)
{
    NodeB<T>* temp = head;
    bool bflag = false;

    while(temp != NULL)
    {
        if(temp->data == No)
        {
            bflag = true;
            break;
        }
        else if(No < temp->data)
        {
            temp = temp->left;
        }
        else if(No > temp->data)
        {
            temp = temp->right;
        }
    }

    return bflag;

}


template <class T>
void BST<T>:: PreorderF(NodeB<T>* head)
{
    NodeB<T>* temp = head;

    if(temp != NULL)
    {
        cout<<temp->data<<"\t";
        PreorderF(temp->right);
        PreorderF(temp->left);
    }
   
}

template <class T>
void BST<T>:: PostOrderF(NodeB<T>* head)
{
    NodeB<T>* temp = head;

    if(temp != NULL)
    {

        PostOrderF(temp->right);
        PostOrderF(temp->left);
        cout<<temp->data<<"\t";
    }
    
}

template <class T>
void BST<T>:: InOrderF(NodeB<T>* head)
{
    NodeB<T>* temp = head;

    if(temp != NULL)
    {

        InOrderF(temp->right);
        cout<<temp->data<<"\t";
        InOrderF(temp->left);
        
    }
    
}

template <class T>
int BST<T>::CountNodesF(NodeB<T>* head)
{
    static int iCnt = 0;
    NodeB<T>* temp = head;

    if(head != NULL)
    {
        iCnt++;
        CountNodesF(temp->left);
        CountNodesF(temp->right);
    }

    return iCnt;
}

template <class T>
int BST<T>::CountLeafNodesF(NodeB<T>* head)
{
    static int iCnt = 0;
    NodeB<T>* temp = head;

    if(temp != NULL)
    {
        if((temp->left == NULL) && (temp->right == NULL))
        {
            iCnt++;
        }
        CountLeafNodes(temp->left);
        CountLeafNodes(temp->right);
    }

    return iCnt;
}

template <class T>
int BST<T>::CountParentNodesF(NodeB<T>* head)
{
    static int iCnt = 0;
    NodeB<T>* temp = head;

    if(temp != NULL)
    {
        if((temp->left == NULL) || (temp->right == NULL))
        {
            iCnt++;
        }
        CountParentNodes(temp->left);
        CountParentNodes(temp->right);
    }

    return iCnt;
}

template <class T>
void BST<T>::Preorder()
{
    PreorderF(head);
    cout<<"\n";
}

template <class T>
void BST<T>::Postorder()
{
    PostOrderF(head);
    cout<<"\n";
}

template <class T>
void BST<T>::Inorder()
{
    InOrderF(head);
    cout<<"\n";
}

template <class T>
int BST<T>::CountNodes()
{
    int iCount = CountNodesF(head);
    return iCount;
}

template <class T>
int BST<T>::CountLeafNodes()
{
    int iCount = CountLeafNodesF(head);
    return iCount;
}

template <class T>
int BST<T>::CountParentNodes()
{
    int iCount = CountLeafNodesF(head);
    return iCount;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   STACK FUNCTIONS  
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
Stack<T>::Stack()
{
    head = NULL;
    iCount = 0;
}

template <class T>
void Stack<T>::Push(T No)
{
    NodeS<T> *newn = new NodeS(No);
    NodeS<T> *temp = head;

    if(head == NULL)
    {
        head = newn;
    }
    else
    {

        for(int i = 1; i < iCount; i++)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
    iCount++;    
}

template <class T>
void Stack<T>::Pop()
{
    NodeS<T> *temp = head;

    for(int i = 1; i < iCount - 1; i++)
    {
        temp = temp -> next;
    }
    
    delete temp -> next;

    temp -> next = NULL;

    iCount--;    
}

template <class T>
void Stack<T>::Display()
{
    NodeS<T> *temp = head;

    for(int i = 1; i <= iCount; i++)
    {
        cout<<" | "<<temp -> data<<" | -> ";
        temp = temp -> next;
    }
    cout<<"\n";
}

template <class T>
int Stack<T>::Count()
{
    return iCount;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   QUEUE FUNCTIONS  
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
Queue<T>::Queue()
{
    head = NULL;
    iCount = 0;
}

template <class T>
void Queue<T>::Enqueue(T No)
{
    NodeS<T> *newn = new NodeS(No);
    NodeS<T> *temp = head;

    if(head == NULL)
    {
        head = newn;
    }
    else
    {

        for(int i = 1; i < iCount; i++)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
    iCount++;    
}

template <class T>
void Queue<T>::Dequeue()
{
    NodeS<T> *temp = head;

    head = head -> next;

    delete temp;

    iCount--;    
}

template <class T>
void Queue<T>::Display()
{
    NodeS<T> *temp = head;

    for(int i = 1; i <= iCount; i++)
    {
        cout<<" | "<<temp -> data<<" | -> ";
        temp = temp -> next;
    }
    cout<<"\n";
}

template <class T>
int Queue<T>::Count()
{
    return iCount;
}

int main()
{
    return 0;   
}