#include<stdio.h>
#include<windows.h>




void main()
{
	int num;
	char inputString[128] = { 0, };


	printf(" 안녕하세요 오늘은 %d년 %d월 %d일 %d시 %d분입니다.\n\n", );

	printf(" 오늘 기분은 어떠신가요?\n");





	while (1)
	{

		printf(" 1. 좋다\n");
		printf(" 2. 별로다\n");
		printf(" 입력 : ");
		scanf("%d", &num);
		printf("\n");


		switch (num)
		{
		case 1:
			printf(" 좋습니다. 오늘의 계획은 세우셨나요?\n");
			printf(" 1. 네\n");
			printf(" 2. 아니요\n");
			printf(" 입력 : ");
			scanf("%d", &num);
			printf("\n");
			break;

		case 2:
			printf(" 어떤 일 때문에 기분이 안 좋으신가요?(데이터는 저장되지 않습니다)\n");
			printf(" 입력 : ");
			scanf("%s", &inputString);
			printf("\n");
			break;

		default:
			printf("죄송합니다 다시 선택해주세요!\n\n");
			continue;
		}



		break;
	}
	// ( E1 ) : 입력받지 않았을 때 상황 고려해야함
	// 이 알고리즘대로라면 아무것도 입력받지 않았을 때 에러가 발생할 수 있음
	if (inputString != NULL)
	{

		printf(" 힘드셨겠군요. 이해합니다.\n");
		Sleep(2000);
		printf(" 그런 상황이라면 많이 힘들었을 겁니다.\n\n");
		Sleep(2000);
		printf(" 그렇지만 이번일은 이제 그만 생각하셨으면 좋겠습니다.\n\n");
		Sleep(2000);
		printf(" 안좋은 생각을 계속 하다보면 꼬리에 꼬리가 물려 더 안좋아 질겁니다.\n");
		Sleep(2000);
		printf(" 만약 계속해서 안좋은 생각이 떠오른다면 이렇게 해보세요.\n\n");
		Sleep(2000);
		printf(" 지금 있는곳보다 넓은 곳으로 이동하세요.\n");
		Sleep(2000);
		printf(" 산책을 하거나 목표를 만들어 보세요.\n\n");
		Sleep(2000);
		printf(" 지금 당장 우리에게 필요한 것은 목표를 세우고 달성함으로서 에너지를 얻고 앞으로 나아가는 것입니다.\n\n");
		Sleep(2000);
		printf(" 작은것부터 천천히 두려워하지 말고 더 나은 삶을 살수있도록 노력합시다.\n\n");





	}

	printf(" 작은것부터 시작해보죠. 몇시에 무엇을 할까요?\n");
	printf(" 문자열을 입력해주세요 : ");
	scanf("%s", &inputString);

	printf("\n");

	printf(" 수고하셨습니다.\n\n");
	printf(" 멋진 계획 꼭 이루시길 바랍니다.\n");
	printf(" 오늘의 계획 : %s\n\n", inputString);


	printf(" 프로그램 종료\n");


}