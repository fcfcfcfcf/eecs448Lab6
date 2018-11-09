#include "Tests.h"
#include "LinkedListOfInts.h"
#include <iostream>
using namespace std;


Tests::Tests(){

}

void Tests::runTests(){
    LinkedListOfInts* ll = new LinkedListOfInts();
    cout<<"TESTS WITH EMPTY LIST:\n";
    cout<<"TEST: EMPTY LIST IS EMPTY\n";
    isEmptyTest(ll, true);
    cout<<"TEST: SIZE OF EMPTY LIST IS ZERO\n";
    sizeTest(ll, 0);
    cout<<"TEST: APPENDING AN ITEM TO THE BACK OF THE LIST INCREASES ITS SIZE\n";
    addBackTest(ll, 1, 1);
    cout<<"TEST: APPENDING AN ITEM TO THE FRONT OF THE LIST INCREASES ITS SIZE\n";
    addBackTest(ll, 2, 2);
    cout<<"TEST: APPENDED ITEM CAN BE FOUND WITHIN THE TREE\n";
    searchTest(ll, 2, true);
    cout<<"TEST: DELETE ITEM DECREASES SIZE\n";
    removeBackTest(ll, 1);
    cout<<"TEST: DELETED ITEM IS NO LONGER IN THE LINKED LIST\n";
    searchTest(ll, 2, false);
    cout<<"TEST: REMOVING FRONT ITEM RESULTS IN EMPTY TREE\n";
    removeFrontTest(ll, 0);

    cout<<"TESTS WITH GIVEN LIST:\n";

}

void Tests::isEmptyTest(LinkedListOfInts* ll, bool exp){
    if(exp == ll->isEmpty()){
        cout<<"PASSED\n";
    }
    else{
        cout<<"FAILED\n";
    }
}

void Tests::sizeTest(LinkedListOfInts* ll, int exp){
    if(exp == ll->size()){
        cout<<"PASSED\n";
    }
    else{
        cout<<"FAILED\n";
    }
}

void Tests::searchTest(LinkedListOfInts* ll, int value, bool exp){
    if(ll->search(value) == exp){
        cout<<"PASSED\n";
    }
    else{
        cout<<"FAILED\n";
    }
}


void Tests::addBackTest(LinkedListOfInts* ll, int value, int exp){
    ll->addBack(value);
    if(exp == ll->size()){
        cout<<"PASSED\n";
    }
    else{
        cout<<"FAILED\n";
    }
}

void Tests::addFrontTest(LinkedListOfInts* ll, int value, int exp){
    ll->addFront(value);
    if(exp == ll->size()){
        cout<<"PASSED\n";
    }
    else{
        cout<<"FAILED\n";
    }
}

void Tests::removeBackTest(LinkedListOfInts* ll, int exp){
    if(exp == ll->size()){
        cout<<"PASSED\n";
    }
    else{
        cout<<"FAILED\n";
    }
}

void Tests::removeFrontTest(LinkedListOfInts* ll, int exp){
    if(exp == ll->size()){
        cout<<"PASSED\n";
    }
    else{
        cout<<"FAILED\n";
    }
}

