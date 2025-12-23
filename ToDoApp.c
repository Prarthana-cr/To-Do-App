#include <stdio.h>
#include<string.h>

char list[20][20];
int task_count=0;

void AddToList();
void DisplayList();

int main() {
    int choice;
    
    printf("~Welcome to To-Do List Application~\n");
    while(1){
        printf("\n1.Add a task\n2.View Tasks\n3.Exit\n");
        printf("Enter a choice:");
        scanf("%d",&choice);
        getchar();
        
        switch(choice){
            case 1:
            AddToList();
            break;
            case 2:
            DisplayList();
            break;
            case 3:
            printf("Thankyou for using the app!\n");
            return 0;
            default:printf("Enter a valid choice!!\n");
        }
    }
    return 0;
}

void AddToList(){
    printf("Enter your task:");
    fgets(list[task_count],20,stdin);
    task_count++;
    printf("Task added successfully!\n");
}

void DisplayList(){
    if(task_count==0){
        printf("No tasks available!\n");
    }else{
        printf("\nYour To-Do List\n");
        for(int i=0;i<task_count;i++){
            printf("%d. %s",i+1,list[i]);
        }
    }
}

