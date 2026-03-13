#include<stdio.h>
#include<stdlib.h>
#include<string.h>
# define max 50
char files[max][50];
char folders[max][50];
int filecount=0;
int foldercount=0;

void list(){
  printf("\nList of files\n");
  for(int i=0;i<filecount;i++){
   printf("%s\n", files[i]);  
  }
  printf("\nList of folders\n");
  for(int i=0;i<foldercount;i++){
   printf("%s\n", folders[i]);
  }
}
void deletefile(char name[]){
  for(int i=0;i<filecount;i++){
    if(strcmp(files[i],name)==0){
     for(int j=i;j<filecount-1;j++){
      strcpy(files[j],files[j+1]);
     }
      filecount--;
      printf("File is deleted\n");
      return;
    }
  }
    printf("File not found");
}
void renamefile(char name[],char newname[]){
  for(int i=0;i<filecount;i++){
    if(strcmp(files[i],name)==0){
      strcpy(files[i],newname);
      printf("newname is made\n");
      return;
    }
  }
    printf("File not found");
}

int main(){
  int choice;
  char name[50];
  char newname[50];
  while(1){
     printf("\n1.Create File\n2.Create Folder\n3.List\n4.Delete File\n5.Rename File\n6.Exit\n");
    scanf("%d", &choice);
    if(choice==1){
     printf("Enter the file name: ");
      scanf("%s", name);
      strcpy(files[filecount++],name);
    }
    else if(choice==2){
      printf("Enter folder name:");
        scanf("%s", name);
      strcpy(folders[foldercount++],name);
    }
    
    else if(choice==3){
      list();
    }
    else if(choice==4){
     printf("Enter the file name:");
      scanf("%s", name);
      deletefile(name);
    }
    else if(choice==5){
    printf("Enter the old name: ");
      scanf("%s", name);
      printf("Enter newname: ");
        scanf("%s", newname);
      renamefile(name,newname);
    }
    else if(choice==6){
      break;
    }
    else{
      printf("Invalid command!!");
  }
      }
return 0;
}
