#include <iostream> 
int main() 
{ 
setlocale(LC_ALL, "Rus"); 
 
/*Вариант 1*/ 
/*unsigned char x = 7;//7=00000111 
unsigned char x = 98;//98=01100010 
unsigned char x = 241; // 241= 11110001*/ 
 
unsigned char x = 0; 
unsigned int i; 
unsigned int v{1}; 
std::cout « "Выберете бит\n"; 
std::cin » i; 
v = v « i; 
x |= v; 
std::cout « int(x); 
return 0; 
}