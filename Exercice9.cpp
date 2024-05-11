#include <iostream>
using namespace std ;
main()
{ int n ;
cin >> n ;
switch (n)
{ case 0 : cout << "Nul\n" ;
case 1 :
case 2 : cout << "Petit\n" ;
break ;
case 3 :
case 4 :
case 5 : cout << "Moyen\n" ;
default : cout << "Grand\n" ;
}
}

/*
Quand on lui fournit en donnée :
  0 : nul et petit
  1 : petit
  4 : Moyen et grand
  10 : Grand
  -5 : Grand
*/
