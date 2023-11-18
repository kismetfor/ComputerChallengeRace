#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct{
    char user_name[50];
    char phone[11];
    char password[50];
} Xinxi;

Xinxi xiaohua;
//结构体: 用户名，密码以及手机号
//

void input(Xinxi* p, int n){
    for (int i=0; i<n; i++) {
        scanf("%s %s %s", p[i].user_name, p[i].password, p[i].phone);
    }
}

void change(char* p){
    //大小写字母互换
    for(int i=0; p[i]; i++){
        if(islower(p[i])){
            p[i] = toupper(p[i]);
        }
        else if (isupper(p[i])){
            p[i] = tolower(p[i]);
        }
    }
}

void find(Xinxi* p, int n){
    int flag = 0;
    for (int i=0; i<n; i++) {
        if(strcmp(xiaohua.phone, p[i].phone) == 0){
            change(p[i].password);
            printf("%s %s\n", p[i].user_name, p[i].password);
            flag++;
        }
    }
    if(0 == flag){
        printf("empty\n");
    }
}

int main(int argc, const char * argv[]) {
    //获取输入
    //获取输入
    fgets(xiaohua.phone, 11, stdin);
    xiaohua.phone[strcspn(xiaohua.phone, "\n")] = '\0'; // 去除换行符

    int n;
    scanf("%d", &n);
    Xinxi leakage[n];
    input(leakage, n);
    find(leakage, n);
    return 0;
}
