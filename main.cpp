#include <iostream>
#include<cstdlib>

#include "magicfactory.h"
#include "bludgeoningfactory.h"
#include "piercingfactory.h"

#include <vector>
#include <cctype>

using namespace std;

int main()
{
	cout << "**********************" << endl;
	cout << "********||||||||||********"  << endl;           
	cout << "********||||||||||********"  << endl;
	cout << "********||||||||||********" << endl;
	cout << "--------------------------" << endl;
	cout << "|||||||BATTLEGROUND|||||||" << endl;
	cout << "--------------------------" << endl;
	
	char choice;
	bool validChoice =  false;

	cout <<"\n\nPress 'P' to play, 'E' to exit:";
		cin >> choice;
	toupper(choice);
	
	while(!validChoice)
	{
		
		
		if(choice == 'P' || choice == 'E')
		{
			validChoice = true;
			cout << " **********************\n" << endl;
		}
		else
		{
			cout <<"\n\nPress 'P' to play, 'E' to exit:";
			cin >> choice;
			toupper(choice);
			
		}
	}
	
	int option,force;
	
	switch (choice)
	{
		case 'P': cout << "Choose an option: \n1. Create army \n2. Attack oponent \n3. Quit \n";
			      cin >> option;
			      break;
		case 'E' : exit(0);
	}
	
	vector<Unit*> persons;
	vector<Unit*> monsters;
	
	validChoice = false;
	
	int track = 0;
	
	int totalForces;
	//int random;
	
	while(!validChoice)
	{
		
		if(option == 1)
		{	
			cout << endl;
			cout << "You are the master of light forces! \n Choose a light force to create: \n1. Mage \n2. Thief \n3. Soldier\n";
				    cin >> force;
				    cout << "How many forces do you want ( 1 - 100)?\n";
				    cin >> totalForces;
			
						if(force == 1)
						{		UnitFactory * troops1= new MagicFactory;
			
								Unit * player1 = troops1-> createPlayer();
								persons.push_back(player1);
						
								cout << "\nOriginal Mage : " << endl;
								cout << player1->getDescription()<< endl;
								cout << "\n Clones: " << endl;
								
								for(int num = 1; num < totalForces; num++)
								{
									track ++;
									persons.push_back(player1->clone());
									
									if(num % 10 == 0)
										cout << endl;
									
									cout <<(persons.at(track))->getDescription();
								}
						}
						if(force==2)
						{		UnitFactory * troops2= new PiercingFactory;
			
								Unit * player2 = troops2-> createPlayer();
								persons.push_back(player2);
						
								cout << "\nOriginal Thief : " << endl;
								cout << player2->getDescription()<< endl;
								cout << "\n Clones: " << endl;
								
								for(int num = 1; num < totalForces; num++)
								{
									track++;
									persons.push_back(player2->clone());
									
									if(num % 10 == 0)
										cout << endl;
									
									cout << (persons.at(track))->getDescription();
								}
						}
						if(force == 3)
						{		
							UnitFactory * troops3= new BludgeoningFactory;
			
							Unit * player3 = troops3-> createPlayer();
							persons.push_back(player3);
						
							cout << "\nOriginal Soldier : " << endl;
							cout << player3->getDescription()<< endl;
							cout << "\n Clones: " << endl;
								
							for(int num = 1; num < totalForces; num++)
							{
								track++;
								persons.push_back(player3->clone());
									
								if(num % 10 == 0)
									cout << endl;
									
									cout << (persons.at(track))->getDescription();
							}
						}
				    
					cout << "\n\nChoose an option: \n1. Create army \n2. Attack oponent \n3. Quit \n";
					cin >> option;
		}
					
/*for task two*/	else if(option == 2)
			{
				cout << "You, the master of light forces decide to stand against your oponent! \n \n **********************\n ATTACK!!";///////////////////////////////////Attack function here!
				
				cout << "\n\nChoose an option: \n1. Create army \n2. Attack oponent \n3. Quit \n";
				cin >> option;
			}
					
			else if(option ==3)
				exit(0);
					
			else
			{		
				cout << "Invalid choice! \nChoose an option: \n1. Create army \n2. Attack oponent \n3. Quit \n" << endl;
				cin >> option;
			}
	}
}
                              
