#include <stdio.h>

void main()
{
	int a, b;
	char A;

	printf("������ ���ٷ� ����� �Է��ϼ��� : ");
	scanf("%d %c %d", &a, &A, &b);

	switch (A)
	{
		case '+': 
			printf("%d + %d = %d �Դϴ�.\n", a, b, a + b); 
			break;

		case '-': 
			printf("%d - %d = %d �Դϴ�.\n", a, b, a - b); 
			break;

		case '*': 
			printf("%d * %d = %d �Դϴ�.\n", a, b, a * b); 
			break;

		case '/':
		       if (b != 0)	
				printf("%d / %d = %d �Դϴ�.\n", a, b, a / b); 
		       else  
				printf("0���� �ٸ� ���ڸ� �Է����ּ���.\n"); 
		       break;
		       
		case '%':
		      if (b != 0) 
				printf("%d %% %d = %d �Դϴ�.\n", a, b, a % b); 

		      else  
				printf("0���� �ٸ� ���ڸ� �Է����ּ���.\n"); 
		      break;

		default:
		      	printf("�����ڸ� �߸� �Է��߽��ϴ�.\n");
	}
}
