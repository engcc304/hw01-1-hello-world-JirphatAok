/*
    เขียนโปรแกรมรับ "ชื่อ" จากผู้ใช้ และแสดงผลบนหน้าจอดังผลลัพธ์ด้านล่างต่อไปนี้ 
    
    Test case:
        First Name: Aomsin
        Last Name: AomMoney
    Output:
        Aomsin AomMoneys TC, RMUTL, Chiang Mai, Thailand

    Test case:
        First Name: ABC
        Last Name: DEF
    Output:
        ABD DEFs TC, RMUTL, Chiang Mai, Thailand
*/
#include <stdio.h>
int main ( ) {
	int Fristname[30], Lastname[30];
	int Fristname1[30], Lastname1[30];
	printf("Fristname :");
	scanf("%s" , &Fristname);
	printf("Lastname :");
	scanf("%s" , &Lastname);
	printf("%s %s TC, RMUTL, Chiang Mai, Thailand\n ",Fristname, Lastname);
	printf("Fristname1 :");
	scanf("%s" , &Fristname1);
	printf("Lastname1 :");
	scanf("%s" , &Lastname1);
	printf("%s %s TC, RMUTL, Chiang Mai, Thailand\n ",Fristname, Lastname);
}
