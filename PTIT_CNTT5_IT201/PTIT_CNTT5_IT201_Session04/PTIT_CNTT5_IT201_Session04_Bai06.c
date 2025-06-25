#include <stdio.h>
#include <string.h>

#define MAX 5

struct Student {
    int id;
    char name[50];
    int age;
};

int main() {
    struct Student students[MAX];

    printf("Nhap thong tin cho %d sinh vien:\n", MAX);
    for (int i = 0; i < MAX; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("  ID: ");
        scanf("%d", &students[i].id);
        getchar();

        printf("  Ten: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("  Tuoi: ");
        scanf("%d", &students[i].age);
    }

    int searchId;
    printf("\nNhap ID can tim: ");
    scanf("%d", &searchId);

    int found = 0;
    for (int i = 0; i < MAX; i++) {
        if (students[i].id == searchId) {
            printf("\n{ id: %d, name: \"%s\", age: %d }\n", students[i].id, students[i].name, students[i].age);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay sinh vien co ID = %d\n", searchId);
    }

    return 0;
}

