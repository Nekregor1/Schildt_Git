#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
#include <typeinfo>
using namespace std;

int kbhit();

char *fortunes[] = {
    "Вскоре деньги потекут к Вам рекой.\n",
    "Вашу жизнь озарит новая любовь.\n",
    "Вы будете жить долго и счастливо.\n",
    "Деньги, вложенные сейчас в дело, принесут доход.\n",
    "Близкий друг будет искать Вашего расположения.\n"
};

void demo_array_index()
{
    int chance;

    cout << "Чтобы узнать свою судьбу, нажмите любую клавишу: ";
    // Рандомизируем генератор случайных чисел
    while (!kbhit())
        rand();
    cout << '\n';

    chance = rand() % 5;
    cout << chance << '\n' << *fortunes[chance];
    cout << '\n' << typeid (*fortunes[chance]).name() << '\n';
    cout << fortunes[chance];
}
int kbhit()
{
  struct termios oldt, newt;
  int ch;
  int oldf;

  tcgetattr(STDIN_FILENO, &oldt);
  newt = oldt;
  newt.c_lflag &= ~(ICANON | ECHO);
  tcsetattr(STDIN_FILENO, TCSANOW, &newt);
  oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
  fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

  ch = getchar();

  tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
  fcntl(STDIN_FILENO, F_SETFL, oldf);

  if(ch != EOF)
  {
    ungetc(ch, stdin);
    return 1;
  }

  return 0;
}
