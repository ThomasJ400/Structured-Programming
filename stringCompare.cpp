// StringCompare.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include <iostream>
#include <string>


using namespace std;

void Commands(string a) 
{
	bool isCommand = false;
	int command;
	string commands[]{"help","open","close","go","take","attack","inventory","equip"};
	for (int i = 0; i < 7; i++)
	{
		if (a == commands[i])
		{
			isCommand = true;
			command = i;
			i = 9;
		}
	}
	if (isCommand)
	{
		switch (command)
		{
		case 0:
			//help
			break;
		case 1:
			//open
			break;
		case 2:
			//close
			break;
		case 3:
			//go
			break;
		case 4:
			//take
			break;
		case 5:
			//attack
			break;
		case 6:
			//inventory
			break;
		case 7:
			//equip
			break;
		default:
			//help
			break;

		}
	}
}

bool compareStrings(string a, string b, bool caseSensitive)
{
	bool stringsEqual = false;

	if (a.length() == b.length())
	{
		if (!caseSensitive)
		{
			for (int i = 0; i < a.length(); i++)
			{
				a[i] = toupper(a[i]);
				b[i] = toupper(b[i]);
			}
		}

		if (a == b)
		{
			stringsEqual = true;
		}
	}
	return stringsEqual;
}

void NagSpeak(string a, int textSpeed)
{
	cout << "N>";
	Sleep(textSpeed);
	for (int i = 0; i < a.length(); i++)
	{
		cout << a[i];
		Sleep(textSpeed);
	}
	cout << endl;
}

string userInput(string name)
{
	string word;
	cout << name[0] << ">";
	getline(cin, word);
	return word;
}

void menu(int l)
{
	bool playing = true;
	bool living = true;
	int negCounter = 0;
	int maxNegs = 4;
	int level = l;
	int fast = 50;
	int slow = 300;
	int medium = 200;
	
	string word;
	string word2;
	string name;

	while (playing && living)
	{
		switch (level)
		{
		case 0:
			NagSpeak("Please tell me your name", fast);
			cout << " >";
			cin >> name;

			if (compareStrings(name, "no", false))
			{
				NagSpeak("You horror!", slow);
				living = false;
			}
			else
			{
				level++;
			}
			break;
		case 1:
			NagSpeak(("Thank you " + name), fast);
			NagSpeak((name + " I need you to escape the labrynth to rescue me"), fast);
			NagSpeak(("Will you accept?"), fast);
			word = userInput(name);
			if ((compareStrings(word, "yes", false)) || (compareStrings(word, "y", false)) || (compareStrings(word, "okay", false) || (compareStrings(word, "ok", false))))
			{
				NagSpeak("I will be your eyes", fast);
				level++;
			}
			else
			{
				living = false;
			}
			break;
		case 2:
			NagSpeak("You are in a square room. A dim light hangs above you. To the north, you see a wooden door", fast);
			word2 = userInput(name); 
			if ((compareStrings(word2, "open door", false)) || (compareStrings(word2, "open the door", false)))
			{
				level++;
			} 
			else if ((compareStrings(word2, "look around", false)) || (compareStrings(word2, "examine room", false)))
			{

			}
			else
			{
				negCounter++;
				if (negCounter == maxNegs)
				{
					living = false;
				}
				else 
				{
					NagSpeak("I don't understand you...", slow);
				}
			}
			break;
		case 3:
			NagSpeak("As you go through the door, you are in another dimly lit room.", fast);
			NagSpeak(".", fast);
			cin >> word;
			break;
		}
	}
	if (!living)
	{
		NagSpeak("You have doomed me!", 300);
	}
}

int main()
{
	menu(0);
	return 0;
}

