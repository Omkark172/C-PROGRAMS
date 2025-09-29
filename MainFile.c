#include<stdio.h>
#include<conio.h>
void main()

{
	int menu, plates, items, bill1 = 0, bill2 = 0, bill3 = 0, total_bill, veg_biryani = 160, chicken_biryani = 220, pav_bhaji = 190;
	char choice;
	printf("\n~~~~~~Welcome to ocean View Restuarant~~~~~~\n\n");
mainMenu:

	printf("\t[1] Main Menu\n\t[2] Bill Payment\n\t[3] Exit\n\nChoice is yours\n");
	scanf_s("%d", &menu);
	switch (menu)
	{
	case 1:
	subMenu:
		printf("\n¬¬¬¬¬¬¬¬¬¬  Main Menu  ¬¬¬¬¬¬¬¬¬\n\n");
		printf("\t[1] veg Biryani \t160Rs\n\t[2] Chicken Biryani  \t220Rs\n\t[3] pav bhaji \t\t190Rs\n");
		printf("Choose upto 3\n");
		scanf_s("%d", &items);

		switch (items)
		{
		case 1:
			printf("veg Biryani\n\n");
			printf("Enter the plates you want to order:\n");
			scanf_s("%d", &plates);
			bill1 = veg_biryani * plates;
			printf("\nveg Biryani= %dRs", bill1);
			break;
		case 2:
			printf("Chicken Biryani\n\n");
			printf("Enter the plates you want to order:\n");
			scanf_s("%d", &plates);
			bill2 = chicken_biryani * plates;
			printf("\nChicken Biryani= %dRs", bill2);
			break;
		case 3:
			printf("pav bhaji\n\n");
			printf("Enter the plates you want to order:\n");
			scanf_s("%d", &plates);
			bill3 = pav_bhaji * plates;
			printf("\npav bhaji= %dRs", bill3);

		default:
			printf("Error... Please select upto .\a");
			break;
		}
		printf("\n\nDO YOU WANT TO CONTINUE ON MENU\n(Press'y' for yes\nPress 'n'for No)\n");
		scanf_s("\n%c", &choice);
		if (choice == 'y')
		{
			goto subMenu;
		}
		else if (choice == 'n')
			goto mainMenu;

	case 2:
		printf("\n`````````Bill`````````\n\n");
		total_bill = bill1 + bill2 + bill3;
		printf("\nTotal Bill=%dRs\n\n", total_bill);
		printf("/ / / / thanks for visiting \\ \\ \\ \\\n");
		break;
	case 3:
		printf("\n\nYou haven`t payed your bill. please pay your bill\a\n");
		goto mainMenu;
		printf("Thanks\n");
		break;


	}
	_getch();
}