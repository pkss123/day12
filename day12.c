#include <stdio.h>

int main() {

	/*
		�迭(array)
		 �� ���� �������� ���� Ÿ���� ������ ������ �޸𸮿� ���������� ����
		 ������ ���� �����͸� ��� ������ ������ ������� ����

		�迭 ����(����)
		 �ڷ��� �迭�̸�[ũ��( = ���� ����)]
		 ex. char i[10];	// char�� �����Ͱ� �� ���� 10ĭ ����

		�迭�� ���(�迭 ������ ������) ���
		 �迭�̸�[index]

		  * index : �迭 ������ �����͸� ã�ư� �� �ְ� ���ִ� ���� ����
					0 ���� ����
					 ex> int ar[3];		// ar						<< �迭 �̸�
										//	 |  ?  |  ?  |  ?  |
										//	   [0]   [1]   [2]		<< index

					�̶� �迭�� ũ��� �ڷ����� byte x ������ ������ ����
					ex> int ar[3];		<< int : 4byte x [3] = 12byte

	*/
	
	//int ar1[3];			// �迭 ����

	//ar1[0] = 10;		// �迭 ���� ������ �Է�
	//ar1[1] = 20;
	//ar1[2] = 30;
	//ar1[3] = 40;		// error code : 3ĭ ¥�� �迭�̹Ƿ� index�� 0 ~ 2 ���


	//printf("ar1[0] : %d\nar1[1] : %d\nar1[2] : %d\n", ar1[0], ar1[1], ar1[2]);

	//int ar2[3] = { 1,2,3 };		// �迭 ����� ���ÿ� �ʱ�ȭ
	//ar2 = { 4,5,6 };				// error code : �迭 ��ü ��� or �������� ��ҿ� �ѹ��� �����ϴ°� ����� ���ÿ��� ����(= ���� �ѹ��� ����)

	//printf("ar2[0] : %d\nar2[1] : %d\nar2[2] : %d\n", ar2[0], ar2[1], ar2[2]);

	int ar3[] = { 1,2,3,4 };

	//printf("ar3[0] : % d\nar3[1] : % d\nar3[2] : % d\nar3[3] : % d\n", ar3[0], ar3[1], ar3[2], ar3[3]);
	//puts("");
	//printf("ar3 size : %d byte\n", sizeof(ar3));
	//printf("ar3 ���� ���� : %d ��\n", sizeof(ar3) / sizeof(int));

	//int ar4[3] = { 1 };		// �迭 ���� ���ÿ� �ʱ�ȭ �� �������� ������ ������ �־��ָ� �� ������ 0���� �ʱ�ȭ

	//printf("ar4[0] : %d\nar4[1] : %d\nar4[2] : %d\n", ar4[0], ar4[1], ar4[2]);
	//puts("");
	//printf("ar4 size : %d byte\n", sizeof(ar4));

	//int ar5[3] = { 0 };		// �迭 ��ü ��Ҹ� 0���� �ʱ�ȭ

	//printf("ar5[0] : % d\nar5[1] : % d\nar5[2] : % d\n", ar5[0], ar5[1], ar5[2]);

	//int size = 3;
	//int ar6[size];		//error code > �迭 ���� �� ������ ������ ����� �Է� ����

	//int ar7[3] = { 0 };
	//
	//ar7[0] = 11;
	//ar7[1] = 22;

	//int idx = 2;
	//ar7[idx] = 33;

	//printf("ar7[%d] : % d\nar7[%d] : % d\nar7[%d] : % d\n", 0, ar7[0], 1, ar7[1], idx, ar7[idx]);

	//printf("ar7 ���� �ּ� : %p\n", ar7);		// �迭�� &��ȣ�� ������� �ʴ´�

	/*
		�ݺ����� �̿��� �迭�� ��ü ��� ����
	*/

	//int ar8[3] = { 10,20,30 };
	//int ar8cnt = sizeof(ar8) / sizeof(int);

	//for (int i = 0; i < 3; i++) 
	//	printf("ar8[%d] : %d\n",i,ar8[i]);

	//for (int i = 0; i < ar8cnt; i++)
	//	printf("ar8[%d] : %d\n", i, ar8[i]);

	//int ar[5] = { 2,7,5,1,8 };
	//int cnt = sizeof(ar) / sizeof(int);
	//int sum = 0;
	//for (int i = 0; i < cnt; i++) {
	//	sum += ar[i];
	//}
	//	printf("�հ� : %d\n", sum);

	//int ar[] = { 8,9,5,1,7,4,2 };
	//int cnt = sizeof(ar) / sizeof(int);
	//int count = 0;

	//for (int i = 0; i < cnt; i++) {
	//	if (ar[i] >= 3 && ar[i] <= 8) {
	//		printf("ar[%d] : %d\n", i, ar[i]);
	//		count++;
	//	}
	//}
	//printf("\n3 ~ 8 ������ ���� ������ : %d ��\n", count);
	
	int ar[] = { 3,7,2,11,9,5,10 };
	int cnt = sizeof(ar) / sizeof(int);
	
	// Ǯ�� 1
	//for (int i = 0; i < 1; i++) {
	//	for (int j = 1; j < cnt; j++) {
	//		if (ar[i] < ar[j]) {
	//			ar[i] = ar[j];
	//		}
	//	}
	//printf("���� ū ���� : %d\n", ar[i]);
	//}

	// Ǯ�� 2
	int Max = ar[0];

	printf("ar : ");
	for (int i = 0; i < cnt; i++)
		printf("%d ", ar[i]);
	puts("\n");

	for (int i = 0; i < cnt; i++) {
		if (Max < ar[i])
			Max = ar[i];
	}
	printf("���� ū ���� : %d\n", Max);
}