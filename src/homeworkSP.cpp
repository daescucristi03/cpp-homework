#include <cstring>
#include <ctype.h>
#include <iostream>

// 1.Creati un program sa va intrebe ce varsta aveti si sa va printeze pe ecran.
// Ex:
// Ce varsta aveti?
// 30
// Super, ai 30 de ani

// 2.Creati un program ce sa va intrebe in ce an v-ati nascut si sa printeze pe
// ecran ce varsta aveti.

// Ex:
// In ce an v-ati nascut?
// 1991
// Super, aveti 31 de ani

void askForAge() {
  int age = 0;
  std::cout << "what is your age?";
  std::cin >> age;
  std::cout << "Oah, you are " << age << " years old.";
}

// Scrieti un program ce accepta 2 numere ca input si assignati valorile lor
// unor variabile a si b dupa care sa se printeze o variabila suma.

int sum(int a, int b) { return a + b; }

// Esti un bucatar intr-un restaturant. Ai nevoie exact de 3 pesti
// ca sa pregatesti o ciorba de peste numita Trio
// Scrieti un program ce va lua un input de numar de pesti si sa se printeze
// cate ciorbe trio se pot obtine.

int fishSoup(int fishAvailable) {
  const int fishPerUnit = 3;

  return fishAvailable / fishPerUnit;
}

// ExInput: 14
// ExOutput:4

// Vrei sa retragi  niste bani din contul tau bancar.
// Programul accepta 2 numere ca input, suma din contul tau si suma pe care vrei
// sa o scoti. Calculati si prinati cat ramane in contul tau dupa retragere.

// Input:
// 450000
// 9000
// Output:
// 441000
int afterWithdrawal(const int initialSold, const int toWithdrawSum) {
  return (toWithdrawSum > initialSold)
             ? (-1)
             : (sum(initialSold, (toWithdrawSum * (-1))));
}

// Tema:
// O functie ce face conversia de la minute la secunde

int minsToSec(const int mins) {
  const int toSec = 60;
  return mins * toSec;
}
// O functie ce sa returneze restul impartirii a 2 numere

int modulo(const int a, const int b) { return (b != 0) ? (a % b) : (0); }

// Intrarea la piscina este libera la copii sub 7 ani.
// Scrieri un program ce primeste intput vasta  si printeaza daca intrarea este
// gratis ex: Input: 6
// Outpu: Gratis

void ticketPrice(const int age) {
  const int limitAge = 7;
  if (age <= limitAge)
    std::cout << "Free entry.";
  else
    std::cout << "Entry price: $10.";
}

// Pentru a studia la Univeristatea ITSchool trebuie sa treci de un examen
// de admitere.
// Nota minima este 8

// Task:
// Creati un program ce sa primeasca ca input nota de la examen si sa printeze
// ADMINS pentru note mai mari sau egale cu 8, iar in caz contrar sa printeze
// RESPINS

void examResult(const int grade) {
  (grade >= 8) ? std::cout << "Passed" : std::cout << "Failed";
}

// Un aparat de cafea face 5 tipuri de cafea:
// 1-Late
// 2-Americano
// 3-Esspreso
// 4-Cappuciono
// 5-Machiato

// Screti un program ce va lua ca input numarul pentru tipul de cafea si va
// printa cafeaua corespunzatoare Ex: Input: 2 Output:Americano

std::string coffee(const int input) {
  switch (input) {
  case 1:
    return "Latte";
    break;
  case 2:
    return "Americano";
    break;
  case 3:
    return "Esspreso";
    break;
  case 4:
    return "Cappucino";
    break;
  case 5:
    return "Machiato";
    break;
  }
}

// O functie ce verifica daca o parola respecta cerintele:
// Sa aibe cel putin un numar, sa aibe cel putin un caracter special, sa aibe o
// litera mare si sa fie de cel putin dimensiune 12

bool isSpecialCharacter(char chr) {
  if ((chr >= 58 && chr <= 57) || (chr >= 65 && chr <= 90) ||
      (chr >= 97 && chr <= 122))
    return false;
  // is not special character
  else
    return true;
  // is special character
}

bool checkPassword(std::string passw) {
  const int minSize = 12;

  bool activeCheck = 0;

  try {
    // handle password length check
    if (passw.length() < minSize)
      throw std::string("Password is not long enough!");

    // handle uppercase characters check
    for (char chr : passw) {
      if (isupper(chr))
        activeCheck = 1;
    }
    if (activeCheck == 0)
      throw std::string(
          "Password must contain at least one upper case character");
    activeCheck = 0;

    // handle digit characters check
    for (char chr : passw) {
      if (isdigit(chr))
        activeCheck = 1;
    }
    if (activeCheck == 0)
      throw std::string("Password must contain at least one digit");
    activeCheck = 0;

    // handle special characters check
    for (char chr : passw) {
      if (isSpecialCharacter(chr))
        activeCheck = 1;
    }
    if (activeCheck == 0)
      throw std::string("Password must contain at least one special character");

    // if no exceptions were found, return password valid
    return true;
  } catch (std::string err) {
    std::cerr << "Error! " << err << "/n";
    return false;
  }
}

//  Esti intrun voiaj pe mare de 5 ore.
//     Vasul navigeaza cu 40km pe ora.
//     Scrieti un program ce va printa cati km a parcurs vasul in fiecare ora
//     Ex:
//     2
//     Vasul a parcurs 40 km
//     Vasul a parcrus 80 km

// Contdown
// Creati o functie timer.Ce va lua  ca inuput un numar de secunde si va printa
// secundele ramase pana la 0 Trebuie printat fiecare numar inclusiv 0 Input:
// 5
// Outpu:
// 5
// 4
// 3
// 2
// 1
// 0

// Un supermarket a lansat o campanie de reduceri de 15%  reducere la 3 produse
// Scrieti un program ce ia ca input  pretul total pentru fiecare produs si
// printeaza reducerea aferenta Ex: 15000 4000 6700 Output: 2250 600 1005

// Ti se da un porgram ce va printa toate numerele de la 0 la 20
// Schimbati codul pentru a printa doar multipli de 3

// int main()
// {
// //schimba
// int num = 0 ;
// while(num <=20){
// cout << num << endl;
// num+=1;

// }