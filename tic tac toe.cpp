#include<stdlib.h>
#include<stdio.h>>
char a[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int player = 1;
char p[20],q[20];
void win()
{
	if (player == 2) 
	{
		if (a[1] == a[2] && a[2] == a[3]) 
		{
			printf("%s WON",p);
			exit(0);
		}
		if (a[1] == a[4] && a[4] == a[9])
		{
			printf("%s WON",p);
			exit(0);
		}
		if (a[9] == a[8] && a[8] == a[7])
		{
			printf("%s WON",p);
			exit(0);
		}
		if (a[3] == a[6] && a[6] == a[7]) 
		{
			printf("%s WON",p);
			exit(0);
		}
		if (a[4] == a[5] && a[5] == a[6]) 
		{
			printf("%s WON",p);
			exit(0);
		}
		if (a[2] == a[5] && a[5] == a[8]) 
		{
			printf("%s WON",p);
			exit(0);
		}
		if (a[1] == a[5] && a[5] == a[7]) 
		{
			printf("%s WON",p);
			exit(0);
		}
		if (a[3] == a[5] && a[5] == a[9]) 
		{
			printf("%s WON",p);
			exit(0);
		}
	} 
	else if (player == 1) 
	{
		if (a[1] == a[2] && a[2] == a[3]) 
		{
			printf("%s WON",q);
			exit(0);
		}
		if (a[1] == a[4] && a[4] == a[9]) 
		{
			printf("%s WON",q);
			exit(0);
		}
		if (a[9] == a[8] && a[8] == a[7]) 
		{
			printf("%s WON",q);
			exit(0);
		}
		if (a[3] == a[6] && a[6] == a[7]) 
		{
			printf("%s WON",q);
			exit(0);
		}
		if (a[4] == a[5] && a[5] == a[6]) 
		{
			printf("%s WON",q);
			exit(0);
		}
		if (a[2] == a[5] && a[5] == a[8]) 
		{
			printf("%s WON",q);
			exit(0);
		}
		if (a[1] == a[5] && a[5] == a[7]) 
		{
			printf("%s WON",q);
			exit(0);
		}
		if (a[3] == a[5] && a[5] == a[9]) 
		{
			printf("%s WON",q);
			exit(0);
		}
	} 
	else
	{
		printf("tie");
	}	
}
void draw(char arr[10]) {
	printf("   %c | %c | %c \n", a[1], a[2], a[3]);
	printf("   _________\n");
	printf("   %c | %c | %c \n", a[4], a[5], a[6]);
	printf("   _________\n");
	printf("   %c | %c | %c \n", a[9], a[8], a[7]);
}
int main() 
{
	int choice, i = 1;
	printf("          TIC TAC TOE GAME   \n");
	printf("\nPLAYER 1 ENTER YOUR NAME = ");
	scanf("%s",&p);
	printf("\nPLAYER 2 ENTER YOUR NAME = ");
	scanf("%s",&q);
	printf("\n  %s you are X \n  %s you are O\n\n",p,q);
	draw(a);
	while (i <= 9) 
	{
		if (player == 1) 
		{
			printf("\n %s enter choice :: ",p);
			scanf("%d", &choice);
		} else {
			printf("\n %s enter choice :: ",q);
			scanf("%d", &choice);
		}
		switch (choice) 
		{
		case 1:
		if(a[1]!='x'||a[1]!='O')
		{
			
			if (player == 1) 
			{
				a[1] = 'x';
				draw(a);
				player++;
				win();
			} 
			else 
			{
				a[1] = 'O';
				draw(a);
				player--;
				win();
			}
		}
		break;
		case 2: 
		if(a[2]!='x'||a[2]!='O')
			
			if (player == 1) 
			{
				a[2] = 'x';
				draw(a);
				player++;
				win();
			} 
			else 
			{
				a[2] = 'O';
				draw(a);
				player--;
				win();
			}
			break;
		case 3: 
		if(a[3]!='x'||a[3]!='O')
			if (player == 1) {
				a[3] = 'x';
				draw(a);
				player++;
				win();
			} 
			else 
			{
				a[3] = 'O';
				draw(a);
				player--;
				win();
			}
			break;
		case 4: 
		if(a[4]!='x'||a[4]!='O')
			if (player == 1) 
			{
				a[4] = 'x';
				draw(a);
				player++;
				win();
			} 
			else 
			{
				a[4] = 'O';
				draw(a);
				player--;
				win();
			}
			break;
		case 5: 
		if(a[5]!='x'||a[5]!='O')
			if (player == 1) 
			{
				a[5] = 'x';
				draw(a);
				player++;
				win();
			} 
			else 
			{
				a[5] = 'O';
				draw(a);
				player--;
				win();
			}
			break;
		case 6: 
		if(a[6]!='x'||a[6]!='O')
			if (player == 1) 
			{
				a[6] = 'x';
				draw(a);
				player++;
				win();
			} 
			else 
			{
				a[6] = 'O';
				draw(a);
				player--;
				win();
			}
			break;
		case 7: 
		if(a[7]!='x'||a[7]!='O')
			if (player == 1) 
			{
				a[7] = 'x';
				draw(a);
				player++;
				win();
			} 
			else 
			{
				a[7] = 'O';
				draw(a);
				player--;
				win();
			}
			break;
		case 8: 
		if(a[8]!='x'||a[8]!='O')
			if (player == 1) 
			{
				a[8] = 'x';
				draw(a);
				player++;
				win();
			} 
			else 
			{
				a[8] = 'O';
				draw(a);
				player--;
				win();
			}
			break;
		case 9: 
		if(a[9]!='x'||a[9]!='O')
			if (player == 1) 
			{
				a[9] = 'x';
				draw(a);
				player++;
				win();
			} 
			else 
			{
				a[9] = 'O';
				draw(a);
				player--;
				win();
			}
			break;
		default: 
			printf("wrong choice");
		}
		i++;
	}
	return 0;
}
