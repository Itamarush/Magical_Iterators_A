#include "doctest.h"
#include "sources/MagicalContainer.hpp"

using namespace std;
using namespace ariel;

TEST_CASE("Testing addElement and size") {
    MagicalContainer c;
    c.addElement(5);
    c.addElement(6);
    c.addElement(7);
    CHECK(c.size() == 3);

    c.addElement(11);
    c.addElement(12);
    c.addElement(13);
    c.addElement(14);
    CHECK(c.size() == 7);

    c.addElement(-7);
    CHECK(c.size() == 8);

    CHECK_THROWS_AS(c.addElement('b'), std::invalid_argument);
    CHECK_THROWS_AS(c.addElement(false), std::invalid_argument);
}

TEST_CASE("Testing removeElement") {
    MagicalContainer c;
    c.addElement(5);
    c.addElement(6);
    c.addElement(7);
    c.addElement(11);
    c.addElement(12);
    c.addElement(13);
    c.addElement(14);
    c.addElement(-7);

    CHECK(c.size() == 8);
    c.removeElement(5);
    CHECK(c.size() == 7);

    c.removeElement(6);
    c.removeElement(7);
    CHECK(c.size() == 5);

    c.removeElement(100);
    CHECK(c.size() == 5);

    c.removeElement(200);
    CHECK(c.size() == 5);

    CHECK_THROWS_AS(c.removeElement('b'), std::invalid_argument);
    CHECK_THROWS_AS(c.removeElement(true), std::invalid_argument);
}

TEST_CASE("isPrime() validation") {
    CHECK(MagicalContainer::isPrime(1) == false);
    CHECK(MagicalContainer::isPrime(2) == true);
    CHECK(MagicalContainer::isPrime(4) == false);
    CHECK(MagicalContainer::isPrime(-5) == false);
    CHECK(MagicalContainer::isPrime(21) == false);
    CHECK(MagicalContainer::isPrime(19) == true);
}

TEST_CASE("SideCrossIterator testing") {
    MagicalContainer c;
    c.addElement(5);
    c.addElement(6);
    c.addElement(7);
    c.addElement(11);
    c.addElement(12);
    c.addElement(13);
    c.addElement(14);
    c.addElement(-7);

    MagicalContainer::SideCrossIterator it(c);

    CHECK(it.begin() != it.end());
    CHECK(it.begin() < it.end());
    CHECK(it.end() > it.begin());
}

TEST_CASE("AscendingIterator testing") {
    MagicalContainer c;
    c.addElement(5);
    c.addElement(6);
    c.addElement(7);
    c.addElement(11);
    c.addElement(12);
    c.addElement(13);
    c.addElement(14);
    c.addElement(-7);

    MagicalContainer::AscendingIterator it(c);

    CHECK(it.begin() != it.end());
    CHECK(it.begin() < it.end());
    CHECK(it.end() > it.begin());
    CHECK(*it.begin() == -7);
    CHECK(*it.end() == 14);
}

TEST_CASE("Check PrimeIterator") {
    MagicalContainer mgc;
    mgc.addElement(1); 
    mgc.addElement(2);  
    mgc.addElement(4); 
    mgc.addElement(3);  
    mgc.addElement(7);  

    MagicalContainer::PrimeIterator it(mgc);
    it = it.begin();

    CHECK(*it == 2);
    ++it;
    CHECK(*it == 3);
    ++it;
    CHECK(*it == 7);
}

TEST_CASE("SideCrossIterator testing") {
    MagicalContainer c;
    c.addElement(5);
    c.addElement(6);
    c.addElement(7);
    c.addElement(11);
    c.addElement(12);
    c.addElement(13);
    c.addElement(14);
    c.addElement(-7);

    MagicalContainer::SideCrossIterator it(c);

    CHECK(it == it.begin());
    CHECK(!(it != it.begin()));


    MagicalContainer empty;
    MagicalContainer::SideCrossIterator emptyIt(empty);
    CHECK(emptyIt == emptyIt.begin());
    CHECK(!(emptyIt != emptyIt.begin()));
    CHECK(emptyIt == emptyIt.end());
    CHECK(!(emptyIt != emptyIt.end()));
}


TEST_CASE("Test AscendingIterator begin() and end() methods")
{
    MagicalContainer c;
    c.addElement(1);
    c.addElement(2);
    c.addElement(3);

    MagicalContainer::AscendingIterator it(c);

    CHECK(*it.begin() == 1);
    CHECK(*it.end() == 0);
}

TEST_CASE("Test SideCrossIterator begin() and end() methods")
{
    MagicalContainer c;
    c.addElement(1);
    c.addElement(2);
    c.addElement(3);

    MagicalContainer::SideCrossIterator it(c);

    CHECK(*it.begin() == 1);
    CHECK(*it.end() == 0);
}

TEST_CASE("Test PrimeIterator begin() and end() methods")
{
    MagicalContainer c;
    c.addElement(1);
    c.addElement(2);
    c.addElement(3);
    c.addElement(4);
    c.addElement(5);

    MagicalContainer::PrimeIterator it(c);

    CHECK(*it.begin() == 2);
    CHECK(*it.end() == 0);
}
