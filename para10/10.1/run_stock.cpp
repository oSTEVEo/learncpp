#include <iostream> 
#include <string> 

#include "stock.h" // заголовочный файл с определениями 

using namespace std;

void run_stock(void){
  Stock s1;  

  /* Начальная покупка пакета акций.
   * Создали пакет акций через вызов
   * метода Stock::acquire() */
  s1.acquire("IBM", 10, 125.0);
  cout << "\nInitial acquiring\n";
  s1.show();   // вывод информации на экран

  // Теперь купим акций и проверим, что изменилось
  s1.buy(1, 150.0);   
  cout << "\nAfter buying\n";
  s1.show(); 
  
  /* Обратите внимание, что прямое изменение количества акций, например,
   * s1.shares += 1; 
   * работать не будет, так как у нас нет прямого доступа 
   * к элементу shares. */

  // Цена акций изменилась
  s1.update(100);   // изменяем цену 
  cout << "\nAfter price change\n";
  s1.show(); 

  // Теперь продадим часть акций и проверим, что изменилось
  s1.sell(2, 75.0);
  cout << "\nAfter celling\n";
  s1.show();
}

int main() { 
    run_stock();
    return 0; 
}
