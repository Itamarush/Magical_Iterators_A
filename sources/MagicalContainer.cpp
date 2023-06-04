#include "MagicalContainer.hpp"

using namespace std;
using namespace ariel;

    void MagicalContainer::addElement(int element)
    {
        
    }

    void MagicalContainer::removeElement(int element)
    {

    }

    bool MagicalContainer::isPrime(int element)
    {
        return true;
    }

    int MagicalContainer::size()
    {
        return 0;
    }

    MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer& mgc)
    : mgc(&mgc)
    {
        sort(mgc.AscendingContainer.begin(), mgc.AscendingContainer.end());
        curr = mgc.AscendingContainer.begin();
    }

    MagicalContainer::AscendingIterator::AscendingIterator(const AscendingIterator& other)
    {

    }

    MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::operator++()
    {
        ++curr;
        return *this;
    }

    bool MagicalContainer::AscendingIterator::operator==(AscendingIterator& other)
    {
        return curr == other.curr;
    }

    bool MagicalContainer::AscendingIterator::operator!=(AscendingIterator& other)
    {
        return curr != other.curr;
    }

    bool MagicalContainer::AscendingIterator::operator<(AscendingIterator& other)
    {
        return true;
    } 

    bool MagicalContainer::AscendingIterator::operator>(AscendingIterator& other)
    {
        return true;
    }

    int MagicalContainer::AscendingIterator::operator*()
    {
        return 1;
    }

    MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::operator=(const AscendingIterator& other)
    {
        if (this != &other)
        {
            mgc = other.mgc;
            curr = other.curr;
        }
        return *this;
    }


    MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::begin()
    {
        curr = mgc->AscendingContainer.begin();
        return *this;
    }   

    MagicalContainer::AscendingIterator& MagicalContainer::AscendingIterator::end()
    {
        curr = mgc->AscendingContainer.end();
        return *this;
    }

    MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer& mgc)
    : mgc (&mgc)
    {
        sort(mgc.AscendingContainer.begin(), mgc.AscendingContainer.end());
        curr = mgc.AscendingContainer.begin();
    }

    MagicalContainer::SideCrossIterator::SideCrossIterator(const SideCrossIterator& other)
    {

    }

    MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::operator++()
    {
        ++curr;
        return *this;
    }

    bool MagicalContainer::SideCrossIterator::operator==(SideCrossIterator& other)
    {
        return false;
    }

    bool MagicalContainer::SideCrossIterator::operator!=(SideCrossIterator& other)
    {
        return false;
    }

    bool MagicalContainer::SideCrossIterator::operator<(SideCrossIterator& other)
    {
        return true;
    } 

    bool MagicalContainer::SideCrossIterator::operator>(SideCrossIterator& other)
    {
        return true;
    }

    int MagicalContainer::SideCrossIterator::operator*()
    {
        return 1;
    }

    MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::operator=(const SideCrossIterator& other)
    {
        if (this != &other)
        {
            mgc = other.mgc;
            curr = other.curr;
        }
        return *this;
    }

    MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::begin()
    {
        curr = mgc->SideCrossContainer.begin();
        return *this;
    }   

    MagicalContainer::SideCrossIterator& MagicalContainer::SideCrossIterator::end()
    {
        curr = mgc->SideCrossContainer.end();
        return *this;
    }

    MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer& mgc)
    : mgc(&mgc)
    {
        sort(mgc.AscendingContainer.begin(), mgc.AscendingContainer.end());
        curr = mgc.AscendingContainer.begin();
        
    }

    MagicalContainer::PrimeIterator::PrimeIterator(const PrimeIterator& other)
    {

    }

    MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::operator++()
    {
        ++curr;
        return *this;
    }

    bool MagicalContainer::PrimeIterator::operator==(PrimeIterator& other)
    {
        return false;
    }

    bool MagicalContainer::PrimeIterator::operator!=(PrimeIterator& other)
    {
        return false;
    }

    bool MagicalContainer::PrimeIterator::operator<(PrimeIterator& other)
    {
        return true;
    } 

    bool MagicalContainer::PrimeIterator::operator>(PrimeIterator& other)
    {
        return true;
    }

    int MagicalContainer::PrimeIterator::operator*()
    {
        return 1;
    }

    MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::operator=(const PrimeIterator& other)
    {
        if (this != &other)
        {
            mgc = other.mgc;
            curr = other.curr;
        }
        return *this;
    }


    MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::begin()
    {
        curr = mgc->PrimeContainer.begin();
        return *this;
    }   

    MagicalContainer::PrimeIterator& MagicalContainer::PrimeIterator::end()
    {
        curr = mgc->PrimeContainer.end();
        return *this;
    }