#include<stdio.h>
#include<stdlib.h>
#include<time.h>

enum Status{continues, won, lost};
int rolldice(void);

int main(void)
{
	int sum, mypoint;
	enum status gamestatus;

	srand(time(NULL));
	sum = rolldice();
	switch (sum)
	{
	case 7:
	case 11:
		gamestatus = won;
		break;

	case 2:
	case 3: 
	case 12:
		gamestatus = lost;
		break;

	default:
		gamestatus = continues;
		mypoint = sum;
		printf("point is : %d\n", mypoint);
		break;
	}

	while (gamestatus == continues)
	{
		sum = rolldice();
		if (sum == mypoint)
		{
			gamestatus = won;
		}
		else
		{
			if (sum == 7)
				gamestatus = lost;
		}
	}
	if (gamestatus == won)
		printf("player win\n");
	else
		printf("player lost\n");
	system("pause");
	return 0;
}

int rolldice(void)
{
	int d1, d2,wsum;
	d1 = 1 + rand() % 6;
	d2 = 1 + rand() % 6;
	wsum = d1 + d2;
	printf("palyer roll : %d + %d = %d\n", d1, d2, wsum);
	return wsum;
}