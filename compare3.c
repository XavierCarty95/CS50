printf("%i, ", curNode->value);
   if(curNode->high)
   {
       displayTreeOnDeparture(curNode->high);

   }


   if(curNode->low)
   {

      displayTreeOnDeparture(curNode->low);
   }