#include <iostream>
#include <windows.h>
#include <string.h>
#include<algorithm>
#include <fstream>
#include <string>
using namespace std;
int onlyNumbers()
{
	int flag = 1;
	while (flag == 1)
	{
		int number;
		cin >> number;
		cout << endl;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(4000, '\n');
			cout << "-_-" << endl << "Enter a number" << endl;
		}
		else
		{
			return number;
		}
	}

}
int Monthhhh()
{
	string c;
	int d;
	int flag = 1;
	while (flag == 1)
	{
			cin >> c;
		if ((c == "January") or (c == "january"))
		{
			d=1;
			flag = 0;
			break;
		}
		else
		{
			if ((c == "February") or (c == "february"))
			{
				d = 2;
				flag = 0;
				break;
			}
			else
			{
					if ((c == "March") or (c == "march"))
					{
						d = 3;
						flag = 0;
						break;
					}
					else
					{
						if ((c == "April") or (c == "april"))
						{
							d= 4;
							flag = 0;
							break;
						}
						else
						{
							if ((c == "May") or (c == "may"))
							{
								d= 5;
								flag = 0;
								break;
							}
							else
							{
								if ((c== "June") or (c == "june"))
								{
									d = 6;
									flag = 0;
								}
								else
								{
									if ((c == "July") or (c== "july"))
									{
										d = 7;
										flag = 0;
										break;
									}
									else
									{
										if ((c== "August") or (c == "august"))
										{
											d= 8;
											flag = 0;
											break;
										}
										else
										{
											if ((c == "September") or (c == "september"))
											{
												d = 9;
												flag = 0;
												break;
											}
											else
											{
												if ((c == "October") or (c == "october"))
												{
													d = 10;
													flag = 0;
													break;
												}
												else
												{
													if ((c == "November") or (c == "november"))
													{
														d = 11;
														flag = 0;
														break;
													}
													else
													{
														if ((c == "December") or (c == "december"))
														{
															d= 12;
															flag = 0;
															break;
														}
														else
														{
															cout << "MONTH!";
															flag = 1;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
			}

		}
	}
	return d;
}
struct date
{
	int year;
	int month;
	int day;
};
struct plane
{
	string company;
	string surname_name;
	int flight;
	int cost;
	date info;
};
int add(string path, plane* salon, int count, int count_1[])
{
	path = "myFile.txt";
	ofstream fout;
	ifstream fin;
	fin.open(path);

	if (!fin.is_open())
	{
		cout << "File opening error" << endl;
	}
	else
	{
		fout.open(path, ofstream::app);
		string str;
		while (!fin.eof())
		{
			str = "";
			getline(fin, str);
			count_1[1]++;
		}
		count_1[0] = +count_1[1] - 1;
		cout << "How many passengers" << '\n';
		count = onlyNumbers();
		while (((count <= 0) && (count >= 0)))
		{
			if (((count <= 0) && (count >= 0)))
			{
				count = 0;
				cout << "Prover";
				count = onlyNumbers();
			}
		}
		while (count <= 0)
		{
			cout << " -_- " << endl;
			cout << "Enter a number from the list " << endl;
			count = onlyNumbers();
			while (((count <= 0) && (count >= 0)))
			{
				if (((count <= 0) && (count >= 0)))
				{
					count = 0;
					cout << "Prover";
					count = onlyNumbers();
				}
			}
		}
		count += count_1[0];
		for (int i = count_1[0]; i < count; i++)
		{
			cout << "Enter the data" << endl << endl;
			cout << "Passenger's last name and name: ";
			string name;
			string surname;
			cin >> surname >> name;
			salon[i].surname_name = surname + " " + name;
			cout << "Company: ";                        cin >> salon[i].company;
			cout << "Flight: ";                         salon[i].flight = onlyNumbers();
			while (((salon[i].flight <= 0) && (salon[i].flight >= 0)))
			{
				if (((salon[i].flight <= 0) && (salon[i].flight >= 0)))
				{
					salon[i].flight = 0;
					cout << "Prover";
					salon[i].flight = onlyNumbers();
				}

			}
			cout << "Ticket price: ";                   salon[i].cost = onlyNumbers();
			while (((salon[i].cost <= 0) && (salon[i].cost >= 0)))
			{
				if (((salon[i].cost <= 0) && (salon[i].cost >= 0)))
				{
					salon[i].cost = 0;
					cout << "Prover";
					salon[i].cost = onlyNumbers();
				}
			}
			cout << "Data Year: ";                      salon[i].info.year= onlyNumbers();
			while (((salon[i].info.year <= 0) && (salon[i].info.year >= 0)))
			{
				if (((salon[i].info.year <= 0) && (salon[i].info.year >= 0)))
				{
					salon[i].info.year = 0;
					cout << "Prover";
					salon[i].info.year = onlyNumbers();
				}
			}
			cout << "Data Month: ";                     
			salon[i].info.month = Monthhhh();
			cout << "Data Day: ";                       salon[i].info.day= onlyNumbers();
			while (((salon[i].info.day <= 0) && (salon[i].info.day >= 0)))
			{
				if (((salon[i].info.day <= 0) && (salon[i].info.day >= 0)))
				{
					salon[i].info.day = 0;
					cout << "Prover";
					salon[i].info.day = onlyNumbers();
				}
			}
			while (((salon[i].info.day >= 30) || (salon[i].info.day <= 0)))
			{
				cout << " -_- " << endl;
				cout << "Enter a number from the list " << endl;
				salon[i].info.day = onlyNumbers();
				while (((salon[i].info.day <= 0) && (salon[i].info.day >= 0)))
				{
					if (((salon[i].info.day <= 0) && (salon[i].info.day >= 0)))
					{
						salon[i].info.day = 0;
						cout << "Prover";
						salon[i].info.day = onlyNumbers();
					}
				}
			}
			cout << "________________________________" << endl;

			fout << salon[i].surname_name << "   " << salon[i].company << "   " << salon[i].flight << "   " << salon[i].cost << "   " << salon[i].info.year << "   " << salon[i].info.month << "   " << salon[i].info.day << endl;
		}
	}
	count_1[0] = count;
	fin.close();
	return count;
}
void perevod(string path, plane* salon, int count_1[])
{
	path = "myFile.txt";
	ofstream fout;
	ifstream fin;
	fin.open(path);
	count_1[1] = 0;
	char a = 0;
	int  i = 0;
	if (!fin.is_open())
	{
		cout << "File opening error" << endl;
	}
	else
	{
		while (!fin.eof())
		{
			if (a % 8 == 0)
			{
				fin >> salon[i].surname_name;
				a++;
			}
			else
			{
				if (a % 8 == 1)
				{
					string d;
					fin >> d;
					salon[i].surname_name = salon[i].surname_name + " " + d;
					a++;
				}
				else
				{
					if (a % 8 == 2)
					{
						fin >> salon[i].company;
						a++;
					}
					else
					{
						if (a % 8 == 3)
						{
							fin >> salon[i].flight;
							a++;
						}
						else
						{
							if (a % 8 == 4)
							{
								fin >> salon[i].cost;
								a++;
							}
							else
							{
								if (a % 8 == 5)
								{
									fin >> salon[i].info.year;
									a++;
								}
								else
								{
									if (a % 8 == 6)
									{
										fin >> salon[i].info.month;
										a++;
									}
									else
									{
										if (a % 8 == 7)
										{
											fin >> salon[i].info.day;
											a++;
											i++;
										}
									}
								}

							}

						}

					}
				}
			}

		}
	}
	count_1[0] = i;
}
void pechati(string path, plane* salon, int count_1[])
{
	int passenger;
	cout << "Please input number student" << '\t';
	passenger = onlyNumbers();
	while (((passenger <= 0) && (passenger >= 0)))
	{
		if (((passenger <= 0) && (passenger >= 0)))
		{
			passenger = 0;
			cout << "Prover";
			passenger = onlyNumbers();
		}
	}
	while (passenger <= 0)
	{
		cout << " -_- " << endl;
		cout << "Enter a number from the list " << endl;
		passenger = onlyNumbers();
		while (((passenger <= 0) && (passenger >= 0)))
		{
			if (((passenger <= 0) && (passenger >= 0)))
			{
				passenger = 0;
				cout << "Prover";
				passenger = onlyNumbers();
			}
		}
	}
	passenger -= 1;
	perevod(path, salon, count_1);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
	cout << '\n';
	cout << "------------------Information about student № " << passenger + 1 << " ------------------";
	cout << '\n';
	cout << " Passenger's last name and name is : " << '\t' << salon[passenger].surname_name;
	cout << '\n';
	cout << " Company is : " << '\t' << salon[passenger].company;
	cout << '\n';
	cout << " Flight is : " << '\t' << salon[passenger].flight;
	cout << '\n';
	cout << " Price is : " << '\t' << salon[passenger].cost;
	cout << '\n';
	cout << " Data Year is : " << '\t' << salon[passenger].info.year;
	cout << '\n';
	cout << " Data Month is : " << '\t';
	switch(salon[passenger].info.month)
	{
	case 1:
		cout << "January";
	break;
	case 2:
		cout << "February";
		break;
	case 3:
		cout << "March";
		break;
	case 4:
		cout << "April";
		break;
	case 5:
		cout << "May";
		break;
	case 6:
		cout << "June";
		break;
	case 7:
		cout << "July";
		break;
	case 8:
		cout << "August";
		break;
	case 9:
		cout << "September";
		break;
	case 10:
		cout << "October";
		break;
	case 11:
		cout << "November";
		break;
	case 12:
		cout << "December";
		break;
	}
	cout << '\n';
	cout << " Data Day  is : " << '\t' << salon[passenger].info.day;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << '\n';
	cout << "------------------ENDING------------------";
	cout << '\n';
}
void naity(string path, plane* salon, int count_1[])
{
	string find;
	perevod(path, salon, count_1);
	cout << "Enter the company name";
	cout << endl;
	cin >> find;
	cout << endl;
	int* finding_flights = new int[count_1[0]];
	cout << endl;
	int cheking = 0;
	cout << "--------------Finding-----Flight----------------";
	for (int i = 0; i < count_1[0]; i++)
	{
		if (salon[i].company == find)
		{
			finding_flights[cheking] = salon[i].flight;
			cheking++;
		}
	}
	if (cheking == 0)
	{
		cout << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		cout << "Not founded";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout << endl;
	}
	else
	{
		cout << endl;
		sort(finding_flights, finding_flights + cheking);
		for (int i = 0; i < cheking; i++)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
			cout << finding_flights[i] << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		}
	}


	cout << "Enter the flight number";
	cout << endl;
	int group;
	group = onlyNumbers();
	string* finding_names = new string[count_1[0]];
	for (int i = 0; i < count_1[0]; i++)
	{
		finding_names[i] = "@";
	}
	cout << endl;
	cheking = 0;
	cout << "--------------Finding---Passengers-----------";
	for (int i = 0; i < count_1[0]; i++)
	{
		finding_names[cheking] = salon[i].flight;
		if ((salon[i].company == find) && (salon[i].flight == group))
		{
			finding_names[cheking] = salon[i].surname_name;
			cheking++;
		}
	}
	if (cheking == 0)
	{
		cout << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		cout << "Not founded";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout << endl;
	}
	else
	{
		cout << endl;
		sort(finding_names, finding_names + cheking);
		for (int i = 0; i < cheking; i++)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
			cout << finding_names[i] << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		}
	}
}
int empty_file(string path, plane* salon, int count, int count_1[])
{
	setlocale(LC_ALL, "ru");
	path = "myFile.txt";

	ofstream fout;
	ifstream fin;
	fin.open(path);

	if (!fin.is_open())
	{
		cout << "File opening error" << endl;
		fout.open(path, ofstream::app);
		cout << "How many passengers" << '\n';
		count = onlyNumbers();
		while (((count <= 0) && (count >= 0)))
		{
			if (((count <= 0) && (count >= 0)))
			{
				count = 0;
				cout << "Prover";
				count = onlyNumbers();
			}
		}
		while (((count >= 30) || (count <= 0)))
		{
			cout << " -_- " << endl;
			cout << "Enter a number from the list " << endl;
			count = onlyNumbers();
			while (((count <= 0) && (count >= 0)))
			{
				if (((count <= 0) && (count >= 0)))
				{
					count = 0;
					cout << "Prover";
					count = onlyNumbers();
				}
			}
		}

		count += count_1[0];
		for (int i = count_1[0]; i < count; i++)
		{
			cout << "Enter the data" << endl << endl;
			cout << "Passenger's last name and name: ";
			string name;
			string surname;
			cin >> surname >> name;
			salon[i].surname_name = surname + " " + name;
			cout << "Company: ";                       cin >> salon[i].company;
			cout << "Flight: ";                        salon[i].flight = onlyNumbers();
			while (((salon[i].flight <= 0) && (salon[i].flight >= 0)))
			{
				if (((salon[i].flight <= 0) && (salon[i].flight >= 0)))
				{
					salon[i].flight = 0;
					cout << "Prover";
					salon[i].flight = onlyNumbers();
				}

			}
			cout << "Ticket price: ";                  salon[i].cost = onlyNumbers();
			while (((salon[i].cost <= 0) && (salon[i].cost >= 0)))
			{
				if (((salon[i].cost <= 0) && (salon[i].cost >= 0)))
				{
					salon[i].cost = 0;
					cout << "Prover";
					salon[i].cost = onlyNumbers();
				}

			}
			cout << "Data Year";                       salon[i].info.year = onlyNumbers();
			while (((salon[i].info.year <= 0) && (salon[i].info.year >= 0)))
			{
				if (((salon[i].info.year <= 0) && (salon[i].info.year >= 0)))
				{
					salon[i].info.year = 0;
					cout << "Prover";
					salon[i].info.year = onlyNumbers();
				}
			}
			cout << "Data Month";                      salon[i].info.month=Monthhhh();
			cout << "Data Day";                       salon[i].info.day = onlyNumbers();
			while (((salon[i].info.day <= 0) && (salon[i].info.day >= 0)))
			{
				if (((salon[i].info.day <= 0) && (salon[i].info.day >= 0)))
				{
					salon[i].info.day = 0;
					cout << "Prover";
					salon[i].info.day = onlyNumbers();
				}
			}
			while (((salon[i].info.day >= 30) || (salon[i].info.day <= 0)))
			{
				cout << " -_- " << endl;
				cout << "Enter a number from the list " << endl;
				salon[i].info.day = onlyNumbers();
				while (((salon[i].info.day <= 0) && (salon[i].info.day >= 0)))
				{
					if (((salon[i].info.day <= 0) && (salon[i].info.day >= 0)))
					{
						salon[i].info.day = 0;
						cout << "Prover";
						salon[i].info.day = onlyNumbers();
					}
				}
			}
			cout << "________________________________" << endl;
		}
		count_1[0] = count;
		for (int i = 0; i < count_1[0]; i++)
		{
			fout << salon[i].surname_name << "   " << salon[i].company << "   " << salon[i].flight << "   " << salon[i].cost << "   " << salon[i].info.year << "   " << salon[i].info.month << "   " << salon[i].info.day << endl;
		}
		fin.close();
	}
	else
	{
		cout << "The file is open" << endl;
	}
	fin.close();
	return 0;
}
void naity_date(string path, plane* salon, int count_1[])
{
	int a1, a2, c1, c2,b1, b2;
	perevod(path, salon, count_1);
	cout << "Enter the start dates of the search and the end dates of the search"<<endl;
	cout << "Data Year 1: ";                     
	a1 = onlyNumbers();
	while (((a1 <= 0) && (a1 >= 0)))
	{
		if (((a1 <= 0) && (a1 >= 0)))
		{
			a1 = 0;
			cout << "Prover";
			a1 = onlyNumbers();
		}
	}
	cout << "Data Year 2: ";
	a2 = onlyNumbers();
	while (((a2 <= 0) && (a2 >= 0)))
	{
		if (((a2 <= 0) && (a2 >= 0)))
		{
			a2 = 0;
			cout << "Prover";
			a2 = onlyNumbers();
		}
	}
	cout << "Data Month 1: ";  
	b1= Monthhhh();
	cout << endl;
	cout << "Data Month 2: ";
	b2= Monthhhh();
	cout << endl;
	cout << "Data Day 1: ";                     
	c1 = onlyNumbers();
	while (((c1 <= 0) && (c1 >= 0)))
	{
		if (((c1 <= 0) && (c1 >= 0)))
		{
			c1 = 0;
			cout << "Prover";
			c1 = onlyNumbers();
		}
	}
	while (((c1 >= 30) || (c1 <= 0)))
	{
		cout << " -_- " << endl;
		cout << "Enter a number from the list " << endl;
		c1 = onlyNumbers();
		while (((c1 <= 0) && (c1 >= 0)))
		{
			if (((c1 <= 0) && (c1 >= 0)))
			{
				c1 = 0;
				cout << "Prover";
				c1 = onlyNumbers();
			}
		}
	}
	cout << "Data Day 2: ";
	c2 = onlyNumbers();
	while (((c2 <= 0) && (c2 >= 0)))
	{
		if (((c2 <= 0) && (c2 >= 0)))
		{
			c2 = 0;
			cout << "Prover";
			c2 = onlyNumbers();
		}
	}
	while (((c2 >= 30) || (c2 <= 0)))
	{
		cout << " -_- " << endl;
		cout << "Enter a number from the list " << endl;
		c2 = onlyNumbers();
		while (((c2 <= 0) && (c2 >= 0)))
		{
			if (((c2 <= 0) && (c2 >= 0)))
			{
				c2 = 0;
				cout << "Prover";
				c2 = onlyNumbers();
			}
		}
	}
	cout << "------------------------------";
	cout << endl;
	int a[3], b[3], c[3];
	int cheking = 0,k;
	int* finding_date = new int[count_1[0]];
	string* finding_names = new string[count_1[0]];
	for (int i = 0; i < count_1[0]; i++)
	{
		finding_names[i] = "@";
	}
	if (a2 >= a1)
	{
     a[1] = a1; a[2] = a2;
	}
	else
	{
	a[1] = a2; a[2] = a1;
	}
	if (a[1] == a1)
	{
		b[1] = b1; b[2] = b2; c[1] = c1; c[2] = c2;
	}
	else
	{
		if (a[2] == a1)
		{
			b[2] = b1; b[1] = b2; c[2] = c1; c[1] = c2;
		}
		else
		{
			if ((a[1] == a1) and (a[1] == a2))
			{
				if (b2 >= b1)
				{
					b[1] = b1; b[2] = b2;
				}
				else
				{
					b[1] = b2; b[2] = b1;
				}
				if (b[1] == b1)
				{
					c[1] = c1; c[2] = c2;
				}
				else
				{
					if (b[2] == b1)
					{
						c[2] = c1; c[1] = c2;
					}
					else
					{
						if ((b[1] == b1) and (b[1] == b2))
						{
							if (c2 >= c1)
							{
								c[1] = c1; c[2] = c2;
							}
							else
							{
								c[1] = c2; c[2] = c1;
							}
						}
					}
				}
			}
		}
	}
	int A = a[1] * 364 + b[1] * 12 + c[1];
	int B = a[2] * 364 + b[2] * 12 + c[2];
	int C;
	for (int i = 0; i < count_1[0]; i++)
	{
		C = salon[i].info.year * 360 + salon[i].info.month * 12 + salon[i].info.day;
		if ((C >= A) and (C <= B))
		{
			cout << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
			cout << salon[i].surname_name<<"    "<< salon[i].info.year<<"."<< salon[i].info.month<< "." << salon[i].info.day;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			cout << endl;
			cheking++;
		}
	}
	if (cheking == 0)
	{
		cout << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
		cout << "Not founded";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout << endl;
	}
}
int main()
{
	setlocale(LC_ALL, "ru");
	int count = 100000;
	int count_1[2];
	count_1[0] = 0;
	count_1[1] = 0;
	plane* salon = new plane[count];
	int n = 256;
	int number;
	int flag = 1;
	string path = "myFile.txt";
	empty_file(path, salon, count, count_1);
	system("pause");
	system("cls");

	while (flag != 0)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << "-----------------------MENU------------------" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);

		cout << "    --   --      |-------  |    |  |       |                  ________/        " << endl;
		cout << "   /  \\ /  \\     |         |\\   |  |       |                _/      //\\_ PLANE" << endl;
		cout << "  /    |    \\    |_______  | \\  |  |       |               /      _//   \\   " << endl;
		cout << " /           \\   |         |  \\ |  |       |           ___|______/ /     |   " << endl;
		cout << "/             \\  |_______  |   \\|  |_______|           \\==|=====/ /|     |  " << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout << "Enter 1 to add a passenger                          "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5); cout << "      |    / /||     |     " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout << "Enter 2 to view passenger information               "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5); cout << "       \\_ / / ||   _/     " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout << "Enter 3 to find a flights and passengers by company "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5); cout << "      ___/_/__||__/       " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout << "Enter 4 to find a  passengers by dates              "; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5); cout << "      \\___/   \\|          " << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		cout << "Enter 5 to exit";
		cout << "Input:     ";
		number = onlyNumbers();
		switch (number)
		{
		case 1:
			system("cls");
			add(path, salon, count, count_1);
			break;
		case 2:
			system("cls");
			pechati(path, salon, count_1);
			break;
		case 3:
			system("cls");
			naity(path, salon, count_1);
			break;
		case 4:
			system("cls");
			naity_date(path, salon, count_1);
			break;
		case 5:
			flag = 0;
			break;
		default:
			cout << " -_- " << endl;
			cout << "Enter a number from the list " << endl;
			break;
		}
		system("pause");
		system("cls");
	}

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	return 0;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); 

}
