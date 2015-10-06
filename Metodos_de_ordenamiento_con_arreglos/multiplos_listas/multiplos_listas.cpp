#include <iostream>
#include <htlist.H>

using namespace Aleph;

int main()
{
  DynList<long> l1, l2;
  int key = 0;
  
  std::cout << "lista 1" << std::endl;
  while(key != -1)
  {
    std::cin >> key;
    if(key != -1)
      l1.append(key);
  }
  key = 0;

  std::cout << "lista 2" << std::endl;
  while(key != -1)
  {
    std::cin >> key;
    if(key != -1)
      l2.append(key);
  }

  DynList<long>::Iterator it1(l1), it2(l2);
  DynList<long> list;

  while(it1.has_curr())
  {
    if(it1.get_curr() % it2.get_curr() == 0)
    {
      //list.append(it1.get_curr());
      it2.reset_first();
      it1.next();
      std::cout << "Hola "; //ojo cn el incremento de l1 y l2
    }
    else if(!it2.has_curr() && it1.has_curr())
    {
      it1.next();
      it2.reset_first();
    }
    std::cout << it1.get_pos() << " ";
    it2.next();
  }

return 0;
}
