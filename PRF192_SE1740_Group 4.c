#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct
{
    char studentId[20];
    char fullName[30];
    char sex[10];
    float progressTest, assignment, workshop, peExam, feExam;
    float result;
} SV;

SV sv;

void input(SV sv[], int n)
{
	int i;
	for(i=0; i<n; i++)
    {
    printf("\nNhap SV thu %d: \n", i+1);
    printf("Nhap student id: ");  fflush(stdin); fgets(sv[i].studentId, sizeof(sv[i].studentId), stdin);
	
	printf("Nhap full name: ");    fgets(sv[i].fullName, sizeof(sv[i].fullName), stdin);
	
    printf("Nhap sex: ");          fgets(sv[i].sex, sizeof(sv[i].sex), stdin);
	
    printf("Nhap diem ");
	printf("\nProgress test: ");   scanf("%f", &sv[i].progressTest);             
	
	printf("Assignment: ");   	scanf("%f", &sv[i].assignment);              

	printf("Workshop: ");      scanf("%f", &sv[i].workshop);           
	
	printf("Practical Exam: ");     scanf("%f", &sv[i].peExam);            
	
	printf("Final Exam: ");    scanf("%f", &sv[i].feExam);              
	
    } 
}

void output(SV sv[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("\n__________________________________________________________________________");
        printf("\n- Thong tin SV thu %d: \n", i+1);
	    printf("\n- Student ID: %s", sv[i].studentId);  
        printf("\n- Full name: %s", sv[i].fullName);
        printf("\n- Sex: %s", sv[i].sex);
        printf("\n- Diem Progess Test, Assignment, Workshop, Practical Exam, Final Exam:");
        printf("\n       %.2f          %.2f        %.2f      %.2f            %.2f", sv[i].progressTest, sv[i].assignment, sv[i].workshop, sv[i].peExam, sv[i].feExam);
        printf("\n__________________________________________________________________________");
    }
}


int main()
{
    int number;
    char fileName[] = "DSSV.txt";
    bool daNhap = false;
    int n, i;
    printf("\nNhap so luong SV: "); 
	scanf("%d", &n);
    SV sv[100];
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
        
        
        printf("Chon hanh dong: ");     
		scanf("%d",&number);
        switch(number)
        {
            case 1:
                input(sv, n);
                daNhap = true;
                printf("\nBam phim bat ky de tiep tuc!");
                break;

            case 2:
                if(daNhap)
                    output(sv, n);
				else
				{
                    printf("\nNhap danh sach SV truoc!");
                }
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
                
            case 7:
            	printf("Exiting...");
            	break;
        }
        
    } while(number!=7);
    
    return 0;
}
