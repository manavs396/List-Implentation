

// main.c 

#include <stdio.h>
#include "LIST.h"
int ptr_look(int *temp1, int *temp2){
     int k=0;
     if(*temp1 == *temp2){
        k++;
        return k;
     }
     return k;
}
void free_stat(int *val){} //free the item
                                                 // These functions will debug once at a time
int main()
{
    // variables for new_list
	  int x = 5;                                      
    int y = 10;                                  /// Use the following function once at a time
    int z = 15;  
    // variables for new_list1
    int a = 20;  
    int b = 25;
    int c = 30;
    int *data;

    puts("Listcreate test begin");
    
    list *new_list=ListCreate();
    list *new_list1=ListCreate();
    listPrint(new_list);
    listPrint(new_list1);
    puts("\n---------------------------Insertlist-listcount for test comments out thanks!!-------------------------------------\n");
  
    

    puts("listinsert is working on tests"); 
    
    ListInsert(new_list, &z);
    ListInsert(new_list, &y);
    ListInsert(new_list, &x);

    ListInsert(new_list1, &c);
    ListInsert(new_list1, &b);
    ListInsert(new_list1, &a);

    //puts("First list elements are:");
    //listPrint(new_list);
    //puts("\n");

    //puts("Second list elements are:");
    //listPrint(new_list1);
    
    puts("Listcount test begin");

    int k= ListCount(new_list);
    printf("No. of elements in list1 are %d\n",k);
    
    int j= ListCount(new_list1);
    printf("No. of elements in list2 are %d\n",j);



puts("\n------------------listfirst-listlast-listcurr for test toogle blockcomments thanks!! -----------------------------------\n");

   /* puts("listfirst listlast, listcurr is working on tests ");

      data=ListFirst(new_list);
      if(*data==x){
        puts("you at the right location correct!!");
      }
      else
        puts("it is error");

       data=ListCurr(new_list);
       if(*data==x){
        puts("listcurr() is working correct");
       }
       else{
        puts("error");
       }

      data=ListLast(new_list);
      if(*data==z){
        puts("listLast() is working correct!!");
      }
      else
      {
        puts("it is error");
      }
*/


    
puts("\n-------------------------listprev for test toogle back comments thanks!----------------------------------\n");
    

    // puts("listprev is working in tests");
    // data=ListPrev(new_list);
    // if(data==NULL)
    // {
    //     puts("Listprev() is not working for out of bounds for list1 correct!!");
    // }
    // else
    // {
    //     puts("its an error");
    // }

    // data=ListPrev(new_list1);
    // if(data==NULL)
    // {
    //     puts("Listprev() is not working for out of bounds for list2 correct!!");
    // }
    // else
    // {
    //     puts("its an error");
    // }




puts("\n-----------------------------listnext and put comments out for test thanks!! ------------------------\n");

    

    puts("listnext, listadd is working on tests");
    data=ListNext(new_list);
    if(data==NULL)
    {
        puts("its error listnext() return NULL");
    }
    else if((int)data==5){
        puts(" its error!!");
      
    }
    else{
        printf("ListNext returns: %d\n", *data);
    }

     listPrint(new_list);

    
    printf("listadd function is on test now it will add 20 :%d\n", ListAdd(new_list,&a));
    //listPrint(new_list);
     
     printf("listadd function is on test now it will add 25 :%d\n", ListAdd(new_list,&b));
    listPrint(new_list);







puts("\n-----------------------listremove-listappend-listprepend for  test comments out thanks!!------------------------------\n");

    
    // puts("list append Function, list prepend and list remove  is on test ");

    // printf("removing 1st element list1 empty%d\n", ListRemove(new_list));
    // listPrint(new_list);
    // puts("list append func is working now ");

    //  printf("adding at the back the element in list1%d\n", ListAppend(new_list,&x));

    // listPrint(new_list);
    // puts("list prepend is working now");
    
    // printf("adding at the front in list1 %d\n",ListPrepend(new_list,&x) );
    
    // listPrint(new_list);

   

puts("\n----------------------listconcat for test comments out thanks!!-------------------------------\n");


    // puts("listconcat function, is on tests:");
    // ListConcat(new_list,new_list1);
    // puts("add list2 after list1");
    // listPrint(new_list);

    //  puts("Now list2 will be empty if yes then correct!!");
    // listPrint(new_list1);
    



puts("\n---------------------listfree for test comments out thanks!! --------------------------------\n");

    
    // puts("listfree is working on tests:");
    // new_list=ListCreate();
    // ListAdd(new_list, &x);
    // ListAdd(new_list, &y);
    // ListAdd(new_list,&z);
    // listPrint(new_list);
    // puts("List free function is Using");
    // ListFree(new_list,free_stat);
    // listPrint(new_list);
    // puts("it delete the list");
    


puts("\n----------------------listtrim for test comments out thanks!! -------------------------------\n");


  // puts("listtrim() is working");
  // listPrint(new_list);
  // data=ListTrim(new_list);
  // puts("It remove the last item and current item will be point to last");
  // listPrint(new_list);


puts("\n------------------------listsearch for test comments out thanks!! -----------------------------\n");
   
    // int xy=25;
    // puts("listsearch is on tests");
    // ListAdd(new_list,&a);
    // ListAdd(new_list,&b);
    // ListAdd(new_list,&c);
    // listPrint(new_list);
    // int *list_look;
    // list_look=ListSearch(new_list,ptr_look , &xy);
    // if(list_look)
    //     printf("the value returned from listsearch is and you are correct!! %d\n ",*(int*)list_look);
    // else
    //     puts("the value is returned is NULL, its is not there");



    return 0;
    }

