#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"files_header.h"
int main()
{ 
  printf("Name:- SHEETAL KUMARI");
  printf("\nRoll No:- 2029168");

  time_t t;   
  time(&t);
int a;
  printf("\nThis program has been writeen at (date and time): %s", ctime(&t));
  m:
  printf("Enter 1 for main menu , 0 for Exit!\n");
  
  scanf("%d",&a);
  if(a==0)
  {   
    return 0;
  }
  else
  goto p;  

  int choice1,choice2,choice3,choice4,choice5,choice6,choice7,choice8,choice9;
  p:
  printf("\nPress 1 for Class 1");
  printf("\nPress 2 for Class 2");
  printf("\nPress 3 for Class 3");
  printf("\nPress 4 for Class 4");
  printf("\nPress 5 for Class 5");
  printf("\nPress 6 for Class 6");
  printf("\nPress 7 for Class 7");
  printf("\nPress 8 for Class 8");
  printf("\nPress 9 for Class 9");
  printf("\nEnter your choice : ");
  scanf("%d",&choice1);
  switch(choice1)
  {
    case 1:
      printf("\nYou have selected Class 1");
      printf("\n1) WAP to find out the smallest and largest element stored in an array of n integers.");
      printf("\n2) WAP to reverse the contents of an array of n elements.");
      printf("\n3) WAP to search an element in an array of n numbers.");
      printf("\n4) WAP to sort an array of n numbers.");
      printf("\n5)Given an unsorted array of size n, WAP to find and display the number of elements between two elements a and b (both inclusive). E.g. Input: arr = [1, 2, 3, 7, 5, 4], a=2 and b=5, Output: 4 and the numbers are: 2, 3, 7, 5. Do not need to perform sorting operation. \n");
      scanf("%d",&choice2);
      switch(choice2)
      {
        case 1:
          printf("\nYou have selected Q1\n");
          c1_1();
          goto m;
          break;
        case 2:
          printf("\nYou have selected Q2\n");
          c1_2();
          goto m;
          break;
        case 3:
          printf("\nYou have selected Q3\n");
          c1_3();
          goto m;
          break;
        case 4:
          printf("\nYou have selected Q4\n");
          c1_4();
          goto m;
          break;
        case 5:
          printf("\nYou have selected Q5\n");
          c1_5();
          goto m;
          break;
        
      }
    case 2:
      printf("\nYou have selected Class 2");
      printf("\n1) WAP to sort an array of n numbers.");
      printf("\n2) Given an unsorted array arr and two numbers x and y, find the minimum distance between x and y in arr. The array might also contain duplicates. You may assume that both x and y are different and present in arr. Input: arr[ ] = {3, 5, 4, 2, 6, 5, 6, 6, 5, 4, 8, 3}, x = 3, y = 6 Output: Minimum distance between 3 and 6 is 4.");
      printf("\n3) WAP to find out the second smallest and second largest element stored in an array.");
      printf("\n4) WAP to arrange the elements of an array such that all even numbers are followed by all odd numbers.");
      printf("\n5) WAP to replace every array element by multiplication of previous and next of an n element.\n");
      printf("\n6) WAP to find the largest number and counts the occurrence of the largest number in an array of n integers using a single loop.");
      printf("\n7) You are given an array of 0s and 1s in random order. Segregate 0s on left side and 1s on right side of the array. Traverse array only once.");
      printf("\n8) Given an unsorted array of size n, WAP to find and display the number of elements between two elements a and b (both inclusive). E.g. Input : arr = [1, 2, 2, 7, 5, 4], a=2 and b=5, Output : 4 and the numbers are: 2, 2, 5, 4.");
      printf("\n9) WAP to find out the kth smallest and kth largest element stored in a dynamic array of n integers, where k<n.");
      scanf("%d",&choice2);
      switch(choice2)
      {
        case 1:
          printf("\nYou have selected Q1\n");
          c2_1();
          goto m;
          break;
        case 2:
          printf("\nYou have selected Q2\n");
          c2_2();
          goto m;
          break;
        case 3:
          printf("\nYou have selected Q3\n");
          c2_3();
          goto m;
          break;
        case 4:
          printf("\nYou have selected Q4\n");
          c2_4();
          goto m;
          break;
        case 5:
          printf("\nYou have selected Q5\n");
          c2_5();
          goto m;
          break;
        case 6:
          printf("\nYou have selected Q6\n");
          c2_6();
          goto m;
          break;
        case 7:
          printf("\nYou have selected Q7\n");
          c2_7();
          goto m;
          break;
        case 8:
          printf("\nYou have selected Q8\n");
          c2_8();
          goto m;
          break;
        case 9:
          printf("\nYou have selected Q9\n");
          c2_9();
          goto m;
          break;
      }
    case 3:
      printf("\nYou have selected Class 3");
      printf("\n1) WAP to store n employee’s data such as employee name, gender, designation, department, basic pay. Calculate the gross pay of each employees as follows: Gross pay = basic pay + HR + DA HR=25% of basic and DA=75% of basic.");
      printf("\n2) WAP to add two distances (in km-meter) by passing structure to a function.");
      printf("\n3) Write a menu driven program to perform the following operations in a single linked list by using suitable user defined functions for each case. a) Create a list and display the list. b) Check if the list is empty.\n");
      scanf("%d",&choice3);
      switch(choice3)
      {
        case 1:
          printf("\nYou have selected Q1\n");
          c3_1();
          goto m;
        break;
        case 2:
          printf("\nYou have selected Q2\n");
          c3_2();
          goto m;
        break;
        case 3:
         printf("\nYou have selected Q3\n");
         c3_3();
         goto m;
        break;  
      }
    case 4:
      printf("\nYou have selected Class 4");
      printf("\nCreate a single linked list and perform following operations:");
      printf("\n1) (a) Insert the new list at any position.  (b) Insert the new list in front.  (c) Insert the new list at the end.");
      printf("\n2) (a) Delete the list from any postion.  (b) Delete the list fromthe front.  (c) Delete the list from the end.");
      printf("\n3) WAP to search an element in a simple linked list, if found delete that node and insert that node at beginning. Otherwise display an appropriate message.");
      printf("\n4) WAP to check whether a singly linked list is a palindrome or not.");
      printf("\n5) WAP to display the contents of a linked list in reverse order.");
      printf("\n5) Given a singly linked list, rotate the linked list counter-clockwise by k nodes. Where k is a given positive integer. For example, if the given linked list is 10->20->30->40->50->60 and k is 4, the list should be modified to 50->60->10->20->30->40. Assume that k is smaller than the count of nodes in linked list.");
      printf("\n7) WAP to remove duplicates from a linked list of n nodes.\n");
      scanf("%d",&choice4);
      switch(choice4)
      {
        case 1:
          printf("\nYou have selected Q1\n");
          c4_1();
          goto m;
          break;
        case 2:
          printf("\nYou have selected Q2\n");
          c4_2();
          goto m;
          break;
        case 3:
          printf("\nYou have selected Q3\n");
          c4_3();
          goto m;
          break;
        case 4:
          printf("\nYou have selected Q4\n");
          c4_4();
          goto m;
          break;
        case 5:
          printf("\nYou have selected Q5\n");
          c4_5();
          goto m;
          break;
        case 6:
          printf("\nYou have selected Q6\n");
          c4_6();
          goto m;
          break;
        case 7:
          printf("\nYou have selected Q7\n");
          c4_7();
          goto m;
          break;
      }
    case 5:
      printf("\nYou have selected Class 5");
      printf("\n1) WAP to create a double linked list of n nodes and display the linked list by using suitable user defined functions for create and display operations.");
      printf("\n2) WAP to reverse the sequence elements in a double linked list.");
      printf("\n3) Write a menu driven program to perform the following operations in a double linked list by using suitable user defined functions for each case.a) Traverse the list forward,b) Traverse the list backward, c) Check if the list is empty d) Insert a node at the certain position (at beginning/end/any position) e) Delete a node at the certain position (at beginning/end/any position) f) Delete a node for the given key, g) Count the total number of nodes, h) Search for an element in the linked list Verify &amp; validate each function from main method"); 
      printf("\n4) WAP to create a single circular double linked list of n nodes and display the linked list by using suitable user defined functions for create and display operations.");
      printf("\n5) WAP to remove the duplicates in a sorted double linked list.");
      printf("\n6) WAP to convert a given singly linked list to a circular list.");
      printf("\n7) WAP to implement a doubly linked list by using singly linked.\n");
      printf("\n8) WAP to print the middle of a double linked list.");
      printf("\n9) Given a double linked list, rotate the linked list counter-clockwise by k nodes. Where k is a given positive integer. For example, if the given linked list is 10-&gt;20-&gt;30-&gt;40-&gt;50-&gt;60 and k is 4, the list should be modified to 50-&gt;60-&gt;10-&gt;20-&gt;30-&gt;40. Assume that k is smaller than the count of nodes in linked list.");
      scanf("%d",&choice5);
      switch(choice5)
      {
        case 1:
          printf("\nYou have selected Q1\n");
          c5_1();
          goto m;
          break;
        case 2:
          printf("\nYou have selected Q2\n");
          c5_2();
          goto m;
          break;
        case 3:
          printf("\nYou have selected Q3\n");
          c5_3();
          goto m;
          break;
        case 4:
          printf("\nYou have selected Q4\n");
          c5_4();
          goto m;
          break;
        case 5:
          printf("\nYou have selected Q5\n");
          c5_5();
          goto m;
          break;
        case 6:
          printf("\nYou have selected Q6\n");
          c5_6();
          goto m;
          break;
        case 7:
          printf("\nYou have selected Q7\n");
          c5_7();
          goto m;
          break;
        case 8:
          printf("\nYou have selected Q8\n");
          c5_8();
          goto m;
          break;
        case 9:
          printf("\nYou have selected Q9\n");
          c5_9();
          goto m;
          break;
      }
    case 6:
      printf("\nYou have selected Class 6");
      printf("\n1) WAP Write a menu driven program to perform the following operations of a stack using array by using suitable user defined functions for each case. a) Check if the stack is empty b) Display the contents of stack c) Push d) Pop");
      printf("\n2) WAP Write a menu driven program to perform the following operations of a stack using linked list by using suitable user defined functions for each case.");
      printf("\n3) WAP to convert an infix expression into its equivalent postfix notation");
      printf("\n4) WAP to convert an infix expression into its equivalent prefix notation.");
      printf("\n5) Two brackets are considered to be a matched pair if the an opening bracket (i.e., (, [, or { ) occurs to the left of a closing bracket (i.e., ), ], or }) of the exact same type. There are three types of matched pairs of brackets: [], {}, and (). A matching pair of brackets is not balanced if the set of brackets it encloses are not matched. WAP to determine whether the input sequence of brackets is balanced or not. If a string is balanced, it print YES on a new line; otherwise, print NO on a new line. Example: Input: {[()]} and Output: YES Input: {[(])} and Output: NO");
      printf("\n6) WAP to reverse a stack with using extra stack.");
      printf("\n7) WAP to sort the elements inside a stack using only push and pop operation. Any number of additional stacks may be used.\n");
      scanf("%d",&choice6);
      switch(choice6)
      {
        case 1:
          printf("\nYou have selected Q1\n");
          c6_1();
          goto m;
          break;
        case 2:
          printf("\nYou have selected Q2\n");
          c6_2();
          goto m;
          break;
        case 3:
          printf("\nYou have selected Q3\n");
          c6_3();
          goto m;
          break;
        case 4:
          printf("\nYou have selected Q4\n");
          c6_4();
          goto m;
          break;
        case 5:
          printf("\nYou have selected Q5\n");
          c6_5();
          goto m;
          break;
        case 6:
          printf("\nYou have selected Q6\n");
          c6_6();
          goto m;
          break;
        case 7:
          printf("\nYou have selected Q7\n");
          c6_7();
          goto m;
          break;
      }
    case 7:
      printf("\nYou have selected Class 7");
      printf("\n1) WAP to implement a stack which will support three additional operations in addition to push and pop: a) peekLowestElement - return the lowest element in the stack without removing it from the stack b) peekHighestElement - return the highest element in the stack without removing it from the stack c) peekMiddleElement - return the (size/2+1) th lowest element in the stack without removing it from the stack.");
      printf("\n2) Write a menu driven program to implement queue operations such as Enqueue, Dequeue, Peek, Display of elements, IsEmpty, IsFull using static array.");
      printf("\n3) Write a menu driven program to implement queue operations such as Enqueue, Dequeue, Peek, Display of elements, IsEmpty using linked list.");
      printf("\n4) WAP using a function to reverse a queue by using stack.");
      printf("\n5) Write a menu driven program to implement circular queue operations such as Enqueue, Dequeue, Peek, Display of elements, IsEmpty, IsFull using static array.");
      printf("\n6) Write a menu driven program to implement circular queue operations such as Enqueue, Dequeue, Peek, Display of elements, IsEmpty using linked list.\n");
      scanf("%d",&choice7);
      switch(choice7)
      {
        case 1:
          printf("\nYou have selected Q1\n");
          c7_1();
          goto m;
          break;
        case 2:
          printf("\nYou have selected Q2\n");
          c7_2();
          goto m;
          break;
        case 3:
          printf("\nYou have selected Q3\n");
          c7_3();
          goto m;
          break;
        case 4:
          printf("\nYou have selected Q4\n");
          c7_4();
          goto m;
          break;
        case 5:
          printf("\nYou have selected Q5\n");
          c7_5();
          goto m;
          break;
        case 6:
          printf("\nYou have selected Q6\n");
          c7_6();
          goto m;
          break;
      }
    case 8:
      printf("\nYou have selected Class 8");
      printf("\n1) WAP to read an array of integers and search for an element using linear search.");
      printf("\n2) WAP to read an array of integers and search for an element using binary search.");
      printf("\n3) Given an array container and integer hunt. WAP to find whether hunt is present in container or not. If present, then triple the value of hunt and search again. Repeat these steps until hunt is not found. Finally return the value of hunt. Input: container = {1, 2, 3} and hunt = 1 then Output: 9 Explanation: Start with hunt = 1. Since it is present in array, it becomes 3. Now 3 is present in array and hence hunt becomes 9. Since 9 is a not present, program return 9.");
      printf("\n4) Given a sorted array of length n, WAP to find the number in array that appears more than or equal to n/2 times. It can be assumed that such element always exists. Input: 2 3 3 4 Output: 3 Input: 3 4 5 5 5 Output: 5");
      printf("\n5) WARP (Write a Recursive Program) to search an element in a dynamic array of n integers using linear search.");
      printf("\n6) WARP using recursion to search an element in a dynamic array of n integers using binary search.\n");
      scanf("%d",&choice8);
      switch(choice8)
      {
        case 1:
          printf("\nYou have selected Q1\n");
          c8_1();
          goto m;
          break;
        case 2:
          printf("\nYou have selected Q2\n");
          c8_2();
          goto m;
          break;
        case 3:
          printf("\nYou have selected Q3\n");
          c8_3();
          goto m;
          break;
        case 4:
          printf("\nYou have selected Q4\n");
          c8_4();
          goto m;
          break;
        case 5:
          printf("\nYou have selected Q5\n");
          c8_5();
          goto m;
          break;
        case 6:
          printf("\nYou have selected Q6\n");
          c8_6();
          goto m;
          break;
      }
    case 9:
      printf("\nYou have selected Class 9");
      printf("\n1) WAP to create a linked list that represents a polynomial expression with single variable (i.e. 5x 7 -3x 5 +x 2 +9) and display the polynomial by using user defined functions for creation and display.");
      printf("\n2) WAP by modifying the first program to add two polynomials with single variable. Use the same function in first prog. written for creation &amp; display operations and write a new function for addition operations.");
      printf("\n3) A matrix m × n that has relatively few non-zero entries is called sparse matrix. It may be represented in much less than m × n space. An m × n matrix with k non-zero entries is sparse if k &lt;&lt; m × n. It may be faster to represent the matrix compactly as a list of the non-zero indexes and associated entries. WAP to represent a sparse matrix using linked list.");
      printf("\n4) WAP to find out the transpose of a sparse matrix.");
      printf("\n5) WAP to determine whether the given matrix is a sparse matrix or not.");
      printf("\n6) WAP to determine whether the given matrix is a lower triangular or upper triangular or tri-diagonal matrix.");
      printf("\n7) WAP to add two sparse matrixes.");
      printf("\n8) WAP to multiply two sparse matrixes.\n");
      scanf("%d",&choice9);
      switch(choice9)
      {
        case 1:
          printf("\nYou have selected Q1\n");
          c9_1();
          goto m;
          break;
        case 2:
          printf("\nYou have selected Q2\n");
          c9_2();
          goto m;
          break;
        case 3:
          printf("\nYou have selected Q3\n");
          c9_3();
          goto m;
          break;
        case 4:
          printf("\nYou have selected Q4\n");
          c9_4();
          goto m;
          break;
        case 5:
          printf("\nYou have selected Q5\n");
          c9_5();
          goto m;
          break;
        case 6:
          printf("\nYou have selected Q6\n");
          c9_6();
          goto m;
          break;
        case 7:
          printf("\nYou have selected Q7\n");
          c9_7();
          goto m;
          break;
        case 8:
          printf("\nYou have selected Q8\n");
          c9_8();
          goto m;
          break;
      }
      default:
        printf("\nYou have selected wrong class\n");
        break;
  }
  return 0;


}