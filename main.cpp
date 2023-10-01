#include <iostream>
#include <chrono>
#include <unistd.h>
#include "Character.h"
#include "Kira.h"
#include "LightYagami.h"
#include "L.h"
#include "MisaAmane.h"
using namespace std;

int main() {
  bool userMade = false;
  int option = 0;
  Character* user = nullptr;
  Character* kira = nullptr;
  while(option != 99) {
    cout << "Select your course of action:" << endl;
    cout << endl;
    cout << "[1] Add New Character" << endl;
    cout << "[2] Load Previous Character" << endl;
    cout << "[3] Start Battle" << endl;
    cout << "[99] Exit Game" << endl;
    cin >> option;
    if(option == 1) {
      cout << endl;
      int option1 = 0;
      int option2;
      int selection;
      string name;
      cout << R"(
      
█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█
█░░╦─╦╔╗╦─╔╗╔╗╔╦╗╔╗░░█
█░░║║║╠─║─║─║║║║║╠─░░█
█░░╚╩╝╚╝╚╝╚╝╚╝╩─╩╚╝░░█
▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
)" << endl;
      cout << "You must be new. What is your name?" << endl;
      cin >> name;
      cout << endl;
      cout << "Welcome to the team, " << name << ". Please select your character." << endl;
      sleep(1);
      cout << endl;
      while(option1 == 0) {
        option2 = 0;
        cout << "[1] Light Yagami" << endl;
        cout << "[2] L" << endl;
        cout << "[3] Misa Amane" << endl;
        cout << endl;
        cin >> selection;
        cout << endl;
        if(selection == 1) {
          while(option2 == 0) {
            cout << "[1] Light Yagami Description" << endl;
            cout << "[2] Confirm Selection" << endl;
            cout << "[3] Go back to character menu" << endl;
            cout << endl;
            cin >> selection;
            if(selection == 1) {
              cout << R"(
=====================================
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡴⢖⠲⣶⣒⡤⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡤⡣⡤⣛⢇⢜⡸⡠⢧⡻⣧⡀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠞⠃⡷⠇⠙⣦⡊⢻⣟⣦⡑⣌⢳⡄⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⡼⣇⡆⠇⡛⢦⣯⡻⡘⡏⣿⡍⢌⠆⣷⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⣧⣷⡘⣧⣾⣙⣷⣥⡿⡽⡿⡄⡼⣿⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⣇⣏⣽⣵⣼⠹⠀⠀⠈⠁⠑⠙⢃⣇⡟⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⣏⢩⡆⠀⠀⠀⠀⠀⡨⠀⢸⣿⠁⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⣏⡟⡁⠀⠀⠛⠒⠢⠂⢀⡜⠀⠀⢀⣺⠏⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣆⠈⠢⡀⠀⠘⠂⡠⠂⠀⠀⠀⠘⠃⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⡔⠁⠚⢠⠀⠀⠀⠑⢲⣾⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⢀⣀⣤⣶⣶⡮⡀⠀⠀⡰⢿⡦⠔⡄⣂⠋⠀⠀⠀⠀⠆⠀⠀⠀⠀⠀⠀
⠀⣴⣿⠿⠛⠋⠋⠒⢄⠑⡄⡘⠉⠅⠊⠁⡘⠁⠀⠀⠀⠀⠀⣇⡀⠀⠀⠀⠀⠀
⢸⡟⠀⢄⢄⠀⠀⠀⠀⢀⠌⠀⠀⠰⠒⢇⣠⡗⢦⠀⠀⠀⣌⠱⡌⠓⠲⢤⡀⠀
⡸⡇⠀⠘⣾⡄⢠⣶⡞⠁⠀⠀⠀⠀⠀⠜⣴⣇⠀⠉⣿⣿⣿⣷⣦⣤⣄⢡⣹⡀
=====================================
    )" << endl;  
              sleep(1);
              cout << endl;
              cout << "Light Yagami is currently a detective working on solving the case to find out who Kira is, an infamous murderer who only kills criminals. As Light, you will be able to use his analytical skills in order to solve the case!" << endl;
              sleep(3);
              cout << "Starting stats: 1000 HP, 1200 ATK" << endl;
              sleep(1);
              cout << "Special Attack: Justice, cutting Kira's HP by a fourth and gaining agility at the same time." << endl;
              sleep(2);
              cout << "Special Attack: Gaslight, the agility gained in [Justice] will be used towards increasing Light's attack." << endl;
              sleep(2);
              cout << endl;
            }
            else if(selection == 2) {
              user = new Light(name, 1, 1000, 1200, 0, 0);
              user->setExp(100);
              userMade = true;
              option1 = 1;
              user->setCombatOption(1);
              break;
            }
            else if(selection == 3) {
              option2 = 1;
              cout << endl;
            }
          }
        }
          
        else if(selection == 2) {
          while(option2 == 0) {
          cout << "[1] L Description" << endl;
          cout << "[2] Confirm Selection" << endl;
          cout << "[3] Go back to character menu" << endl;
          cout << endl;
          cin >> selection;
          if(selection == 1) {
            cout << R"(
======================================
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠲⣶⣤⣝⣿⣶⣄⣂⠈⣷⡄⡀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠈⠙⠿⣿⣿⣯⣿⣿⣿⣦⣬⣽⣿⣿⣿⣿⣧⢸⣷⡅⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⢀⣰⣶⣶⣿⣿⡿⣿⡿⠟⠛⡛⠶⢾⣭⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀
⣠⣮⣽⣾⣿⣿⣿⣿⣿⣾⣿⣿⣟⡛⠛⠛⣛⣛⣿⣿⣿⣷⣄⠀⠀⠀⠀⠀⠀⠀
⠀⣀⣭⣿⣿⠿⣛⣿⣿⣿⣿⠿⢛⡩⣟⣿⣿⢿⣿⢯⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀
⢊⣽⣿⣿⣶⣿⣿⣿⣿⣿⣷⣶⣿⣿⣿⣿⣿⣻⣿⢃⣿⡿⣿⣇⠀⠀⠀⠀⠀⠀
⣿⢿⣿⣿⣿⣿⡿⢿⣿⣿⡿⡿⣛⢻⣍⣿⣽⣿⡷⢿⣿⢣⣿⡿⠀⠀⠀⠀⠀⠀
⡪⠿⡿⣿⣿⣿⡟⣿⣿⡟⠀⠢⣩⣌⠼⠛⡿⣿⢏⢺⣿⣾⢻⠃⠀⠀⠀⠀⠀⠀
⠙⠄⣶⣿⣿⢻⠟⣿⠃⠀⠀⠀⠀⠀⠀⠁⠀⠒⢊⣾⣿⠏⠂⠀⠀⠀⠀⠀⠀⠀
⠤⢴⡹⢟⡇⠸⠀⢿⣆⠀⠀⠀⠀⡄⠀⠠⠂⠀⣼⢻⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠐⠚⠤⡙⢆⠀⠈⣻⣦⠀⠀⠀⠀⠈⢁⣠⣞⣡⡯⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀
⢆⠀⠀⠀⠀⡑⠷⡚⠟⡹⠓⠤⠤⠔⠺⠁⡟⠀⠀⠘⠚⠲⡤⢀⠀⣀⠀⠀⠀⠀
⣄⡑⢄⠀⠀⠘⡄⠱⣀⡠⠄⠤⠤⡠⢄⠀⠁⠀⠠⡲⠀⠀⠀⠑⡬⡣⣌⠅⠉⢆
⣿⣿⣏⣷⣦⣤⣘⣀⡍⠲⢆⠈⡄⢡⠈⠏⠆⠈⠐⠀⠀⠀⠀⢀⢇⠏⢉⡆⠀⠈
⠳⢻⢇⠿⠿⣿⣿⣼⣿⡻⣿⣄⡃⢸⡄⠐⠀⠀⠀⠀⠀⠀⢰⠁⣸⠔⠁⠀⠀⠀⠀⠀
======================================   ⠀⠀⠀
    )" << endl;
            sleep(1);
            cout << endl;
            cout << "Who is L? The world will never know. He is known as the world's best detective and is currently working on the Kira case, along with Light Yagami." << endl;
            sleep(3);
            cout << "Starting stats: 900 HP, 1400 ATK" << endl;
            sleep(1);
            cout << "Special Attack: Intel, deals attack to Kira and gaining intelligence." << endl;
            sleep(2);
            cout << "Special Attack: Final Cut, intelligence gained in [Intel] will be used to deal 1.5x amount of damage." << endl;
            sleep(2);
            cout << endl;
          }
          else if(selection == 2) {
            user = new L(name, 1, 900, 1400, 0, 0);
            user->setExp(100);
            userMade = true;
            option1 = 1;
            user->setCombatOption(2);
            break;
          }
          else if(selection == 3) {
            option2 = 1;
            cout << endl;
          }
        }
      }
          
      else if(selection == 3) {
        while(option2 == 0) {
          cout << "[1] Misa Amane Description" << endl;
          cout << "[2] Confirm Selection" << endl;
          cout << "[3] Go back to character menu" << endl;
          cout << endl;
          cin >> selection;
          if(selection == 1) {
            cout << R"(
=====================================
       ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⢒⠖⡿⡛⢉⢿⠟⠲⣥⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⢀⠤⡐⢆⣤⣤⢪⢫⠢⠁⣼⡑⠀⢸⠸⡯⣂⠨⠳⡀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⣰⠕⢁⢄⣾⢿⢣⢣⣇⠃⢠⣿⠃⢸⢸⠀⢻⡗⠂⠡⠈⢦⣤⢄⣀⠀⠀⠀
⠀⡼⢁⠔⡡⠓⣛⢂⢂⡞⢸⡆⢸⣿⠀⣿⠘⡆⠘⡏⣭⠀⢃⠈⡿⣢⡈⢊⢊⠉
⢸⢡⠊⢰⠃⠀⡟⠘⢸⣧⣸⢳⣼⣿⢸⡟⣆⠛⢆⢹⡸⡄⠈⣸⢰⠈⢿⡀⢂⠆
⣇⠃⠐⣿⠀⢸⡇⠀⡟⣴⣿⣿⠌⠃⠃⠉⢀⣿⣿⣧⣧⡇⠀⣿⢸⠀⠈⡇⠈⣸
⡟⢀⠛⣿⠀⠘⡇⠀⡇⠐⠾⠓⠀⠀⠀⠀⠀⠈⠛⠊⠹⠈⠀⢹⢸⠀⠀⣷⠀⠉
⡇⢸⡇⠸⡄⢰⢀⢰⣇⠀⠀⠀⠀⠐⠀⠀⠀⠀⠀⠀⠀⡄⠀⢾⣼⠀⠀⡿⠀⠀
⢀⢸⡇⠀⠀⢸⠈⢼⡇⡄⠀⠀⠀⣔⣒⡄⠀⠀⠀⠀⠀⡇⠀⢸⢻⠀⢀⡇⠀⠀
⠈⢼⡅⠀⠀⠈⢃⠈⣇⠘⣄⠀⠀⠑⡂⠚⠀⠀⠀⢀⡜⣧⠀⢸⠀⢀⡼⡇⡰⠀
⠀⠈⠳⡀⠀⠀⡆⡆⠹⡞⡏⡷⢄⠀⠀⠀⢀⣠⡴⠁⣇⣽⠀⣿⡆⠘⢀⡷⠁⠀
⠤⠐⠒⠚⠒⠲⣴⢹⣢⡐⣿⣧⣤⣈⣉⡉⠉⠀⣇⡇⢹⡁⢀⢿⠇⠀⠊⠀⠀⠀
⠀⠀⠀⠀⠀⠈⢻⣧⢂⠀⡌⠙⠻⡿⠿⢿⣿⣿⡿⢡⠋⠇⠌⣿⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠈⣿⡀⠙⠻⡒⠤⢈⡀⠀⠀⠈⠉⡋⠰⠠⢐⣃⣀⠀⠀⠀
=====================================
)" << endl;
            sleep(1);
            cout << endl;
            cout << "Misa Amane, a beloved model and Kira's admirer. After a series of unfortunate events, she has been forced to be on the Kira case to solve his identity." << endl;
            sleep(3);
            cout << "Starting Stats: 1200 HP, 1200 ATK" << endl;
            sleep(1);
            cout << "Special Attack: Quick Attack, decreases HP by 10 and gain 50 speed" << endl;
            sleep(2);
            cout << "Special Attack: Loving Streak, speed gained in [Quick Attack] is used to deal 2x damage" << endl;
            sleep(2);
            cout << endl;
          }
          else if(selection == 2) {
            user = new Misa(name, 1, 1200, 1200, 0, 0);
            userMade = true;
            option1 = 1;
            user->setExp(100);
            user->setCombatOption(3);
            break;
          }
          else if(selection == 3) {
            option2 = 1;
            cout << endl;
          }
        }
      }
    }
    cout << endl;
    cout << "Good job rookie. Your character agreed to work with you." << endl;
  }
    else if(option == 2) {
      cout << endl;
      user = new Light("", 0, 0, 0, 0, 0);
      user->saveToFile("savefile");
      cout << endl;
    }
    else if(option == 3) {
      if(user->getCombatOption() == 1) { //LIGHT
        kira = new Kira("Kira", 1, 1500, 1300, 100);
        int combat; //action choice
        while(user->getHealth() > 0 && kira->getHealth() > 0) { //keeps going until 0
          //action menu
          cout << "---==== What is Your Next Action? ===---" << endl;
          cout << endl;
          cout << "[1] Normal Attack" << endl;
          cout << "[2] Heal" << endl;
          cout << "[3] Justice" << endl;
          cout << "[4] Gaslight" << endl;
          cout << "[5] Give up the case" << endl;
          cout << endl;
          //input 
          cin >> combat;
          if(combat == 1) {
            user->standardAttack(*kira); //normal attack
            sleep(1);
          }
          else if(combat == 2) {
            user->heal(); //heal
            sleep(1);
          }
          else if(combat == 3) {
            user->Special1(*kira); //special 1
            sleep(1);
          }
          else if(combat == 4) {
            user->Special2(*kira); //special 2
            sleep(1);
          }
          else if(combat == 5) {
            cout << "You have been let go on the Kira case. Your loyalty and dedication was not enough." << endl;
          }
          else {
            cout << "Not a valid option" << endl;
          }
          //Kira's part of the battle
          int action = rand() % 3;
          switch(action) {
            case 0:
              if(user->getAgility() > 0) {
                user->setAgility(user->getAgility() - 50);
                cout << "You dodged a fatal blow. -50 Agility" << endl;
                kira->standardAttack(*user);
                if(user->getHealth() >= 0)
                  user->setHealth(user->getHealth());
                sleep(1);
              }
              else {
                kira->standardAttack(*user);
                sleep(1);
              }
              break;
            case 1:
              kira->heal();
              sleep(1);
              break;
            case 2:
              kira->specialAttack(*user);
              sleep(1);
              break;
          }
          cout << endl;
          user->printInfo();
          sleep(1);
          kira->printInfo();
          sleep(1);
        }
        user->setAgility(50);
        user->setHealth(user->getMaxHealth());
        user->setAttack(user->getMaxAttack());
        if(user->getHealth() > kira->getHealth() && combat != 5) {
          cout << R"(
            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⢀⣠⠤⢒⡒⠔⡒⠒⣂⣀⠄⡀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡤⣞⡾⠗⡻⠞⢉⣤⡶⠳⡿⣿⣽⣷⢬⣤⣄⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⢞⡽⢈⣡⣴⠎⡰⠞⣉⡤⢴⡯⠞⣉⡵⣾⠟⣓⠲⡕⢄⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⡷⢫⡴⡿⠞⣡⡾⠓⣃⣵⠖⢾⣧⢞⣧⡿⢃⢸⡏⡄⢫⢆⢢⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡾⣫⡴⡫⠋⡴⣱⢋⣴⡻⠷⢁⣞⡿⡱⣯⣿⢻⣡⡿⡇⡇⢸⢺⡗⣇⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⡷⢫⠞⣰⡿⢱⣧⣿⣟⠝⣠⣾⡿⢆⣽⣾⣯⢧⣿⣿⡅⡇⢸⡟⣷⠏⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡿⢡⣏⣾⠏⢧⣿⢷⣯⠏⣸⡿⢣⡗⣻⣝⣮⡷⢧⢿⣯⢽⡇⣿⡧⢸⡆⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⠇⣿⢾⡇⣾⣿⢿⣿⣼⣳⣿⠇⣠⣿⡟⣾⣿⣹⢹⡜⡿⢸⢱⡗⣿⢸⣇⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣼⣏⣿⣼⠏⢿⢻⣯⡟⢿⣿⢠⣿⢿⣼⢻⣧⣾⠌⣳⠏⣯⡼⢚⡿⣼⡇⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⡿⣶⡿⣷⡎⢜⢰⠿⢸⠏⣾⢯⠾⡧⠼⣿⡿⡜⡟⣼⡯⣧⣹⣏⡿⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⣿⣷⠘⠃⠀⠃⢃⠘⡘⡗⠣⣶⡧⠀⣧⣟⣿⡟⢧⣿⢾⣿⣿⠁⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⢻⠁⠀⠀⠀⠀⠀⠀⠀⠁⠀⠉⠁⢸⠁⢹⣿⣷⡀⠉⠻⣿⠏⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡠⠋⣽⡷⡟⡧⡀⠡⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢺⡄⠀⢄⠈⠂⠐⠀⠀⠀⠀⠀⠀⠀⢠⣻⡿⣼⣯⡇⠀⢡⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣼⡀⠀⠉⠰⠤⠀⠂⠀⠀⠀⡔⠀⠉⠉⠀⠉⢏⢀⠀⠸⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢽⠙⣄⠀⠁⠀⠀⠀⣀⡴⣞⠀⠀⠂⠒⠾⣄⠀⠀⡀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⠀⣀⡀⢀⡀⠠⡄⢠⢀⠢⢰⠒⠀⠁⡞⡀⠀⠳⣤⣤⣶⣾⣿⠟⠁⣀⠀⠄⠀⠀⠐⠉⠀⠚⢨⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠽⠀⠰⠀⡔⠀⢸⠁⢰⠁⠘⠀⠀⠘⡆⠀⠀⠀⢠⠀⠀⠈⠉⠋⢩⠄⣀⡼⡏⠀⣀⣠⣤⣄⣀⠀⠀⠀⠁⢢⠀
⠀⠀⠀⠀⠀⣠⠎⡄⠀⡇⠀⠀⠀⠀⠀⠞⠀⠀⠀⠆⠀⡀⠊⠱⡄⠀⠀⠀⢆⠀⠀⠀⠀⡠⡩⣪⣾⠇⢀⣿⣿⣿⣿⢏⡂⠀⠠⠇⡇⠀
⠀⠀⠀⢀⠐⠄⠀⠥⠀⡇⠀⠀⠐⠀⢀⡀⠀⠀⠀⠀⠀⠅⠁⡠⠘⡂⠀⢀⠉⠀⠀⠀⢸⣿⣿⣿⣿⡴⠊⠁⢠⡿⠃⠀⠁⠀⢸⠀⡇⢀
⠀⠀⠀⢠⠊⠀⠌⠀⠀⢃⠀⡀⠈⠁⢠⠀⠠⠄⠀⠀⠀⠀⠀⠄⠠⠉⠢⡀⠁⠠⠀⠀⠸⣽⢿⣿⠟⠀⠀⠀⡌⠀⠀⠀⠀⠀⡌⢄⡃⢸
⠀⠀⡱⠁⠀⡈⠀⣰⠀⠀⠀⠀⢀⠀⢸⠀⢀⠀⠀⠀⠀⠀⢸⠀⠘⠀⠁⡈⠂⠄⣀⠀⢀⣉⠹⡅⢶⡆⠀⢸⠀⠀⠀⠀⠀⢰⡇⢸⠀⢸
⠠⠚⠀⡀⠂⠀⣰⠃⢀⠀⠀⠀⢸⠀⠀⠀⠘⠀⢰⠂⢰⠀⠈⠀⡞⢸⠀⠁⡄⠀⠀⠉⠀⠄⠀⠑⡈⠱⡄⢀⠀⠀⠀⠀⠀⢾⠀⡸⠀⡸
            )" << endl;
          sleep(3);
          cout << R"(
██╗   ██╗ ██████╗ ██╗   ██╗    ██╗    ██╗ ██████╗ ███╗   ██╗██╗
╚██╗ ██╔╝██╔═══██╗██║   ██║    ██║    ██║██╔═══██╗████╗  ██║██║
 ╚████╔╝ ██║   ██║██║   ██║    ██║ █╗ ██║██║   ██║██╔██╗ ██║██║
  ╚██╔╝  ██║   ██║██║   ██║    ██║███╗██║██║   ██║██║╚██╗██║╚═╝
   ██║   ╚██████╔╝╚██████╔╝    ╚███╔███╔╝╚██████╔╝██║ ╚████║██╗
   ╚═╝    ╚═════╝  ╚═════╝      ╚══╝╚══╝  ╚═════╝ ╚═╝  ╚═══╝╚═╝
                                                               )" << endl;
          sleep(1);
          cout << "Congratulations! You and your team have solved the Kira case." << endl;
          user->gainXp();
        }
        else {
          cout << R"(
⠈⠀⠠⢅⠦⡁⢂⠡⢂⠄⠀⠀⠀⠀⢂⠀⠀⠀⠀⠀⠀⠀⢣⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢀⠇⣰⠇⠀⠀
⠀⢀⡒⢊⡔⠂⠄⠈⠠⠌⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⢂⣄⡁⢟⣛⣛⡛⠓⠫⣟⢿⣿⣿⣿⣿⣿⣿⣿⣿⡞⣸⡟⡆⡆⠠
⠀⠐⣌⠢⡐⠈⠀⠀⠀⠈⠠⡐⠀⠀⠀⠀⠀⠀⠀⠀⢈⣡⣾⣶⣒⣶⣿⣿⣷⣿⣿⣿⣶⣧⡹⣿⣿⣿⣿⣿⣿⣿⣧⢘⣇⣣⠄⢸
⠀⢢⠘⠠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠄⢀⡤⠁⣿⢫⢫⢝⡞⣝⣦⣏⡻⠿⣿⣿⣯⠳⢸⣿⣻⣿⣿⣿⣏⡈⡼⠘⢹⠌⢸
⢀⢣⡘⢠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⢈⣀⡔⠍⢺⠄⠹⣍⢧⡈⡏⢿⣯⢿⡷⣦⣙⣧⢹⠏⣞⣯⣿⡻⣿⣿⣿⢀⢁⢠⣇⠈⢸
⢈⠔⠈⡆⠠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢡⠎⠀⢊⣾⡇⢢⣈⠻⢷⣾⣯⠷⣟⣷⡟⣿⡬⢿⣼⣏⢿⢼⣿⡝⣿⣿⡈⢙⡈⣟⡄⠊
⢀⠈⠀⠐⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡬⠀⡰⡉⣗⢸⣆⢻⠷⢶⢟⣿⣧⣿⣾⢿⣽⡿⡟⣿⢯⠸⣼⢻⡇⢯⣿⣠⠘⠃⢿⠃⠀
⠀⠀⠂⠁⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⢈⠄⡦⠥⢱⢏⢸⣯⢖⣿⠁⡻⣞⣿⡯⡿⡟⢿⣆⠹⣼⣎⣽⢿⣾⣟⣞⢻⣇⢀⠟⢠⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⣀⣾⠞⢀⠋⠊⠀⠑⠸⠈⣿⢻⡋⣎⠏⣿⣷⡙⣥⣺⡿⣿⣿⣏⣟⣿⠜⣤⠚⠆⠄
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢣⡹⠃⠌⠀⠀⠀⠀⠀⠀⠀⠁⠈⡇⢽⡂⣿⡜⣹⣿⣟⢷⡏⣿⣇⢯⢿⡴⢹⡀⡆⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⢦⡁⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡷⢸⣧⣾⣿⣇⣿⣎⡣⢹⣟⡘⡚⣧⠋⣅⠃⡆
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡤⣺⣽⢨⢴⢈⢤⣄⠄⠀⠀⠀⠀⠀⠀⢠⠁⠸⡿⡇⣿⣾⢻⣿⢽⢢⡙⢦⣽⣿⡆⠛⠒⠀
⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⢀⡤⣮⣷⣿⣿⣿⣿⣾⡟⠁⡀⠀⠀⠀⠀⠀⠀⠀⢀⣴⡟⠁⠐⢽⡾⣾⣿⠸⠋⠋⠁⠀⠀⠀⠐⠀⠀
⠀⠀⠈⢊⣆⠢⡀⢤⣲⣭⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿⡆⡅⠀⠀⠀⠀⣀⠶⡊⠉⠉⠁⠀⠀⠀⣁⡭⠋⡀⠀⠀⠀⠀⠀⠐⠀⠀⠀
⢶⣶⣜⡶⣼⣻⣶⣤⣊⠙⠻⠿⣿⣿⣿⣿⣿⣿⣿⣿⣇⡐⣀⣠⡴⠟⡏⠀⠀⠀⠀⡀⠀⠂⠘⠀⡐⡐⠃⠀⠀⠀⠀⠐⠀⠀⠀⠀
⠁⡕⢠⡉⠙⣳⠿⣿⣿⣿⣶⣀⠈⠉⠻⢿⣿⣿⣿⣿⣿⣿⣿⣿⡇⣷⠀⠀⠀⢀⢎⠃⠀⠀⠃⠐⠀⠀⠐⠀⡠⠀⠠⠀⠀⠀⠀⠀
⠉⠂⡅⢄⡂⢑⠓⠤⠩⠙⠻⠿⣿⣶⣤⣀⠊⠝⣻⣿⣿⠿⠿⠛⠋⠝⠀⠈⠀⠘⠀⠀⠀⠀⠀⠀⠀⠀⠂⢀⠀⠀⠀⠀⠀⠀⠀⠀
⢄⡙⡠⢁⡨⠒⠵⠨⣒⠵⠤⡁⠖⡹⣛⡿⣿⣶⠆⠉⠀⠃⠀⢐⠉⠀⠀⠐⢱⠈⠀⠀⠀⠀⠀⠀⠀⠙⠀⠆⢀⠁⠀⠀⠀⠀⠀⠀
⠲⢈⢡⣝⠠⠌⠡⢊⠀⠌⠹⢔⠡⢷⠊⢋⣁⣠⠴⠄⠀⠀⠄⠈⠀⠀⠀⠀⠄⠁⠀⠀⠀⠀⠀⠀⠀⠀⠰⣀⠂⠀⠀⠀⠀⠀⠀⠀
⢋⠝⠣⠒⡡⢢⡍⡐⢁⠢⢅⡢⢬⢦⡎⠉⠀⠀⠀⠄⢑⡄⠀⠀⠀⠀⠀⢠⠀⠀⠀⠀⠀⠀⠀⠀⢀⠼⣃⡜⠀⠀⠀⠀⠀⠀⠄⠀
⠻⡭⠃⠦⢔⡠⢀⠡⢃⢛⢩⠕⠒⠋⠀⠀⠀⠀⢠⠂⡛⠀⠀⠀⠀⡐⠀⠀⠀⠀⠀⠀⠀⠀⢀⠐⡡⢎⠱⠀⠀⠀⠀⠀⠠⢀⠄⠀
⢄⠈⢇⠆⠀⠀⠐⢈⢱⠁⠀⠀⠀⠀⠰⠐⠀⠀⠈⣄⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⡀⠁⠀⠁⠈⠌⢆⠀⠀⠀⠐⡀⠐⠀⡰
⠚⠄⠈⡜⡀⠀⠀⠀⢜⠀⠀⠀⠀⠀⠀⠀⠀⡆⠀⠘⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠄⠀⠀⢀⠸⣃
⠀⠀⡁⠃⠀⠀⠁⠀⠆⠄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⠂⡜⢁
            )" << endl;
          sleep(3);
          cout << R"(
██╗   ██╗ ██████╗ ██╗   ██╗    ██╗      ██████╗ ███████╗████████╗
╚██╗ ██╔╝██╔═══██╗██║   ██║    ██║     ██╔═══██╗██╔════╝╚══██╔══╝
 ╚████╔╝ ██║   ██║██║   ██║    ██║     ██║   ██║███████╗   ██║   
  ╚██╔╝  ██║   ██║██║   ██║    ██║     ██║   ██║╚════██║   ██║   
   ██║   ╚██████╔╝╚██████╔╝    ███████╗╚██████╔╝███████║   ██║██╗
   ╚═╝    ╚═════╝  ╚═════╝     ╚══════╝ ╚═════╝ ╚══════╝   ╚═╝╚═╝
                                                                 )" << endl;
          cout << "Unfortunately, you were too late and Kira killed you." << endl;
        }
        user->saveToFile("savefile");
      }
      else if(user->getCombatOption() == 2) { //L
        kira = new Kira("Kira", 1, 1200, 1300, 100);
        int combat;
        while(user->getHealth() > 0 && kira->getHealth() > 0) {
          //action menu
          cout << "---==== What is Your Course of Action? ====---" << endl;
          cout << endl;
          sleep(1);
          cout << "[1] Normal Attack" << endl;
          cout << "[2] Heal" << endl;
          cout << "[3] Intel" << endl;
          cout << "[4] Final Cut" << endl;
          cout << "[5] Retire from the case" << endl;
          cout << endl;
          //prompt input
          cin >> combat;
          if(combat == 1) {
            user->standardAttack(*kira);
            sleep(1);
          }
          else if(combat == 2) {
            user->heal();
            sleep(1);
          }
          else if(combat == 3) {
            user->Special1(*kira);
            sleep(1);
          }
          else if(combat == 4) {
            user->Special2(*kira);
            sleep(1);
          }
          else if(combat == 5) {
            cout << "You have been given a great compensation and let go from the department. Good luck on your journey." << endl;
          }
          else {
            cout << "Not a valid option" << endl;
          }

          //kira's battle
          int action = rand() % 3;
          switch(action) {
            case 0:
              kira->standardAttack(*user);
              sleep(1);
              break;
            case 1:
              kira->heal();
              sleep(1);
              break;
            case 2:
              kira->specialAttack(*user);
              sleep(1);
          }
          cout << endl;
          user->printInfo();
          kira->printInfo();
        }
        user->setIntelligence(2);
        user->setHealth(user->getMaxHealth());
        user->setAttack(user->getMaxAttack());
        if(user->getHealth() > kira->getHealth() && combat != 5) {
        cout << R"(
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⠟⢻⣿⣿⣿⣿⡿⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⢿⣿⣿⣿⡏⠙⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣄⠀⠙⠛⠛⠋⠀⢀⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣄⠸⠛⠛⠉⢀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣶⣤⣤⣴⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠛⠻⢿⣿⣿⣿⣶⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣿⡿⣿⣿⣿⣿⣿⣿⣿⠿⠟⡿⣿⣿⣿⣿⣿⣯⠐⠁⠀⠀⠀⠀⠙⠻⣿⣿⣿⠟⠉⡼⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⣿⡟⣿⣿⣿⣿⣿
⣿⣷⡀⠀⠀⠀⠀⠀⠀⠀⠈⣰⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠀⢀⠜⢡⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢾⣿⡇⣿⡏⠛⢿⣿
⣿⣿⣿⣦⡀⠀⠀⠀⠀⣴⣾⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⢟⣿⣿⣿⣿⣿⣿⣿⢱⣿⠇⡟⣿⠁⣿⠃⠀⠀⠙
⣿⣿⣿⣿⣿⣦⣄⣀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⢁⣾⣿⣿⣿⣿⣿⣿⠃⢸⡟⢠⢁⡏⢸⡏⠀⠀⠀⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⡟⠁⠀⡾⠁⠊⢸⠁⡼⠁⠀⠀⠀⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡶⠃⠀⠀⠀⠀⠀⠀⢀⡼⡿⣽⣿⣿⣿⣿⠉⠀⠀⣸⠃⠀⢀⠏⠰⠃⠀⠀⠀⠀⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⣉⣀⣀⠀⠀⠀⠀⢀⠔⠉⢰⠇⣿⣿⡿⡇⠈⠀⠀⠀⠁⠀⠀⠈⠀⠀⠀⠀⠀⠀⠀⠀
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠛⠉⠀⠀⠀⠀⣠⠔⠁⠀⢀⡜⠀⣿⣿⢱⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⣤⣤⡶⠀⠀⢀⡤⠊⠁⣠⣴⣾⣿⡇⠀⣿⢙⠏⡸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠋⠉⠙⠛⠉⠁⠀⢀⡴⠃⠀⢠⣾⣿⣿⣿⣿⠃⢀⣧⠎⢠⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⣿⡇
⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣀⠀⠀⠀⢀⣴⠟⠀⠀⢀⣿⣿⣿⣿⣿⣿⠀⢸⠏⢀⠇⠀⠀⠀⠀⠀⠀⠀⢀⠔⠀⠀⢀⠔⣼⣿⡿⠀
⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣶⣾⡿⠋⠀⠀⢀⣾⣿⣿⣿⠿⠋⠁⡠⠂⠀⡜⠀⠀⠀⠀⠀⠀⠀⠠⠋⠀⣀⠔⢋⠜⠀⠀⢀⠀
          )" << endl;
          sleep(2);
        cout << R"(
██╗   ██╗ ██████╗ ██╗   ██╗    ██╗    ██╗ ██████╗ ███╗   ██╗██╗
╚██╗ ██╔╝██╔═══██╗██║   ██║    ██║    ██║██╔═══██╗████╗  ██║██║
 ╚████╔╝ ██║   ██║██║   ██║    ██║ █╗ ██║██║   ██║██╔██╗ ██║██║
  ╚██╔╝  ██║   ██║██║   ██║    ██║███╗██║██║   ██║██║╚██╗██║╚═╝
   ██║   ╚██████╔╝╚██████╔╝    ╚███╔███╔╝╚██████╔╝██║ ╚████║██╗
   ╚═╝    ╚═════╝  ╚═════╝      ╚══╝╚══╝  ╚═════╝ ╚═╝  ╚═══╝╚═╝
                                                               )" << endl;
          sleep(1);
          cout << "Congratulations! You and your team have solved the Kira case." << endl;
          user->gainXp();
        }
        else {
          cout << R"(
        ⣠⣴⡿⢏⡴⠆⠠⠤⡐⠂⢈⣈⠉⡁⠀⡀⠀⢀⡓⣰⡤⢀⠓⠀⠀⠀⢤⣀⣁⠈⠙⠫⣾⣀⠀⠘⢹⣿⣿⣿⣿⣿⣿
⠀⠀⠀⠀⠀⢀⣼⡿⣯⣤⣽⣧⣼⣿⣿⣶⣴⣦⣙⡛⢀⣈⣙⠓⠄⠈⠉⠓⢿⣽⣶⣄⢀⡀⠙⠿⣿⣷⣦⣙⢿⣿⣦⡘⣿⣿⣿⣿⣿⣿
⠀⠀⠀⠀⠀⣼⡿⢁⣾⣻⣿⣿⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣤⣀⠙⠷⣾⣝⣻⣿⣯⣵⣦⣝⢻⣿⣿⣿⣿⣿⣿⣾⣿⣿⣿⣿⣿
⠀⠀⠀⢠⡾⣿⢁⣾⣇⣿⣿⢻⠀⣿⡎⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣬⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⠀⠀⣰⠋⢰⣿⣿⣿⣻⢷⣿⡏⢰⣸⣇⡹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⠀⠀⠁⠀⣾⣿⣿⣿⢉⣾⣿⣿⣸⣷⣿⣷⡙⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⠀⠀⠀⠀⣿⣿⣿⣿⢸⣿⣿⣿⣿⣿⣿⣿⣷⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⠀⠀⠀⢀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⠀⠀⠀⣸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⠀⠀⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠘⣿⡘⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⠤⢤⡴⠛⣿⡿⢻⣿⣿⣿⣿⣿⣿⣿⢶⣼⣷⡢⣿⣿⣿⣿⣿⣿⢿⣿⣿⣟⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⣠⠏⠀⠀⣿⡇⢸⣿⡿⣿⣿⣿⣿⣿⣿⣿⣿⣹⣷⣿⣿⣿⣿⣿⣧⡙⢿⣿⣧⣈⣙⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⡏⠀⠀⠀⢸⡇⠀⣿⡧⢿⣿⣿⣿⣿⣇⠀⠀⠀⠀⢹⠀⠉⠻⣿⣿⣷⡄⠙⢾⣿⣿⣿⣯⣭⡽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
⠃⠀⠘⡀⠈⡇⠀⣿⣿⠸⣿⣿⣿⣿⣇⠀⠀⠀⠀⡜⠀⠀⠀⠈⠓⠬⠿⠆⠀⠈⠉⠉⠁⠀⠀⠈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠻
⠀⠀⠀⢱⡀⠑⠀⢸⡿⡄⢻⣿⣿⣿⢿⣆⠀⠀⢠⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⡿⣿⣿⣿⣿⣿⣿⣷
⠀⠀⠀⠀⢇⠀⠀⠈⡇⠱⡈⣿⣿⣿⡌⠻⠂⠀⢸⣄⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⣿⠀⠹⣿⡟⠻⢿⣿⣿
⠀⡄⠀⠀⠘⡄⠘⡄⢱⠀⠃⢹⡇⢹⣿⡄⠀⠀⠀⠈⢻⣽⣿⡷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⡏⠀⠀⠘⢿⣄⠀⢨⠟
⠀⢹⡄⠀⠀⠘⡀⠘⣄⠀⠀⢸⠃⠘⡇⠙⣆⠀⠀⡀⠀⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⡏⣼⣿⢿⡿⠀⠀⠀⠀⠀⠙⣶⠃⠀
⠀⠀⢿⣄⠀⠀⠱⡀⠈⢆⠀⠜⠀⠀⢱⣤⢻⣷⣄⠉⡿⢻⡒⠒⠤⢄⣀⠀⠀⠀⠀⠀⠀⠀⣰⣿⠟⣿⣿⣸⠃⠀⠀⠀⠀⣠⠞⠁⠀⠀
⠀⠀⠘⣿⣆⠀⠀⠙⢄⠈⢢⠀⠀⠀⠀⢸⠈⡏⣿⠞⠁⣸⡟⠲⠂⠀⠀⠀⠀⠀⠀⠀⣠⣾⠟⠁⠀⣿⡿⠋⠀⠀⠀⣠⠞⠁⠀⠀⠀⠀
⠀⠀⠠⡈⠻⣆⠀⠀⠈⠳⡀⢣⡀⠀⠀⢸⣀⠿⠃⢠⣾⡟⠁⠀⠀⠀⠀⠀⢀⣠⣴⡿⠋⠁⠀⠀⣸⡏⠀⠀⠀⣠⡾⠃⢠⡞⠀⠀⠀⠀
⠠⠤⣀⣙⣲⣌⡑⠤⣀⠀⠘⢆⣷⠠⠴⠾⠥⠤⠴⠿⢯⣿⣦⣀⣀⣀⣤⣶⣿⣟⣁⣀⣀⣠⠴⣴⠏⣀⣀⣤⡾⠋⠀⣰⠋⠀⠀⠀⠀⠀
⠀⠀⠀⠀⣉⡙⠛⠲⢤⡉⢲⠞⣀⡤⣄⣀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣿⣛⠷⣄⠀⠀⠉⠁⢀⣠⠟⢋⣩⠟⠋⠀⣠⠞⠁⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⣈⡽⠗⣃⠼⠿⠋⠁⠀⠀⠉⠻⣿⣿⣷⣶⣶⣶⠀⢹⡀⠉⠛⠾⣿⣳⠚⢛⣋⣡⣶⣫⠥⠞⠋⠉⠉⠙⠛⠒⠒⠒⠦⠄⠠
⠀⠀⠒⠋⠉⣀⣠⠞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⢦⣿⣉⣷⠈⡿⠲⣤⣀⠀⣉⡿⠛⠋⠉⣁⡠⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
            )" << endl;
          sleep(3);
          cout << R"(
██╗   ██╗ ██████╗ ██╗   ██╗    ██╗      ██████╗ ███████╗████████╗
╚██╗ ██╔╝██╔═══██╗██║   ██║    ██║     ██╔═══██╗██╔════╝╚══██╔══╝
 ╚████╔╝ ██║   ██║██║   ██║    ██║     ██║   ██║███████╗   ██║   
  ╚██╔╝  ██║   ██║██║   ██║    ██║     ██║   ██║╚════██║   ██║   
   ██║   ╚██████╔╝╚██████╔╝    ███████╗╚██████╔╝███████║   ██║██╗
   ╚═╝    ╚═════╝  ╚═════╝     ╚══════╝ ╚═════╝ ╚══════╝   ╚═╝╚═╝
                                                                 )" << endl;
          sleep(1);
          cout << "Unfortunately, you were too late and Kira killed you and the rest of the team." << endl;
        }
        user->saveToFile("savefile");
        }
      else if(user->getCombatOption() == 3) { //MISA
        kira = new Kira("Kira", 1, 1100, 1400, 100);
        int combat; //user option
        while(user->getHealth() > 0 && kira->getHealth() > 0) {
          //action menu
          cout << "---==== Choose Your Action ====---" << endl;
          cout << endl;
          sleep(1);
          cout << "[1] Normal Attack" << endl;
          cout << "[2] Heal" << endl;
          cout << "[3] Quick Attack" << endl;
          cout << "[4] Loving Streak" << endl;
          cout << "[5] Run away with Misa" << endl;
          cout << endl;
          //prompt input
          cin >> combat;
          if(combat == 1) {
            user->standardAttack(*kira);
            sleep(1);
          }
          else if(combat == 2) {
            user->heal();
            sleep(1);
          }
          else if(combat == 3) {
            user->Special1(*kira);
            sleep(1);
          }
          else if(combat == 4) {
            user->Special2(*kira);
            sleep(1);
          }
          else if(combat == 5) {
            cout << "Misa rejected your advances and you were fired from your job." << endl;
            sleep(1);
          }
          else {
            cout << "Not a valid option" << endl;
            sleep(1);
          }

          //kira's turn
          int action = rand() % 3;
          switch(action) {
            case 0:
              kira->standardAttack(*user);
              sleep(1);
              break;
            case 1:
              kira->heal();
              sleep(1);
              break;
            case 2:
              kira->specialAttack(*user);
              sleep(1);
              break;
          }
          cout << endl;
          user->printInfo();
          kira->printInfo();
        }

        user->setHealth(user->getMaxHealth());
        kira->setHealth(user->getMaxHealth());
        if(user->getHealth() > kira->getHealth() && combat != 5) {
          cout << R"(
            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⣀⣀⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣤⠶⢶⣾⣟⠛⢻⡩⣍⠉⠉⠛⠻⠿⣍⡙⠳⣶⣾⡟⠿⠭⢛⠲⠶⣄⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⠾⠛⡏⠀⣄⢦⠙⢯⡳⣄⠉⢿⣷⣄⠀⢠⠀⠈⠙⠻⣿⣿⣿⣄⣀⣤⣤⣤⣀⡉⠻⢷⣤⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡴⣿⠇⠀⡾⣽⡀⠈⢿⣷⡀⠹⣿⣆⠀⠙⢯⢦⠀⢳⡀⠀⠀⢨⣿⢿⣿⣧⡈⠙⢦⡈⠉⠛⢶⣝⢏⠳⣆⡀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⢫⡇⣿⠸⡄⢧⢹⣧⠀⠀⢻⣿⡀⠈⢻⣧⠀⠈⢿⣳⡀⢳⡠⠀⠘⣿⠸⣿⡝⣷⡀⠀⠹⣦⠀⠀⠈⠻⣦⡈⠻⣦⡀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⡟⠁⠀⡇⣿⠀⢳⠘⡌⣯⣇⠀⠀⠹⣿⡄⠀⠹⣇⠀⠀⢷⡳⠀⢳⢳⡄⠘⠀⣿⣷⠸⣷⡀⠀⠙⣆⠀⠀⠀⠘⢿⣆⠈⢳⣄⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡼⣿⡇⠀⠀⢷⠹⡀⠀⢷⡘⣜⣾⣇⠀⠀⠹⣿⡄⠀⠸⣆⠀⠈⢷⡀⠈⣧⢧⠀⠀⢿⣾⡀⢹⣷⠀⠀⠸⣇⠀⠀⠀⠈⢻⣧⡀⠙⣆⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⢳⢿⡇⠀⠀⢸⡄⡇⠀⠈⢳⡘⣞⣿⣦⠀⠀⠹⣿⡄⠀⠹⡄⠀⠀⢣⡀⠸⡾⣆⠀⢸⣿⡇⠀⢿⡇⠀⠀⢹⡀⠀⠀⠀⠀⠻⣷⡀⠘⣇⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⢿⠈⣼⣹⠀⠀⠀⢻⣱⠀⠀⠀⠹⣌⢿⣾⣧⡀⠀⠘⣿⡀⠀⢻⡀⠀⠀⠁⠀⢳⣿⠀⢸⣿⢧⠀⠘⡇⠀⢧⠀⣷⠀⠀⠀⠀⠀⠹⡿⡄⠘⣆⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⠏⢧⠀⣷⣟⣇⠀⠀⠈⢧⣄⠀⠀⠀⠈⠃⠙⢿⣿⣄⠀⠙⣧⠀⠈⡇⠀⠀⠀⠀⠘⣏⡇⡆⣿⢸⠀⠀⢹⡀⠈⣇⠸⡆⠀⠀⠀⠀⠀⠹⣿⡄⠙⡀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡄⣾⠀⠘⣾⣿⣄⠀⠀⠈⢿⣆⠀⠀⠀⠀⠀⠀⠻⣿⣷⣄⢹⣇⠀⠀⠀⠀⠀⠀⠀⢻⣿⢃⣿⣿⡆⠀⠀⣧⠀⢸⡀⣇⠀⠀⠀⠀⠀⠀⠁⠁⠀⠁
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣧⠻⡇⠀⠘⢿⣻⣧⡀⠀⠈⢿⣷⢤⣀⠀⠀⠀⣀⣀⣬⣙⡷⣿⡄⠀⠀⠀⠀⠀⠀⡈⣿⣟⠻⣿⡇⠀⠀⠘⠀⠀⣧⢸⡀⠀⠀⠀⠀⠀⠀⠄⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣾⡏⣆⠀⣀⠀⠀⠻⣷⡿⠢⣄⡀⠹⣧⡉⠙⢲⣿⠟⠉⣤⣿⣿⣯⣷⠀⠀⠀⠀⠀⠀⣷⢿⣿⢶⢿⡇⠀⠀⠀⠀⠀⠸⡽⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⢻⣷⢹⡄⠘⢧⡀⠀⠈⠻⢶⣶⣉⠙⠉⠙⠓⠀⢻⡇⠀⢻⣿⣿⣿⡿⡇⠀⠀⠀⠀⠀⢹⢸⢡⠀⢸⡇⠀⠀⠀⠀⠀⠀⡇⣷⠀⠀⠀⠀⠀⠀⠀⠀⢀
⠀⠀⠀⠀⠀⠀⠀⠀⢰⢧⣟⣟⡄⢿⣄⠈⠻⣷⠢⠤⠀⠈⠉⠓⠀⠀⠀⠀⠀⠀⠀⣀⣻⠟⠋⠀⢹⠀⠀⠀⠀⠀⠈⡏⣿⠀⣸⣇⠀⠀⠀⠀⠀⠀⠸⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢠⣿⢸⢹⣿⢳⡘⡿⣦⣀⣽⡷⢦⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠀⠀⠀⠀⠈⣧⠀⠀⠀⠀⠀⡇⢹⢀⣿⣿⠀⠀⠀⠀⠀⠀⠀⠸⡀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢸⡏⣸⢸⠋⡆⡿⣽⣽⣟⡿⠀⢶⣼⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⡄⠀⠀⠀⠀⣇⢸⣾⢸⣻⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢸⣇⣿⡟⠀⢧⢇⠘⣿⣿⣳⡀⠸⣿⣿⠿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢧⠀⠀⠀⠀⢹⢸⢹⢾⢸⠀⠀⠀⠀⠀⠀⠀⠀⢰⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⢹⢿⢱⣴⣿⡾⡀⠸⡧⡉⠓⠒⠂⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⡇⠀⠀⠀⢸⢾⣾⣟⢸⠀⠀⠀⠀⠀⠀⠀⠀⠸⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⣾⣿⣿⣧⣷⠀⢻⡹⡆⠀⠀⠀⠀⠻⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢱⠀⠀⠀⢸⣿⢹⡟⠙⡇⠀⠀⠀⠀⠀⠀⠀⠀⡆⠀⠀⠀⠀⠀⠀⠀
⠀⢀⣀⣀⣀⣀⣀⡀⢠⢿⣿⣿⠏⠘⡾⡄⠀⢧⡸⡀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣠⢴⡖⠀⠀⠀⠀⠀⠀⠸⡄⠀⠀⢸⣿⠸⡇⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠁⠀⠀⠀⠀⠀⠀⠀
⠀⡼⠀⠀⠀⠀⠀⣹⣿⡿⡻⠋⠀⠀⢻⢧⠀⠀⢳⣳⡀⠀⠀⠀⠀⠀⣴⣛⠉⠀⢀⡼⠁⠀⠀⠀⠀⠀⠀⠀⣷⠀⠀⢸⣿⠀⣇⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀⠀⠀⠀
⠀⡷⠒⠒⠒⢶⣾⠹⣿⣼⠃⠀⠀⠀⠈⢿⡆⡀⠀⢳⣳⣦⠀⠀⠀⠀⠈⠉⠉⠛⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⣸⡇⠀⢸⣿⠀⣿⡀⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⢸⠁⢀⡄⠀⠘⣿⣄⣿⠈⠛⢦⡀⠀⠀⣼⣿⢷⡀⠀⠹⣎⠳⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣾⡿⡇⠀⢸⡿⠀⡿⡇⢹⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠛⠛⢾⡇⠀⢀⡟⣸⠛⢷⣄⠀⠙⢳⣾⡟⠙⣏⢧⠀⠀⠘⣆⢸⡿⣦⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣴⡿⠋⠀⢇⠀⢸⡇⠀⢻⢧⢸⡇⠀⠀⠀⠀⠀⠀⠀⠀⢸⡀⠀⠀⠀⠀⠀
⠀⠀⠸⡇⣀⣼⡟⣿⣿⣦⣝⣳⣦⣾⠿⣷⠀⠸⡞⣆⠀⠀⠸⡆⢷⢈⣧⠙⣶⣄⡀⠀⢀⣠⣴⣾⣿⠟⠁⠀⠀⢸⠀⢸⡇⠀⠸⡿⡄⣇⠀⠀⠀⠀⠀⠀⠀⠀⠙⡇⠀⠀⠀⠀⠀
⣆⠀⠀⣿⠁⡼⢁⣀⣙⢿⣏⣣⣬⣿⠀⠙⠳⣄⠹⡽⡄⠀⠀⠹⡈⡎⣿⠀⣧⣧⠉⢻⣿⣿⣿⡿⠃⠀⠀⠀⠀⢸⡄⣿⠃⠀⠀⢹⡻⣽⡀⠀⠀⠀⠀⠀⠀⠀⠀⢱⠀⠀⠀⠀⠀
⡿⡀⠀⢸⣾⡃⣿⣿⣿⣤⣾⡿⢹⡏⠀⠀⠀⠈⠉⠻⣵⡀⠀⠀⠻⣵⢸⡆⢸⡞⡆⠸⡿⡟⠁⠀⠀⠀⠀⠀⠀⢸⡇⡿⠀⠀⠀⠀⠳⡙⢷⡀⠀⠀⠀⠀⠀⠀⠀⢸⡆⠀⠀⠀⠀
⠂⣃⠀⢸⣿⣿⣿⣿⢿⣤⣿⢃⠏⠀⠀⠀⠀⠀⠀⠀⠹⣿⡀⠀⠀⢻⡏⣧⢈⡿⣽⡄⣧⢻⡀⠀⠀⠀⠀⠀⠀⢸⢱⠇⠀⠀⠀⠀⣀⣽⣦⣿⣧⣤⠤⣤⣤⣤⣤⡀⢧⠀⠀⠀⠀
⢺⣿⡀⢸⣿⣿⣽⣿⣿⣭⣽⠟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⣿⡄⠀⠈⢷⣿⢸⡇⢹⣷⣿⣾⡇⠀⠀⠀⠀⠀⠀⣞⡿⠀⠀⠀⣠⣾⡿⣯⣿⡿⢋⣵⣾⣿⣿⣿⣿⣿⣾⡆⠀⠀⠀
⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⣄⠀⠘⣾⢸⡇⢸⠻⣿⣽⠃⠀⠀⠀⠀⠀⢀⣿⡥⢤⣰⣿⡿⣫⠞⡵⠋⣠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀
⠀⣿⣷⣿⣿⣷⣿⢿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣆⠀⢿⣿⠇⣸⣤⠞⠋⠀⠀⣀⡤⠖⠛⠉⢸⡇⠈⣿⢋⣴⢫⡞⢁⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⠀
⠀⠹⣎⢉⡻⣷⣽⣿⣿⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⢧⠘⣯⠞⠛⠉⠁⠀⠀⢘⣁⣀⣀⣀⣴⣿⣇⠀⢸⣿⣱⡟⢠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦
⠀⠀⠘⡳⣕⣠⣝⣻⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⣤⣤⣾⢇⡇⠀⠀⠀⠀⠀⠀⣼⣁⣀⡀⠀⠀⠀⠽⠛⠋⠙⣏⣀⣟⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
            )" << endl;
          sleep(3);
          cout << R"(
██╗   ██╗ ██████╗ ██╗   ██╗    ██╗    ██╗ ██████╗ ███╗   ██╗██╗
╚██╗ ██╔╝██╔═══██╗██║   ██║    ██║    ██║██╔═══██╗████╗  ██║██║
 ╚████╔╝ ██║   ██║██║   ██║    ██║ █╗ ██║██║   ██║██╔██╗ ██║██║
  ╚██╔╝  ██║   ██║██║   ██║    ██║███╗██║██║   ██║██║╚██╗██║╚═╝
   ██║   ╚██████╔╝╚██████╔╝    ╚███╔███╔╝╚██████╔╝██║ ╚████║██╗
   ╚═╝    ╚═════╝  ╚═════╝      ╚══╝╚══╝  ╚═════╝ ╚═╝  ╚═══╝╚═╝
                                                               )" << endl;
          sleep(1);
          cout << "Congratulations! You and your team have solved the Kira case." << endl;
          user->gainXp();
        }
        else {
          cout << R"(
  ⣠⣴⠞⠋⠉⣹⣿⣿⣶⣯⡵⠶⠶⣶⠚⣽⠋⠀⠀⡀⢠⡟⠀⠘⡆⢳⣧⠹⣷⡙⢿⣎⢻⣦⣤⣤⣄⡀⠛⠉⠉⠉⠉⠉⠀
⣾⠋⠀⢀⣶⡶⠿⢿⣿⣿⠉⠀⠀⡼⠁⠀⠀⠀⢠⠎⠀⣸⠁⠀⣰⣳⠘⣿⠀⠘⣷⡈⠪⢳⡹⣿⣷⣄⠙⢳⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠃⠀⢠⡿⠋⠀⠀⢰⣿⠀⠳⢀⡾⠁⠀⠀⠀⢀⠎⠀⢰⠇⠀⠀⣿⠋⡄⣿⠙⡆⠘⣷⡀⠁⠹⣿⠛⢬⣳⡀⠹⣷⡀⠀⠀⠀⠀⠀⠀⠀
⠀⢠⢿⠃⠀⠀⠀⡇⢹⡇⢀⣾⠁⠀⠀⠀⢠⠏⠀⢀⡏⠀⠀⢰⣿⢠⡇⣿⡇⢹⡀⢹⣷⠀⠀⢻⣇⠀⠻⣷⡀⠹⣷⡄⠀⠀⠀⠀⠀⠀
⠀⡞⡼⠀⠀⠀⢰⠃⢸⣇⣼⠏⠀⠀⠀⢀⠎⠀⢀⡞⠀⠀⠀⣸⡏⣸⢇⡟⢷⢸⢷⠀⣿⣇⡀⠀⣿⠀⠀⢹⣧⠀⠹⣷⡀⠀⠀⠀⠀⠀
⡸⠁⡇⠀⠀⠀⡞⢰⢸⣙⡟⠀⠀⠀⠀⡞⠀⢀⡾⠁⠀⠀⢠⡿⢠⠇⢸⡇⣸⢸⠻⡆⢻⣿⣧⠀⢿⡆⠀⠈⣿⡇⠀⢹⣧⠀⠀⠀⠀⠀
⡇⢠⠀⠀⠀⠀⡇⣾⠀⣿⠆⠀⠀⠀⡼⠀⢠⣾⣃⣀⣀⣤⠿⠛⠋⠀⠚⠀⠛⣻⣾⣧⣼⣏⡇⠀⣾⣧⠀⠀⢻⣷⠀⢸⢹⡄⠀⠀⠀⠀
⠃⢸⠀⠀⠀⢠⠇⣿⡄⣽⡜⠀⠀⢠⡇⡴⢻⣷⣿⡿⣿⠁⠀⠀⠀⠀⠀⠀⢰⣿⣿⡿⣿⠟⣇⠀⠹⣿⠀⠀⢸⢸⡀⠈⠁⡇⠀⠀⠀⠀
⠀⢸⠀⠀⠀⢸⠀⣿⣷⣿⠆⠀⠀⢸⠁⢧⠀⠛⠟⠃⠀⠀⠀⠀⠀⠀⠀⠀⠘⠛⠿⣃⡉⠀⢻⠀⠠⢹⠀⠀⠸⡌⠀⠀⡇⡇⠀⠀⠀⠀
⡆⢸⠀⠀⠀⢸⢸⡿⢿⣿⡆⠀⠀⣿⠀⠈⠓⠒⠚⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠋⠀⠀⢸⠀⠀⢸⡇⠀⠀⡇⡄⢸⠁⡇⠀⠀⠀⠀
⡇⢸⠀⠀⠀⣼⣿⣷⠀⣿⠀⠀⢀⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⠀⡇⠀⠀⡇⡇⢸⢀⡇⠀⠀⠀⠀
⠸⡘⠀⠀⠀⣿⣼⣿⣧⡿⠀⠀⢸⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⠀⠀⠀⡇⠀⠀⣷⡇⡆⢸⠁⠀⠀⠀⠀
⠀⢻⡇⠀⠀⣿⣿⣿⢻⣇⠀⠀⢸⣹⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⠀⠀⠀⠀⠀⠀⣰⣿⡄⠀⠀⡇⠀⠀⣿⣿⠀⡏⠀⠀⠀⠀⠀
⠀⠈⣷⠀⠀⣿⣿⢿⣿⣿⠀⠀⢸⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⢠⠛⠛⠋⠀⠀⠀⠀⠀⣰⣿⣿⠁⠀⠀⡇⠀⠀⣿⠇⣸⠁⠀⠀⠀⠀⠀
⡆⠀⢻⡇⠠⣿⣿⣿⣿⢿⡇⠀⠈⣿⣿⠷⣤⡀⠀⠀⠀⠀⠀⠘⠒⠒⠃⠀⠀⠀⣠⣾⡏⢹⣿⠀⠀⢀⡇⠀⣸⡟⢰⠃⠀⠀⠀⠀⠀⠀
⣧⠀⢸⡇⠘⣿⣿⣿⣿⡿⣧⠀⠀⢹⣿⡇⠈⠻⢷⣤⣀⠀⠀⠀⠀⠀⠀⣀⣴⣾⣿⢹⡇⢸⣿⠀⠀⣸⠀⢀⣿⢱⠁⠀⠀⠀⠀⠀⠀⠀
⣿⡀⢸⡏⠀⣿⣿⢿⡟⡇⢹⠀⠀⢸⣿⠃⠀⠀⠀⠙⠻⣿⣶⣤⣤⣴⣾⣿⣿⣿⡟⠈⣇⣸⡇⠀⣼⡟⠀⣼⣟⠃⠀⠀⠀⠀⠀⠀⠀⠀
⣿⢣⢸⠃⠀⣿⣿⡾⣧⣷⣾⣦⠠⡄⣿⠀⠀⠀⠀⠀⠀⠀⠉⠛⠻⠿⠿⢿⣏⠙⠻⣾⣿⣹⠀⢠⣿⣷⠀⠉⠙⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠘⢸⡞⠀⢠⣿⣿⣷⢏⣿⣿⡿⣷⣱⣿⣷⣦⣄⣀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⡆⠀⠙⣿⠃⣠⣿⣟⣟⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠷⠾⠷⢶⣿⣿⣿⠇⣾⣿⣿⡇⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣶⣶⣶⣿⣿⣿⣿⡄⣠⣧⣶⣿⣿⣿⣾⣿⣤⣀⣀⣀⡀⠀⠀⠀⠀⠀⠀
⡀⠀⢀⣾⣿⣿⡏⣼⣿⣿⠟⠁⠈⣿⣿⡈⠛⠋⠛⠛⠿⠿⠿⠿⠿⠿⠟⠋⠀⣿⣇⠀⣿⣿⣿⣿⣮⡻⣿⣷⣦⣄⠉⠙⠻⣷⣦⡀⠀⠀
⣿⣦⣼⣿⣿⣟⣼⡿⠛⠁⠀⠀⠀⣿⣿⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⢿⠀⢻⣿⣿⣿⣿⣿⣮⣿⣾⣿⣷⣠⡀⢹⣿⣷⠀⠀
⣿⣿⣿⣿⡟⠺⢿⣤⣄⣀⠀⠀⢀⣾⣿⡈⣿⡉⠉⠑⠢⠀⠀⠀⠀⠀⠐⠃⠀⣿⣾⡆⠈⠛⠿⢟⣁⣤⣼⣏⣿⠿⣿⡇⣷⣿⡏⣿⣇⠀
⡿⣿⣟⣛⢒⣾⣛⣛⣉⣉⣉⣛⣛⠿⣿⣧⡘⢷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠋⣷⣄⣤⡞⢋⣩⣥⣼⣷⣶⣶⣿⣿⣿⣿⢃⣿⣿⡀
⣿⡹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠦⣽⣌⣛⣷⣀⠀⠀⠀⠀⠀⠀⠀⣀⣼⣿⣾⣿⣿⣿⠿⠿⠛⠿⠿⣿⣿⣿⣿⣿⣿⡟⣸⣿⣿⣷
            )" << endl;
          sleep(3);
          cout << R"(
██╗   ██╗ ██████╗ ██╗   ██╗    ██╗      ██████╗ ███████╗████████╗
╚██╗ ██╔╝██╔═══██╗██║   ██║    ██║     ██╔═══██╗██╔════╝╚══██╔══╝
 ╚████╔╝ ██║   ██║██║   ██║    ██║     ██║   ██║███████╗   ██║   
  ╚██╔╝  ██║   ██║██║   ██║    ██║     ██║   ██║╚════██║   ██║   
   ██║   ╚██████╔╝╚██████╔╝    ███████╗╚██████╔╝███████║   ██║██╗
   ╚═╝    ╚═════╝  ╚═════╝     ╚══════╝ ╚═════╝ ╚══════╝   ╚═╝╚═╝
                                                                 )" << endl;
          sleep(1);
          cout << "Unfortunately, you were too late and Kira killed you." << endl;
        }
        user->saveToFile("savefile");
        }
      else {
        cout << "Goodbye. It was nice working with you..." << user->getName() << endl;
        exit(1);
      }
      }
      }
  return 0;
    }
