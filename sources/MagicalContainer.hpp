#pragma once
#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

namespace ariel 
{
    class MagicalContainer
    {
        vector<int> originalContainer;
        vector<int> AscendingContainer; 
        vector<int> SideCrossContainer;
        vector<int> PrimeContainer;

        public:
            void addElement(int element);
            void removeElement(int element);
            static bool isPrime(int element);
            int size();
        
            MagicalContainer() = default;
            ~MagicalContainer() = default;
            MagicalContainer(const MagicalContainer& other) = default;
            MagicalContainer(MagicalContainer&& other) = default;
            MagicalContainer& operator=(MagicalContainer&& other) = default;
            MagicalContainer& operator=(const MagicalContainer& other) = default;

        class AscendingIterator
        {
            private:
                vector<int>::iterator curr;
                MagicalContainer *mgc;
                size_t index;

            public:
            AscendingIterator(MagicalContainer& mgc);
            AscendingIterator(const AscendingIterator& other);
            AscendingIterator(AscendingIterator&& other) = default;
            ~AscendingIterator() = default;
            AscendingIterator& operator=(AscendingIterator&& other) = default;
            AscendingIterator& operator=(const AscendingIterator& other);
            AscendingIterator& operator++();
            bool operator==(AscendingIterator& other);
            bool operator!=(AscendingIterator& other);
            bool operator<(AscendingIterator& other); 
            bool operator>(AscendingIterator& other);
            int operator*();
            AscendingIterator& begin();
            AscendingIterator& end();
        };

        class SideCrossIterator
        {
            private:
                vector<int>::iterator curr;
                MagicalContainer *mgc;
                size_t index;

            public:
            SideCrossIterator(MagicalContainer& mgc);
            SideCrossIterator(const SideCrossIterator& other);
            SideCrossIterator(SideCrossIterator&& other) = default;
            ~SideCrossIterator() = default;
            SideCrossIterator& operator=(SideCrossIterator&& other) = default;
            SideCrossIterator& operator=(const SideCrossIterator& other);
            SideCrossIterator& operator++();
            bool operator==(SideCrossIterator& other);
            bool operator!=(SideCrossIterator& other);
            bool operator<(SideCrossIterator& other); 
            bool operator>(SideCrossIterator& other);
            int operator*();
            SideCrossIterator& begin();
            SideCrossIterator& end();
        };

        class PrimeIterator
        {
            private:
                vector<int>::iterator curr;
                MagicalContainer *mgc;
                size_t index;

            public:
            PrimeIterator(MagicalContainer& mgc);
            PrimeIterator(const PrimeIterator& other);
            PrimeIterator(PrimeIterator&& other) = default;
            ~PrimeIterator() = default;
            PrimeIterator& operator=(PrimeIterator&& other) = default;
            PrimeIterator& operator=(const PrimeIterator& other);
            PrimeIterator& operator++();
            bool operator==(PrimeIterator& other);
            bool operator!=(PrimeIterator& other);
            bool operator<(PrimeIterator& other); 
            bool operator>(PrimeIterator& other);
            int operator*();
            PrimeIterator& begin();
            PrimeIterator& end();
        };
    };
}