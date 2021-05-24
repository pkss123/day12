#include <stdio.h>

int main() {

	/*
		배열(array)
		 한 번의 선언으로 같은 타입의 데이터 공간을 메모리에 연속적으로 생성
		 변수와 같은 데이터를 담는 공간을 여러개 묶어놓은 형태

		배열 선언(생성)
		 자료형 배열이름[크기( = 공간 개수)]
		 ex. char i[10];	// char형 데이터가 들어갈 공간 10칸 생성

		배열의 요소(배열 내부의 데이터) 사용
		 배열이름[index]

		  * index : 배열 내부의 데이터를 찾아갈 수 있게 해주는 참조 수사
					0 부터 시작
					 ex> int ar[3];		// ar						<< 배열 이름
										//	 |  ?  |  ?  |  ?  |
										//	   [0]   [1]   [2]		<< index

					이때 배열의 크기는 자료형의 byte x 데이터 공간의 개수
					ex> int ar[3];		<< int : 4byte x [3] = 12byte

	*/
	
	//int ar1[3];			// 배열 선언

	//ar1[0] = 10;		// 배열 내부 데이터 입력
	//ar1[1] = 20;
	//ar1[2] = 30;
	//ar1[3] = 40;		// error code : 3칸 짜리 배열이므로 index는 0 ~ 2 사용


	//printf("ar1[0] : %d\nar1[1] : %d\nar1[2] : %d\n", ar1[0], ar1[1], ar1[2]);

	//int ar2[3] = { 1,2,3 };		// 배열 선언과 동시에 초기화
	//ar2 = { 4,5,6 };				// error code : 배열 전체 요소 or 여러개의 요소에 한번에 접근하는건 선언과 동시에만 가능(= 최초 한번만 가능)

	//printf("ar2[0] : %d\nar2[1] : %d\nar2[2] : %d\n", ar2[0], ar2[1], ar2[2]);

	int ar3[] = { 1,2,3,4 };

	//printf("ar3[0] : % d\nar3[1] : % d\nar3[2] : % d\nar3[3] : % d\n", ar3[0], ar3[1], ar3[2], ar3[3]);
	//puts("");
	//printf("ar3 size : %d byte\n", sizeof(ar3));
	//printf("ar3 공간 개수 : %d 개\n", sizeof(ar3) / sizeof(int));

	//int ar4[3] = { 1 };		// 배열 선언가 동시에 초기화 시 공간보다 젖ㄱ은 개수를 넣어주면 빈 공간은 0으로 초기화

	//printf("ar4[0] : %d\nar4[1] : %d\nar4[2] : %d\n", ar4[0], ar4[1], ar4[2]);
	//puts("");
	//printf("ar4 size : %d byte\n", sizeof(ar4));

	//int ar5[3] = { 0 };		// 배열 전체 요소를 0으로 초기화

	//printf("ar5[0] : % d\nar5[1] : % d\nar5[2] : % d\n", ar5[0], ar5[1], ar5[2]);

	//int size = 3;
	//int ar6[size];		//error code > 배열 선언 시 공간의 개수는 상수만 입력 가능

	//int ar7[3] = { 0 };
	//
	//ar7[0] = 11;
	//ar7[1] = 22;

	//int idx = 2;
	//ar7[idx] = 33;

	//printf("ar7[%d] : % d\nar7[%d] : % d\nar7[%d] : % d\n", 0, ar7[0], 1, ar7[1], idx, ar7[idx]);

	//printf("ar7 시작 주소 : %p\n", ar7);		// 배열은 &기호를 사용하지 않는다

	/*
		반복문을 이용한 배열의 전체 요소 접근
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
	//	printf("합계 : %d\n", sum);

	//int ar[] = { 8,9,5,1,7,4,2 };
	//int cnt = sizeof(ar) / sizeof(int);
	//int count = 0;

	//for (int i = 0; i < cnt; i++) {
	//	if (ar[i] >= 3 && ar[i] <= 8) {
	//		printf("ar[%d] : %d\n", i, ar[i]);
	//		count++;
	//	}
	//}
	//printf("\n3 ~ 8 까지의 숫자 개수는 : %d 개\n", count);
	
	int ar[] = { 3,7,2,11,9,5,10 };
	int cnt = sizeof(ar) / sizeof(int);
	
	// 풀이 1
	//for (int i = 0; i < 1; i++) {
	//	for (int j = 1; j < cnt; j++) {
	//		if (ar[i] < ar[j]) {
	//			ar[i] = ar[j];
	//		}
	//	}
	//printf("가장 큰 수는 : %d\n", ar[i]);
	//}

	// 풀이 2
	int Max = ar[0];

	printf("ar : ");
	for (int i = 0; i < cnt; i++)
		printf("%d ", ar[i]);
	puts("\n");

	for (int i = 0; i < cnt; i++) {
		if (Max < ar[i])
			Max = ar[i];
	}
	printf("가장 큰 수는 : %d\n", Max);
}