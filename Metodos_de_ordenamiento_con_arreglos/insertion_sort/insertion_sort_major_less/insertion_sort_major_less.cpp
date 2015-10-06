#include <iostream>
#include <tpl_dynArray.H>

using namespace std;
using namespace Aleph;

void insertion_sort(DynArray<int> &);

int main()
  {
    DynArray<int> a;
    int aux;
    
    while( cin >> aux )
      a.append(aux);
  
    insertion_sort(a);
    
    for( auto &i: a)
      cout << i << " ";
    return 0;
  }

void insertion_sort(DynArray<int> & a)
  {
    int temp;
    for( int i = 1; i < a.size(); ++i )
      {
        temp = a(i);
        for( int j = i - 1; j >= 0 && a(j) < temp; --j )
          {
            a(j+1) = a(j);
            a(j) = temp;
          }
      }
  }
