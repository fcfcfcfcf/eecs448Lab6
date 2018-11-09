#ifndef TESTS_H
#define TESTS_H
#include "LinkedListOfInts.h"

class Tests{
    public:
        Tests();
        void runTests();
        void isEmptyTest(LinkedListOfInts* ll, bool exp);
        void sizeTest(LinkedListOfInts* ll, int exp);
        void searchTest(LinkedListOfInts* ll, int value, bool exp);
        void addBackTest(LinkedListOfInts* ll, int value, int exp);
        void addFrontTest(LinkedListOfInts* ll, int value, int exp);
        void removeBackTest(LinkedListOfInts* ll, int exp);
        void removeFrontTest(LinkedListOfInts* ll, int exp);


    private:
};

#endif