#include <iostream>
#include <tpl_dynArray.H>

using namespace std;
using namespace Aleph;

void merge(DynArray<int> &, int, int, int);
void merge_sort(DynArray<int> &, int, int);

int main()
  {
    DynArray<int> a;
    int aux;
    int l = 0;
    a.cut();
    
    while(cin >> aux)
      a.append(aux);
    
    int r = a.size();

    merge_sort(a, l, r);

    for(auto &i : a)
      cout << i << " ";
  
    return 0;
  }

void merge(DynArray<int> & a, int l, int m, int r)
  {
    DynArray<int> b;
    int i, j, k;

    for (i = l; i <= m; i++) // copia la primera mitad del arreglo
      b[i] = a[i];

    for (j = r, i = m + 1; i <= r; i++, j--) // copia la segunda mitad del arreglo de forma invertida
      b[i] = a[j];

    for (i = l, k = l, j = r; k <= r; k++)
      {
        if (b[i] < b[j])
          a[k] = b[i++];
        else
          a[k] = b[j--];
      }
  }

void merge_sort(DynArray<int> & a, int l, int r)
  {
    if (l >= r)
      return;

    const int m = (l + r)/2;
    merge_sort(a, l, m);
    merge_sort(a, m + 1, r);

    merge(a, l, m, r);
  }
