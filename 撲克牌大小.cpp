#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bits/stdc++.h>
#define MAX 36*3 + 16*4
using namespace std;
int main() {
 int n;
 scanf("%d ", &n);
 while (n--) {
  char buf[MAX], cards[52][4];
  fgets(buf, MAX, stdin);
  buf[strlen(buf) - 1] = '\0';

  int count = 0;
  char *pch = strtok(buf, " ");
  while (pch != NULL) {
   strcpy(cards[count++], pch);
   pch = strtok(NULL, " ");
  }

  for (int i = 0; i < count - 1; i++)
   for (int j = i + 1; j < count; j++)
    if ((cards[i][0] < cards[j][0]) || (cards[i][0] == cards[j][0]) && (atoi(&cards[i][1]) < atoi(&cards[j][1]))) {
     char temp[4];
     strcpy(temp, cards[i]);
     strcpy(cards[i], cards[j]);
     strcpy(cards[j], temp);
    }

  printf("%s", cards[0]);
  for (int i = 1; i < count; i++)
   printf(" %s", cards[i]);
  printf("\n");
 }
}
