# include <stdio.h>
# include <string.h>
int main(void) {
  char sentence[20];
  int n = 0;
  printf("Enter a sentence: ");
  scanf("%s", sentence);
  for (int i=0; i<strlen(sentence); i++)
    if (sentence[i] !=  ' ')
      n++;
  printf("\nThe number of letters in the given sentence are : %d\n", n);
  return 0;
}

/* Obervations:
01. How to work with sentences having a space in between?
Output:
Case - 01
Enter a sentence: suraj
The number of letters in the given sentence are : 5
Case - 02  
Enter a sentence: suraj aravind
The number of letters in the given sentence are : 5
*/ 