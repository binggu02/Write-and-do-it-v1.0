#include<stdio.h>
#include<windows.h>




void main()
{
	int num;
	char inputString[128] = { 0, };


	printf(" �ȳ��ϼ��� ������ %d�� %d�� %d�� %d�� %d���Դϴ�.\n\n", );

	printf(" ���� ����� ��Ű���?\n");





	while (1)
	{

		printf(" 1. ����\n");
		printf(" 2. ���δ�\n");
		printf(" �Է� : ");
		scanf("%d", &num);
		printf("\n");


		switch (num)
		{
		case 1:
			printf(" �����ϴ�. ������ ��ȹ�� ����̳���?\n");
			printf(" 1. ��\n");
			printf(" 2. �ƴϿ�\n");
			printf(" �Է� : ");
			scanf("%d", &num);
			printf("\n");
			break;

		case 2:
			printf(" � �� ������ ����� �� �����Ű���?(�����ʹ� ������� �ʽ��ϴ�)\n");
			printf(" �Է� : ");
			scanf("%s", &inputString);
			printf("\n");
			break;

		default:
			printf("�˼��մϴ� �ٽ� �������ּ���!\n\n");
			continue;
		}



		break;
	}
	// ( E1 ) : �Է¹��� �ʾ��� �� ��Ȳ ����ؾ���
	// �� �˰����ζ�� �ƹ��͵� �Է¹��� �ʾ��� �� ������ �߻��� �� ����
	if (inputString != NULL)
	{

		printf(" ����̰ڱ���. �����մϴ�.\n");
		Sleep(2000);
		printf(" �׷� ��Ȳ�̶�� ���� ������� �̴ϴ�.\n\n");
		Sleep(2000);
		printf(" �׷����� �̹����� ���� �׸� �����ϼ����� ���ڽ��ϴ�.\n\n");
		Sleep(2000);
		printf(" ������ ������ ��� �ϴٺ��� ������ ������ ���� �� ������ ���̴ϴ�.\n");
		Sleep(2000);
		printf(" ���� ����ؼ� ������ ������ �������ٸ� �̷��� �غ�����.\n\n");
		Sleep(2000);
		printf(" ���� �ִ°����� ���� ������ �̵��ϼ���.\n");
		Sleep(2000);
		printf(" ��å�� �ϰų� ��ǥ�� ����� ������.\n\n");
		Sleep(2000);
		printf(" ���� ���� �츮���� �ʿ��� ���� ��ǥ�� ����� �޼������μ� �������� ��� ������ ���ư��� ���Դϴ�.\n\n");
		Sleep(2000);
		printf(" �����ͺ��� õõ�� �η������� ���� �� ���� ���� ����ֵ��� ����սô�.\n\n");





	}

	printf(" �����ͺ��� �����غ���. ��ÿ� ������ �ұ��?\n");
	printf(" ���ڿ��� �Է����ּ��� : ");
	scanf("%s", &inputString);

	printf("\n");

	printf(" �����ϼ̽��ϴ�.\n\n");
	printf(" ���� ��ȹ �� �̷�ñ� �ٶ��ϴ�.\n");
	printf(" ������ ��ȹ : %s\n\n", inputString);


	printf(" ���α׷� ����\n");


}