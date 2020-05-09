#include <iostream>
#include <chrono>
#include "Discord.h"
#include <thread>

using namespace std;

Discord* g_Discord;

string idiot;
string oldLilFucker;
string lilFucker;
int64_t oldEtime;

void checkKeyPress()
{
	while (true)
	{
		if (GetAsyncKeyState(VK_INSERT) & 1)
		{
			HWND cWin = GetConsoleWindow();
			SetWindowPos(cWin, HWND_TOPMOST, 0, 0, 0, 0, SWP_DRAWFRAME | SWP_NOMOVE | SWP_NOSIZE | SWP_SHOWWINDOW);
			ShowWindow(cWin, SW_NORMAL);
			SetWindowPos(cWin, HWND_NOTOPMOST, 0, 0, 0, 0, SWP_DRAWFRAME | SWP_NOMOVE | SWP_NOSIZE | SWP_SHOWWINDOW);
		}
		Sleep(1);
	}
}

int main()
{
	g_Discord->Init();
	g_Discord->Update("Lobby", std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count(), NULL);
	cout << "VALORANT RPC by BaconToaster#5317" << endl;
	cout << "What state do you want(read readme.txt)" << endl;
	std::thread t1(checkKeyPress);
	t1.detach();
	cin >> idiot;
	while (true)
	{
		if (!idiot.empty())
		{
			if (idiot == "ranked" || idiot == "competetive")
			{
				idiot = "";
				system("cls");
				cout << "VALORANT RPC by BaconToaster#5317" << endl;
				g_Discord->Update("Competetive", std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count(), NULL);
				cout << "What state do you want(read readme.txt)" << endl;
				cin >> idiot;
			}
			else if (idiot == "unranked" || idiot == "unrated")
			{
				idiot = "";
				system("cls");
				cout << "VALORANT RPC by BaconToaster#5317" << endl;
				g_Discord->Update("Unrated", std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count(), NULL);
				cout << "What state do you want(read readme.txt)" << endl;
				cin >> idiot;
			}
			else if (idiot == "rankedc" || idiot == "competetivec")
			{
				idiot = "";
				system("cls");
				cout << "VALORANT RPC by BaconToaster#5317" << endl;
				oldEtime = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count();
				g_Discord->Update("Competetive", oldEtime, "0-0");
				oldLilFucker = lilFucker;
				cin >> lilFucker;
				while (lilFucker != "stop")
				{
					if (lilFucker != oldLilFucker)
					{
						g_Discord->Update("Competetive", oldEtime, lilFucker.c_str());
						oldLilFucker = lilFucker;
						system("cls");
						cout << "VALORANT RPC by BaconToaster#5317" << endl;
						cin >> lilFucker;
					}
				}
				lilFucker = "";
				oldLilFucker = "";
				oldEtime = 0;
				system("cls");
				cout << "VALORANT RPC by BaconToaster#5317" << endl;
				cout << "What state do you want(read readme.txt)" << endl;
				cin >> idiot;
			}
			else if (idiot == "unrankedc" || idiot == "unratedc")
			{
				idiot = "";
				system("cls");
				cout << "VALORANT RPC by BaconToaster#5317" << endl;
				oldEtime = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count();
				g_Discord->Update("Unrated", oldEtime, "0-0");
				oldLilFucker = lilFucker;
				cin >> lilFucker;
				while (lilFucker != "stop")
				{
					if (lilFucker != oldLilFucker)
					{
						g_Discord->Update("Unrated", oldEtime, lilFucker.c_str());
						oldLilFucker = lilFucker;
						system("cls");
						cout << "VALORANT RPC by BaconToaster#5317" << endl;
						cin >> lilFucker;
					}
				}
				lilFucker = "";
				oldLilFucker = "";
				oldEtime = 0;
				system("cls");
				cout << "VALORANT RPC by BaconToaster#5317" << endl;
				cout << "What state do you want(read readme.txt)" << endl;
				cin >> idiot;
			}
			else if (idiot == "lobby")
			{
				idiot = "";
				g_Discord->Update("Lobby", std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count(), NULL);
				system("cls");
				cout << "VALORANT RPC by BaconToaster#5317" << endl;
				cout << "What state do you want(read readme.txt)" << endl;
				cin >> idiot;
			}
			else
			{
				idiot = "";
				system("cls");
				cout << "VALORANT RPC by BaconToaster#5317" << endl;
				cout << "That's not a valid state" << endl;
				cout << "What state do you want(read readme.txt)" << endl;
				cin >> idiot;
			}
		}
		Sleep(1);
	}
	return 0;
}