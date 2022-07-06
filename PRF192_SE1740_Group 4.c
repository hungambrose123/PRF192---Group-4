#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct
{
    char studentId[25];
    char fullName[30];
    char sex[5];
    float progressTest, assignment, workshop, peExam, feExam;
    float result;
} SV;


void nhap(SV sv)
{
    fflush(stdin);
    printf("Nhap student id: ");   fgets(sv.studentId, 25, stdin);
    printf("Nhap full name: ");    fgets(sv.fullName, 30, stdin);
    printf("Nhap sex: ");          fgets(sv.sex, 5, stdin);
    printf("Nhap diem: ");
	printf("\nProgress test:");                scanf("%f", &sv.progressTest);
	printf("Assignment:");                 scanf("%f", &sv.assignment);
	printf("Workshop:");                 scanf("%f", &sv.workshop);
	printf("Practical Exam:");                 scanf("%f", &sv.peExam);
	printf("Final Exam:");                 scanf("%f", &sv.feExam);    
}

void nhapN(SV a[], int n)
{
    int i;
    printf("\n____________________________________\n");
    for(i = 0; i< n; ++i)
    {
        printf("\nNhap SV thu %d: \n", i+1);
        nhap(a[i]);
    }
    printf("\n____________________________________\n");
}


void xuat(SV sv)
{
	printf("\nStudent ID: %s", sv.studentId);
    printf("\nFull name: %s", sv.fullName);
    printf("\nSex: %d", sv.sex);
    printf("\nDiem Progess Test, Assignment, Workshop, Practical Exam, Final Exam : %.2f - %.2f - %.2f - %.2f - %.2f", sv.progressTest, sv.assignment, sv.workshop, sv.peExam, sv.feExam);
}

void xuatN(SV a[], int n)
{
	int i;
	printf("\n____________________________________\n");
    for(i = 0;i < n;++i){
        printf("\nThong tin SV thu %d:", i+1);
        xuat(a[i]);
    }
    printf("\n____________________________________\n");
}



int main()
{
    int number;
    char fileName[] = "DSSV.txt";
    bool daNhap = false;
    int n;
    printf("\nNhap so luong SV: "); scanf("%d", &n);
    SV a[n];
    do{
        system("cls");
        printf("*****************************************\n");
        printf("*    CHUONG TRINH QUAN LY SINH VIEN     *\n");
        printf("*      [1] Nhap danh sach               *\n");
        printf("*      [2] In danh sach                 *\n");
        printf("*      [3] Them danh sach               *\n");
        printf("*      [4] Xoa danh sach                *\n");
        printf("*      [5] Kiem tra                     *\n");
        printf("*      [6] Xuat File                    *\n");
        printf("*      [7] Thoat                        *\n");
        printf("*****************************************\n");
        
        
        printf("Chon hanh dong: ");     scanf("%d",&number);
        switch(number)
        {
            case 1:
            	{
                nhapN(a, n);
                printf("\nNhap thanh cong!");
                daNhap = true;
                printf("\nBam phim bat ky de tiep tuc!");
                break;
                }
            case 2:
                if(daNhap)
				{
                    printf("\nBan da chon xuat DS sinh vien!");
                    xuatN(a, n);
                }
				else
				{
                    printf("\nNhap DS SV truoc!!!!");
                }
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
                
            case 7:
            	printf("Exiting...");
            	break;
        }
        
    }while(number!=7);
    
    return 0;
}
