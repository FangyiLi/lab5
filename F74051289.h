//HugeInt.h

#infef HUGEINT_H
#define HUGEINT_H

#include<iostream>
#include<string>
using namespace std;

class HUGEiNT
{
   friend ostream  &operator<<(ostream &, const HugeInt & );
public:
   static const int digits = 30;

   HugeIntd(long=0);
   HugeInt(const string &);

   HugeInt operator+(  const HugeInt  &     ) const;
   HugeInt operator+(  int  )const;
   HugeInt operator+(const string &     )const;
private:
   short integer [ digits   ];
};

# endif

