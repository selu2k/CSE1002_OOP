#include <stdio.h>
#include <string.h>

// Function to return index of string element in 2D array
// equivalent to (list.index(<element>)) in python
int ind(char str1[12][10], char str2[10]) {
  int month = 0;
  int i;
  for(i = 0; i < 12; ++i) {
    if(!strcmp(str2, str1[i])) {
      month = i;
      break;
    }
  }
  return month;
}

// Main program starts
int main(void) {

  // Taking 3 inputs
  char input[3][20];int choice;
  char input_copy[3][20]; // Creating copy because delimiters in input will be replaced by '\0'
  int j;
  for(j = 0; j < 3; ++j){
 
  printf("Enter date choice: \n");
  printf("1. DD-Month-YYYY\n2. DD/Mon/YYYY\n3. MM/DD/YYYY\n");
  scanf("%d",&choice);
  switch(choice){
    case 1:
  // Converting first date 23-March-2021
  printf("Enter date: ");
  scanf("%s", input[j]);
  getchar();
  strcpy(input_copy[j], input[j]);
  char months[12][10] = {"January",   "February", "March",    "April",
                         "May",       "June",     "July",     "August",
                         "September", "October",  "November", "December"};
  char *date1 = strtok(input[0], "-"); // This points to 23
  char *temp = strtok(NULL, "-"); // This points to March
  int month1 = ind(months, temp) + 1; // This stores 03
  char *year1 = strtok(NULL, "-"); // This points to 2021
  // Printing converted date
  printf("%s converted to dd/mm/yyyy is: %s/%d/%s\n", input_copy[0], date1, month1, year1);
  break;

case 2:
  // Converting second date 23/Mar/2021
  printf("Enter date: ");
  scanf("%s", input[j]);
  getchar();
  strcpy(input_copy[j], input[j]);
  char months2[12][10] = {"Jan", "Feb", "Mar", "Apr",
                          "May", "Jun", "Jul", "Aug",
                          "Sep", "Oct", "Nov", "Dec"};
  char *date2 = strtok(input[1], "/"); // This points to 23
  char *temp2 = strtok(NULL, "/"); // This points to Mar
  int month2 = ind(months2, temp2) + 1; // This stores 03
  char *year2 = strtok(NULL, "/"); // This points to 2021
  // Printing converted date
  printf("%s converted to dd/mm/yyyy is: %s/%d/%s\n", input_copy[1], date2, month2, year2);
  break;

case 3:
  // Converting third date 03/23/2021
  printf("Enter date: ");
  scanf("%s", input[j]);
  getchar();
  strcpy(input_copy[j], input[j]);
  char *month3 = strtok(input[2], "/"); // This points to 03
  char *date3 = strtok(NULL, "/"); // This points to 23
  char *year3 = strtok(NULL, "/"); // This points to 2021
  // Printing converted date
  printf("%s converted to dd/mm/yyyy is: %s/%s/%s\n", input_copy[2], date3, month3, year3);
  break;
}
}
}