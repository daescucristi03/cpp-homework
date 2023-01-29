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
int afterWithdrawal(const int initialSold, int toWithdrawSum) {
  return (toWithdrawSum > initialSold)
             ? (-1)
             : (sum(initialSold, (toWithdrawSum * (-1))));
}

// Tema:
// O functie ce face conversia de la minute la secunde
// O functie ce sa returneze restul impartirii a 2 numere
