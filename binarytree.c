#include <stdio.h>
#include <stdlib.h>

//minichallenge create the Node
typedef struct NODE
{
    int value;
    struct NODE *high;
    struct NODE *low;
} NODE;

NODE *rootNode;


void addNode(int value)
{
    NODE *newNode = malloc(sizeof(NODE));
    newNode->value = value;
    newNode->high = NULL;
    newNode->low = NULL;

    if(rootNode == NULL)
    {
        rootNode = newNode;
        return;
    }
    //if value of new node is less the root node attach to low
    NODE *trav = rootNode;

    while(1)
    {
        if(newNode->value < trav->value)
        {
            if(trav->low == NULL)
                {

                    trav->low = newNode;
                    return;
                }

            trav = trav->low;
            continue;
        }
    else
    {
            if(trav->high == NULL)
            {
                trav->high = newNode;
                return;
            }
            trav = trav->high;
            continue;
        }
    }

}


void displayTreeOnEnter(NODE *curNode)
{
   printf("%i\n", curNode->value);

   if(curNode->low)
   {
       displayTreeOnEnter(curNode->low);

   }
   if(curNode->high)
   {
       displayTreeOnEnter(curNode->high);
   }
}

void displayTreeOnDeparture(NODE *curNode)
{



   if(curNode->low)
   {
       displayTreeOnDeparture(curNode->low);

   }

   if(curNode->high)
   {
       displayTreeOnDeparture(curNode->high);
   }
   printf("%i, ", curNode->value);

}

int doesContain(int value){

        printf("%i, ", );
        if(value == rootNode->value)
        {

            return 1;

        }

        else{
            return 0;
        }

}
int main(void)
{
   printf("hello\n");
   addNode(10);
   addNode(8);
   addNode(15);
   addNode(17);
   addNode(20);
   addNode(18);
   addNode(5);
   addNode(6);
   addNode(9);
   addNode(4);
   addNode(13);
   addNode(7);
//   displayTreeOnEnter(rootNode);
   displayTreeOnDeparture(rootNode);
   printf("\n");

   doesContain(5);
   printf("\n");

 }