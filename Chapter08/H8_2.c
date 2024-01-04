//
// Homework 8-2
// Created by Junghun Lee on 1/4/24.
//
// preprocess
#include <stdio.h>
#define MAX_SET_SIZE 5

// function declaration
void add_element(int value, int (* set), int * cp);
void delete_element(int value, int (* set), int * cp);
int has_element(int value, int (* set), const int * cp);
void print_set(int (* set), const int (* cp));

// main
int main(void) {
    // local variable declaration
    static int set[MAX_SET_SIZE]; // initialize
    static int length;
    static char commender;
    int integer;

    printf("Commands : a 5 ==> add 5 to the set.\n");
    printf("           d 5 ==> delete 5 from set.\n");
    printf("           q ==> quit.\n");
    printf("======================================\n");
    while (1) {
        printf("Enter commands : ");
        scanf(" %c", & commender);
        if (commender == 'q') return 0;
        scanf("%d", & integer);
        while(getchar() != '\n'); // buffer cleaning
        switch (commender) {
            case 'a' :
                if (length == MAX_SET_SIZE) {
                    printf("Set is already full!! Use other command.\n");
                    break;
                }
                add_element(integer, set, & length);
                print_set(set, & length);
                printf("\n");
                break;
            case 'd' :
                if (length == 0) {
                    printf("Set is empty!! Use other command.\n");
                    break;
                }
                delete_element(integer, set, &length);
                print_set(set, &length);
                printf("\n");
                break;
            default :
                printf("wrong command. try again.\n");
                break;
        }
    }
    return 0;
}

// function definition
/*
======================== add_element =======================
 <params>
 Int value : the elements which have to add or delete
 Int * set : an array that don't receive duplicate elements
 Int * cp : a length of array

 <returns>
 Void

 Add an element to a set (add to the end of the array)
 A set does not allow for duplicate elements, so only if
 there are no elements in the set. Use the has_element
 function to check for elements in the set
============================================================
*/
void add_element(int value, int (* set), int * cp) {
    int flag;
    flag = has_element(value, set, cp);
    if (flag != -1) {
        printf("%d is already in the set.\n", value);
        return ;
    }
    set[* cp] = value;
    * cp += 1;
} // add_element

/*
====================== delete_element ======================
 <params>
 Int value : the elements which have to add or delete
 Int * set : an array that don't receive duplicate elements
 Int * cp : a length of array

 <returns>
 Void

 Delete an element from the set. Delete an element only if
 it exists in the set. At this time, if the element in
 index 2 is deleted, the elements in indexes 3, 4, and 5
 move one by one to the left. Check for elements in the set
 using the has_element function.
============================================================
*/
void delete_element(int value, int (* set), int * cp) {
    int flag;

    flag = has_element(value, set, cp);
    if (flag == -1) {
        printf("%d is not in the set.\n", value);
        return ;
    }

    for (int i = flag; i < *cp - 1; i++) {
        set[i] = set[i + 1];
    }
    * cp -= 1;
} // delete_element

/*
======================= has_element ========================
 <params>
 Int value : the elements which have to add or delete
 Int * set : an array that don't receive duplicate elements
 Int * cp : a length of array

 <returns>
 Int

 Check if there are elements in the set. Returns the index
 if the element is in the set

 Returns -1 if the element is not in the set
============================================================
*/
int has_element(int value, int (* set), const int * cp) {
    for (int i = 0; i < * cp; i++) {
        if (set[i] == value) return i;
    }
    return -1;
} // has_element

/*
======================== print_set =========================
 <params>
 Int * set : an array that don't receive duplicate elements
 Int * cp : a length of array

 <returns>
 Void

 print elements of set
============================================================
*/
void print_set(int (* set), const int (* cp)) {
    for (int i = 0; i < * cp; i++) {
        printf("%d ", set[i]);
    }
} // print_set
