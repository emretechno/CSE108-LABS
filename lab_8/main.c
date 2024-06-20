
#include <stdio.h>
typedef struct{
    char name[20];
    char color[20];
    double price;
    int quantity,serial_number;

} furniture;
int see_all_furnitures(FILE *furniture);
int add_new_furniture(FILE *furniture);
int remove_furniture(FILE *furniture);
int search_furniture(FILE *furniture);
int count_furniture(FILE *furniture);
int main(int argc, const char * argv[]) {
    FILE *furniture = NULL;
  int n;
  int flag = 1;
  printf("please enter what you want to do \n");
  do {
    printf("1->See all furnitures\n");
    printf("2->Add a new furniture\n");
    printf ("3->Remova a furniture\n");
    printf("4->Search furniture\n");
    printf("5->Exit\n");
    scanf("%d", & n);
    
 switch(n){
    case 1: flag = see_all_furnitures(furniture);
    break;
    case 2 : flag = add_new_furniture(furniture);
    break;
    case 3:
    break;
    case 4:
    break;
    case 5 :
    flag = 0; break;
 }




  }while(flag);
    return 0;
}
int see_all_furnitures(FILE *furniture){
    furniture = fopen("furniture_database.txt", "r");
    if(furniture == NULL){
        printf("Error opening file\n");
        return 0;
    }
   int total_furnite =  count_furniture(furniture);
    char c;
    printf("\n");
    while(!feof(furniture)){
        c = fgetc(furniture);
        printf("%c", c);
    }
    printf("\n");
    fclose(furniture);
    return 1;
}
int add_new_fearniture(FILE *furniture){
    return 1;
}
int count_line(FILE *furniture){
    int count = 0;
    char c;
    while(!feof(furniture)){
        c = fgetc(furniture);
        if(c == '\n'){
            count++;
        }
    }
    return count;
}
