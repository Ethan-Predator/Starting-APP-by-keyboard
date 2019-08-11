#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<ctype.h>
#define TURE 1
#define FALSE 0
void hide();
void Menu(int,int);
int main(){
	system("color 02"); 
	int num=0;
	int end=FALSE;
	char clear;
	do{
		system("cls");
		Menu(end,num);
		scanf("%d",&num);
		system("color 02");
		switch(num){
			case 1: 
				ShellExecute(NULL,"open","C:\\Program Files (x86)\\Google\\Chrome\\Application\\chrome.exe",NULL,NULL,SW_SHOWDEFAULT);
				end=FALSE; break;
			case 2:
				ShellExecute(NULL,"open","C:\\Users\\koey9\\eclipse\\java-photon\\eclipse\\eclipse.exe",NULL,NULL,SW_SHOWDEFAULT);
				end=FALSE; break;
			case 3:
				ShellExecute(NULL,"open","C:\\Users\\koey9\\Processing\\processing-2.2.1\\processing.exe",NULL,NULL,SW_SHOWDEFAULT);
				end=FALSE; break;
			case 4:
				ShellExecute(NULL,"open","C:\\Program Files (x86)\\Microsoft Office\\root\\Office16\\WINWORD.EXE",NULL,NULL,SW_SHOWDEFAULT);
				end=FALSE; break;
			case 5:
				ShellExecute(NULL,"open","C:\\Program Files (x86)\\Microsoft Office\\root\\Office16\\POWERPNT.EXE",NULL,NULL,SW_SHOWDEFAULT);
				end=FALSE; break;
			case 6:
				ShellExecute(NULL,"open","C:\\Program Files (x86)\\Microsoft Office\\root\\Office16\\EXCEL.EXE",NULL,NULL,SW_SHOWDEFAULT);
				end=FALSE; break;
			case 7:
				ShellExecute(NULL,"open","C:\\Program Files (x86)\\Microsoft Office\\root\\Office16\\MSACCESS.EXE",NULL,NULL,SW_SHOWDEFAULT);
				end=FALSE; break;
			case 8:
				ShellExecute(NULL,"open","C:\\Program Files\\ESET\\ESET Security\\egui.exe",NULL,NULL,SW_SHOWDEFAULT);
				end=FALSE; break;
			case 9:
				ShellExecute(NULL,"open","C:\\Program Files (x86)\\Bin\\QQScLauncher.exe",NULL,NULL,SW_SHOWDEFAULT);
				end=FALSE; break;
			case 10:
				ShellExecute(NULL,"open","C:\\Program Files (x86)\\Tencent\\WeChat\\WeChat.exe",NULL,NULL,SW_SHOWDEFAULT);
				end=FALSE; break;
			case 11:
				ShellExecute(NULL,"open","C:\\Users\\koey9\\XS_VPN\\xsjs-win-6.1\\XS_VPN.exe",NULL,NULL,SW_SHOWDEFAULT);
				end=FALSE; break;
			case 12:
				ShellExecute(NULL,"open","C:\\Users\\koey9\\AppData\\Roaming\\baidu\\BaiduNetdisk\\BaiduNetdisk.exe",NULL,NULL,SW_SHOWDEFAULT);
				end=FALSE; break;
			case 13:
				ShellExecute(NULL,"open","C:\\Wuand\\Wuand.exe",NULL,NULL,SW_SHOWDEFAULT);
				end=FALSE; break;
			default: end=TURE; break;			
		}
		while((clear = getchar()) != '\n' && clear != EOF);
	}while(end);
	hide();
	return 0;
}
void Menu(int BooleanValue, int num)
{
    int i;
    char tit[100] = "\n\n                         ***  Welcome to genius progam  *** \n";
    char app[13][100] = {" 1. Google Chrome",
        " 2.  Java Eclipse",
        " 3.  Processing",
        " 4.  MS-Word",
        " 5.  MS-PowerPoint     ",
        " 6.  MS-Excel",
		" 7.  MS-Access",
		" 8.  ESET Security",
		" 9.  QQ",
		" 10. WeChat",
		" 11. XC_VPN",
		" 12. BaiDu Netdisk",
		" 13. VPN Browser"};
    puts(tit);  printf("\n--<APPLICATION>--\n\n");
    printf("%-30s",app[0]); printf("%-30s",app[1]); puts(app[2]); printf("\n%-30s",app[3]);
    printf("%-30s",app[4]); puts(app[5]); printf("\n%-30s",app[6]); printf("%-30s",app[7]);
    puts(app[8]); printf("\n%-30s",app[9]); printf("%-30s",app[10]); puts(app[11]);
    printf("\n%-30s",app[12]);
    printf("\n\nEnter the application number here: "); if(BooleanValue) printf("(%d is invalid number) ",num);
}
void hide(void)
{
HWND hwnd;
hwnd=FindWindow("ConsoleWindowClass",NULL);
if(hwnd)
{
ShowOwnedPopups(hwnd,SW_HIDE);
ShowWindow(hwnd,SW_HIDE);
}
}
