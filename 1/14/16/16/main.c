#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char name[50];
    char password[50];
    char phonenumber[12];
} Account;


void change(char* password){
    for (int i=0; password[i]; i++) {
        if(islower(password[i])){
            password[i] = toupper(password[i]);
        }
        else if (isupper(password[i])){
            password[i] = tolower(password[i]);
        }
    }
}

void find(Account* leakage, int n, char* phone){
    int flag = 0;
    for (int i=0; i<n; i++) {
        if(strcmp(leakage[i].phonenumber, phone) == 0){
            //更改密码
            change(leakage[i].password);
            printf("%s %s\n", leakage[i].name, leakage[i].password);
            flag++;
        }
    }
    if(flag == 0){
        printf("empty\n");
    }
}


void input_account(Account* leakage, int n){
    for (int i=0; i<n; i++) {
        scanf("%s %s %s", leakage[i].name, leakage[i].password, leakage[i].phonenumber);
    }
}

int main(int argc, const char * argv[]) {
    //处理输入
    char xiaohua_phone[12];
    scanf("%s", xiaohua_phone);
    int n;
    scanf("%d", &n);
    Account leakage[n];
    input_account(leakage, n);
    
    find(leakage, n, xiaohua_phone);
    return 0;
}
