#include <iostream>
#include <tpl_dynArray.H>

using namespace std;
using namespace Aleph;

int main()
  {
    DynArray<int> a;
    int aux, temp;
    
    while( cin >> aux )
      a.append(aux);

    for( int i = 1; i < a.size(); ++i )
      {
        temp = a(i);
        for( int j = i - 1; j >= 0 && a(j) > temp; --j )
          {
            a(j+1) = a(j);
            a(j) = temp;
          }
      }
    
    for( auto &i: a)
      cout << i << " ";
    return 0;
  }
