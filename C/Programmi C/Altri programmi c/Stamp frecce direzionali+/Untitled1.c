#include "stdio.h"
#include "conio.h"

int main() {
int key = 0;
printf("Press a key to continue, press Esc to quit\n");
while (key != 3) {
key = getch();

switch (key) {
case 72: printf("up arrow\n");
break;
case 75: printf("left arrow\n");
break;
case 77: printf("right arrow\n");
break;
case 80: printf("down arrow\n");
break;
}
}

}


