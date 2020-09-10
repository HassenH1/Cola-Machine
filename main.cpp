#include <iostream>

void menu(char &i){
  std::cout << "Select a drink" << std::endl;
  std::cout << "1. Coke" << std::endl;
  std::cout << "2. Water" << std::endl;
  std::cout << "3. Sprite" << std::endl;
  std::cout << "4. Fanta" << std::endl;
  std::cout << "5. Tea" << std::endl;
  std::cout << "Press e to exit" << std::endl;
  std::cin >> i;
}

void display(char &i){
  switch(i){
    case '1':
      std::cout << "==============" << std::endl; 
      std::cout << "Coke" << std::endl;
      std::cout << "==============" << std::endl; 
      break;
    case '2':
      std::cout << "==============" << std::endl;  
      std::cout << "Water" << std::endl;
      std::cout << "==============" << std::endl; 
      break;
    case '3':
      std::cout << "==============" << std::endl;  
      std::cout << "Sprite" << std::endl;
      std::cout << "==============" << std::endl; 
      break;
    case '4':
      std::cout << "==============" << std::endl;  
      std::cout << "Fanta" << std::endl;
      std::cout << "==============" << std::endl; 
      break;
    case '5': 
      std::cout << "==============" << std::endl;  
      std::cout << "Tea" << std::endl;
      std::cout << "==============" << std::endl; 
      break;
    default:
      std::cout << "Error: choice was not valid, here is your money back" << std::endl;
  }
}

int main(){
  
  std::cout << "Cola Machine" << std::endl;
  char input{};
  do{
    menu(input);
    display(input);
  } while( input != 'e');
  std::cout << "Goodbye" << std::endl;

  return 0;
}
