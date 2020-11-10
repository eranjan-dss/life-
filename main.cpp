#include <iostream>
//the game
int main() {
  //the first code and the indroduction
  std::cout << "hello to life++ a life game made in c++\n";
  std::string gamemode;
  std::cout<<"type your gamemode(hard/easy)\n";
  std::cin>>gamemode;
  if(gamemode == "easy"){
    //when you are born
    std::cout<<"you are born!"<<std::endl;
    std::cout<<"##status##"<<std::endl;
    std::cout<<"health = 100%\n";
    std::cout<<"hunger = no\n";
    std::cout<<"skill = 0%\n";
    std::cout<<"\n";
    std::cout<<"you got home and you are hungry, your mom is tring to eat you\n";
    std::cout<<"do you want to eat?(yes/no)\n";
    std::string wanteat1;
    std::cin>>wanteat1;
    if(wanteat1 == "yes"){
      std::cout<<"\n";
      std::cout<<"you are Ate it\n";
      std::cout<<"\n";
      std::cout<<"##status##"<<std::endl;
      std::cout<<"health = 100%\n";
      std::cout<<"hunger = no\n";
      std::cout<<"skill = 0%";
      std::cout<<"\n";
    }else if(wanteat1 == "no"){
      std::cout<<"\n";
      std::cout<<"you not ate it";
      std::cout<<"\n";
      std::cout<<"##status##"<<std::endl;
      std::cout<<"health = 90%\n";
      std::cout<<"hunger = 100%";
      std::cout<<"skill = 0%";
      std::cout<<"\n";
      std::cout<<"you got home and you are hungry, your mom is tring to eat you\n";
      std::cout<<"do you want to eat?(yes/no)\n";
      std::string wanteat1;
      std::cin>>wanteat1;
      if(wanteat1 == "yes"){
        std::cout<<"\n";
        std::cout<<"you are Ate it\n";
        std::cout<<"\n";
        std::cout<<"##status##"<<std::endl;
        std::cout<<"health = 100%\n";
        std::cout<<"hunger = no\n";
        std::cout<<"skill = 0%";
        std::cout<<"\n";
      }else if(wanteat1 == "no"){
        std::cout<<"\n";
        std::cout<<"you not ate it";
        std::cout<<"\n";
        std::cout<<"##status##"<<std::endl;
        std::cout<<"health = 90%\n";
        std::cout<<"hunger = 100%";
        std::cout<<"skill = 0%";
        std::cout<<"\n";
      }
    }
  } 
}