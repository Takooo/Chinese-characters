#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
int main(int argc, int argv[])
{

	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

	unsigned char s1[10] = "汉";
	unsigned char s2[10] = "字";
	unsigned char s3[10] = "汉";
	unsigned char s4[10] = "字";
	unsigned char s5[10] = "汉";
	unsigned char s6[10] = "字";
	unsigned char s7[10] = "汉";
	unsigned char s8[10] = "字";
	unsigned char s9[10] = "汉";
	unsigned char s0[10] = "字";
	unsigned char u1[32];
	unsigned char u2[32];
	unsigned char u3[32];
	unsigned char u4[32];
	unsigned char u5[32];
	unsigned char u6[32];
	unsigned char u7[32];
	unsigned char u8[32];
	unsigned char u9[32];
	unsigned char u0[32];
	int q, w, j, k, i, m = 0;
	int flag;
	long ofs;
	FILE *fp;
	unsigned char key[8] = {
		0x80,0x40,0x20,0x10,0x08,0x04,0x02,0x01
	};
	fp = fopen("Hzk16.字库", "rb");
	
	q = (s1[0] - 0xA1);
	w = (s1[1] - 0xA1);
	ofs = (q * 94 + w) * 32L;
	fseek(fp, ofs, SEEK_SET);
	fread(u1, 1, 32, fp);

	q = (s2[0] - 0xA1);
	w = (s2[1] - 0xA1);
	ofs = (q * 94 + w) * 32L;
	fseek(fp, ofs, SEEK_SET);
	fread(u2, 1, 32, fp);

	q = (s3[0] - 0xA1);
	w = (s3[1] - 0xA1);
	ofs = (q * 94 + w) * 32L;
	fseek(fp, ofs, SEEK_SET);
	fread(u3, 1, 32, fp);

	q = (s4[0] - 0xA1);
	w = (s4[1] - 0xA1);
	ofs = (q * 94 + w) * 32L;
	fseek(fp, ofs, SEEK_SET);
	fread(u4, 1, 32, fp);

	q = (s5[0] - 0xA1);
	w = (s5[1] - 0xA1);
	ofs = (q * 94 + w) * 32L;
	fseek(fp, ofs, SEEK_SET);
	fread(u5, 1, 32, fp);

	q = (s6[0] - 0xA1);
	w = (s6[1] - 0xA1);
	ofs = (q * 94 + w) * 32L;
	fseek(fp, ofs, SEEK_SET);
	fread(u6, 1, 32, fp);

	q = (s7[0] - 0xA1);
	w = (s7[1] - 0xA1);
	ofs = (q * 94 + w) * 32L;
	fseek(fp, ofs, SEEK_SET);
	fread(u7, 1, 32, fp);

	q = (s8[0] - 0xA1);
	w = (s8[1] - 0xA1);
	ofs = (q * 94 + w) * 32L;
	fseek(fp, ofs, SEEK_SET);
	fread(u8, 1, 32, fp);

	q = (s9[0] - 0xA1);
	w = (s9[1] - 0xA1);
	ofs = (q * 94 + w) * 32L;
	fseek(fp, ofs, SEEK_SET);
	fread(u9, 1, 32, fp);

	q = (s0[0] - 0xA1);
	w = (s0[1] - 0xA1);
	ofs = (q * 94 + w) * 32L;
	fseek(fp, ofs, SEEK_SET);
	fread(u0, 1, 32, fp);
	for (k = 0; k < 16; k++) 
	{
		for (j = 0; j < 2; j++) 
		{
			for (i = 0; i < 8; i++) 
			{
				flag = u1[k * 2 + j] & key[i];
				printf("%s", flag ? "●" : "○");
			}
		}
		printf("\n");
	}
	Sleep(1000);
	system("cls");
	for (k = 0; k < 16; k++)
	{
		for (j = 0; j < 2; j++)
		{
			for (i = 0; i < 8; i++)
			{
				flag = u1[k * 2 + j] & key[i];
				printf("%s", flag ? "●●" : "○○");
			}
		}
		printf("\n");
		for (j = 0; j < 2; j++)
		{
			for (i = 0; i < 8; i++)
			{
				flag = u1[k * 2 + j] & key[i];
				printf("%s", flag ? "●●" : "○○");
			}
		}
		printf("\n");
	}
	Sleep(1000);
	system("cls");
	for (k = 0; k < 16; k++)
	{
		for (j = 0; j < 2; j++)
		{
			for (i = 0; i < 8; i++)
			{
				flag = u1[k * 2 + j] & key[i];
				printf("%s", flag ? "●●●" : "○○○");
			}
		}
		printf("\n");
		for (j = 0; j < 2; j++)
		{
			for (i = 0; i < 8; i++)
			{
				flag = u1[k * 2 + j] & key[i];
				printf("%s", flag ? "●●●" : "○○○");
			}
		}
		printf("\n");
		for (j = 0; j < 2; j++)
		{
			for (i = 0; i < 8; i++)
			{
				flag = u1[k * 2 + j] & key[i];
				printf("%s", flag ? "●●●" : "○○○");
			}
		}
		printf("\n");
	}
	Sleep(1000);
	system("cls");
	for (k = 0; k < 16; k++)
	{
		for (j = 0; j < 2; j++)
		{
			for (i = 0; i < 8; i++)
			{
				flag = u2[k * 2 + j] & key[i];
				printf("%s", flag ? "●●●" : "○○○");
			}
		}
		printf("\n");
		for (j = 0; j < 2; j++)
		{
			for (i = 0; i < 8; i++)
			{
				flag = u2[k * 2 + j] & key[i];
				printf("%s", flag ? "●●●" : "○○○");
			}
		}
		printf("\n");
		for (j = 0; j < 2; j++)
		{
			for (i = 0; i < 8; i++)
			{
				flag = u2[k * 2 + j] & key[i];
				printf("%s", flag ? "●●●" : "○○○");
			}
		}
		printf("\n");
	}
	Sleep(1000);
	system("cls");
	for (k = 0; k < 16; k++)
	{
		for (j = 0; j < 2; j++)
		{
			for (i = 0; i < 8; i++)
			{
				flag = u2[k * 2 + j] & key[i];
				printf("%s", flag ? "●●" : "○○");
			}
		}
		printf("\n");
		for (j = 0; j < 2; j++)
		{
			for (i = 0; i < 8; i++)
			{
				flag = u2[k * 2 + j] & key[i];
				printf("%s", flag ? "●●" : "○○");
			}
		}
		printf("\n");
	}
	Sleep(1000);
	system("cls");
	for (k = 0; k < 16; k++)
	{
		for (j = 0; j < 2; j++)
		{
			for (i = 0; i < 8; i++)
			{
				flag = u2[k * 2 + j] & key[i];
				printf("%s", flag ? "●" : "○");
			}
		}
		printf("\n");
	}
	Sleep(1000);
	system("cls"); 
	for (k = 0; k <16 ; k++)
	{
		for (m = k; m >=0; m--)
			printf(" ");
		for (j = 0; j < 2; j++)
		{
			for (i = 0; i < 8; i++)
			{
				flag = u3[k * 2 + j] & key[i];
				printf("%s", flag ? "↖" : "  ");
			}
		}
		printf("\n");
	}
	Sleep(1000);
	system("cls");
	for (k = 0; k <16; k++)
	{
		for (m = k; m <= 15; m++)
			printf(" ");
		for (j = 0; j < 2; j++)
		{
			for (i = 0; i < 8; i++)
			{
				flag = u3[k * 2 + j] & key[i];
				printf("%s", flag ? "↖" : "  ");
			}
		}
		printf("\n");
	}
	Sleep(1000);
	system("cls");
	for (k = 0; k <= 15; k++)
	{
		for (j = 0; j < 2; j++)
		{
			for (i = 0; i < 8; i++)
			{
				flag = u4[k * 2 + j] & key[i];
				printf("%s", flag ? "●" : "  ");
			}
		}
		printf("\n");
	}
	Sleep(1000);
	system("cls");
	for (k = 15; k >= 0; k--)
	{
		for (j = 0; j < 2; j++)
		{
			for (i = 0; i < 8; i++)
			{
				flag = u4[k * 2 + j] & key[i];
				printf("%s", flag ? "●" : "  ");
			}
		}
		printf("\n");
	}
	Sleep(1000);
	system("cls"); 
	for (k = 0; k < 16; k++)
	{
		for (j = 0; j < 2; j++)
		{
			for (i = 0; i < 8; i++)
			{
				flag = u0[k * 2 + j] & key[i];
				printf("%s", flag ? "●" : "○");
			}
		}
		printf("\n");
	}
	Sleep(1000);
	system("cls");
	for (k = 0; k < 16; k++)
	{
		for (j = 0; j < 2; j++)
		{
			for (i = 0; i < 8; i++)
			{
				flag = u0[k * 2 + j] & key[i];
				printf("%s", flag ? "○" : "●");
			}
		}
		printf("\n");
	}
	Sleep(1000);
	system("cls");



	for (k = 0; k <= 15; k++)
	{
		for (j = 0; j < 2; j++)
		{
			for (i = 0; i < 8; i++)
			{
				flag = u5[k * 2 + j] & key[i];
				printf("%s", flag ? "▲" : "  ");
			}
		}
		printf("\n");
	}
	Sleep(1000);
	system("cls");
	for (k = 0; k <= 15; k++)
	{
		for (j = 0; j < 2; j++)
		{
			for (i = 0; i < 8; i++)
			{
				flag = u6[k * 2 + j] & key[i];
				printf("%s", flag ? "■" : "  ");
			}
		}
		printf("\n");
	}
	Sleep(1000);
	system("cls");
	for (k = 0; k <= 15; k++)
	{
		for (j = 0; j < 2; j++)
		{
			for (i = 0; i < 8; i++)
			{
				flag = u7[k * 2 + j] & key[i];
				printf("%s", flag ? "▼" : "  ");
			}
		}
		printf("\n");
	}
	Sleep(1000);
	system("cls");
	for (k = 0; k <= 15; k++)
	{
		for (j = 0; j < 2; j++)
		{
			for (i = 0; i < 8; i++)
			{
				flag = u8[k * 2 + j] & key[i];
				printf("%s", flag ? "◆" : "  ");
			}
		}
		printf("\n");
	}
	Sleep(1000);
	system("cls");
	for (k = 0; k <= 15; k++)
	{
		for (j = 0; j < 2; j++)
		{
			for (i = 0; i < 8; i++)
			{
				flag = u9[k * 2 + j] & key[i];
				printf("%s", flag ? "★" : "  ");
			}
		}
		printf("\n");
	}
	Sleep(1000);
	system("cls"); 
	for (m = 0; m <= 4; m++)
	{
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED);
		for (k = 0; k <= 15; k++)
		{
			for (j = 0; j < 2; j++)
			{
				for (i = 0; i < 8; i++)
				{
					flag = u7[k * 2 + j] & key[i];
					printf("%s", flag ? "☉" : "  ");
				}
			}
			printf("\n");
		}
		Sleep(100);
		system("cls");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		for (k = 0; k <= 15; k++)
		{
			for (j = 0; j < 2; j++)
			{
				for (i = 0; i < 8; i++)
				{
					flag = u7[k * 2 + j] & key[i];
					printf("%s", flag ? "☉" : "  ");
				}
			}
			printf("\n");
		}
		Sleep(100);
		system("cls");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_BLUE);
		for (k = 0; k <= 15; k++)
		{
			for (j = 0; j < 2; j++)
			{
				for (i = 0; i < 8; i++)
				{
					flag = u7[k * 2 + j] & key[i];
					printf("%s", flag ? "☉" : "  ");
				}
			}
			printf("\n");
		}
		Sleep(100);
		system("cls");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
		for (k = 0; k <= 15; k++)
		{
			for (j = 0; j < 2; j++)
			{
				for (i = 0; i < 8; i++)
				{
					flag = u7[k * 2 + j] & key[i];
					printf("%s", flag ? "☉" : "  ");
				}
			}
			printf("\n");
		}
		Sleep(100);
		system("cls");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE);
		for (k = 0; k <= 15; k++)
		{
			for (j = 0; j < 2; j++)
			{
				for (i = 0; i < 8; i++)
				{
					flag = u7[k * 2 + j] & key[i];
					printf("%s", flag ? "☉" : "  ");
				}
			}
			printf("\n");
		}
		Sleep(100);
		system("cls");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
		for (k = 0; k <= 15; k++)
		{
			for (j = 0; j < 2; j++)
			{
				for (i = 0; i < 8; i++)
				{
					flag = u7[k * 2 + j] & key[i];
					printf("%s", flag ? "☉" : "  ");
				}
			}
			printf("\n");
		}
		Sleep(100);
		system("cls");
		SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
		for (k = 0; k <= 15; k++)
		{
			for (j = 0; j < 2; j++)
			{
				for (i = 0; i < 8; i++)
				{
					flag = u7[k * 2 + j] & key[i];
					printf("%s", flag ? "☉" : "  ");
				}
			}
			printf("\n");
		}
		Sleep(100);
		system("cls");
	}	
	return 0;
}
