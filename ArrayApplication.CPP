/* Application and Operation of Array */

#include <iostream.h>
#include <conio.h>
#include <iomanip.h>
#include <graphics.h>
#include <string.h>
#include <stdlib.h>

int n;
int b[100];
int s2, sb;
int count[5] = {0};
class Array
{
	int *arr;
	int *B, *C;

public:
	void getdata();
	void getdataB();
	void putdata();
	void insertUnsorted();
	void insertSorted();
	void deleteFirst();
	void deleteAll();
	void linearSearch();
	void binarySearch();
	void selectionSort();
	void bubbleSort();
	void insertionSort();
	void mergSort(int, int);
	void merg(int, int, int);
	void swap(int *, int *);
	int partition(int *, int, int);
	void quickSort(int, int);
	void merging();
	void putdataMerg();
	//	void heapSort(int arr[], int n);
	//	void heapify(int arr[], int n, int i);
};

class Election
{
public:
	Election()
	{
		clrscr();
		cout << "=================\n";
		cout << " E L E C T I O N\n";
		cout << "=================\n";
		cout << "Press 1 to Vote of Candidate 1 \n";
		cout << "Press 2 to Vote of Candidate 2 \n";
		cout << "Press 3 to Vote of Candidate 3 \n";
		cout << "Press 4 to Vote of Candidate 4 \n";
		cout << "Press 5 to Vote of Candidate 5 \n";
	}
	void getVote();
	void ElectionResult();
};
class String
{
public:
	void palindrome();
	void digit();
	void alpha();
	void bigAlpha();
	void smallAlpha();
	void consonant();
	void vowel();
	void space();
};

class Grade
{
public:
	void grading();
};

void Array ::getdata()
{
	//	clrscr();
	setfillstyle(1, 16);
	rectangle(0, 0, 1200, 800);
	bar(0, 0, 1200, 800);
	outtextxy(212, 53, "Enter Element :");
	gotoxy(48, 5);
	cin >> arr[n++];
}
void Array ::getdataB()
{
	clrscr();
	setfillstyle(1, 16);
	rectangle(0, 0, 1200, 800);
	bar(0, 0, 1200, 800);
	outtextxy(180,54,"Enter Element : ");
	gotoxy(44,5);
	cin >> B[s2++];
}
void Array ::putdata()
{
	int i, m = 4;
	clrscr();
	if (n == 0)
	{
		//	setlinestyle(0, 1, 3);
		setfillstyle(1, 16);
		rectangle(0, 0, 1200, 800);
		bar(0, 0, 1200, 800);
		outtextxy(250, 10, "Array is Empty ");
	}
	else
	{
		setfillstyle(1, 16);
		rectangle(0, 0, 1200, 800);
		bar(0, 0, 1200, 800);

		/*		int n=13;
			char st[10],tst[100];
			itoa(n,st,10);
			strcpy(tst,"Age of Mohit is :");
			strcat(tst,st);
			outtextxy(100,100,tst);
		*/

		outtextxy(250, 10, "Given Array is :");
		for (i = 0; i < n; i++)
		{
			/*	char st[10],tst[100];
							 itoa(i + 1,st,10);
							 strcpy(tst," Element = ");
							 strcat(tst,st);
			   outtextxy(250,n,tst);
			   n=10+n;*/
			gotoxy(30, m);
			cout << setw(2) << i + 1 << " Element = " << setw(5) << arr[i] << endl;
			m += 2;
		}
	}
}
void Array ::insertSorted()
{
	int i, item;
	//	settextstyle(2,0,1);
	setfillstyle(1, 16);
	rectangle(0, 0, 1200, 800);
	bar(0, 0, 1200, 800);
	outtextxy(212, 54, "Enter New Element : ");
	gotoxy(54, 5);
	cin >> item;
	for (i = n; arr[i - 1] > item; i--)
		arr[i] = arr[i - 1];
	arr[i] = item;
	n++;
}
void Array ::insertUnsorted()
{
	int i, item, loc;
	setfillstyle(1, 16);
	rectangle(0, 0, 1200, 800);
	bar(0, 0, 1200, 800);
	outtextxy(212, 54, "Enter new Element : ");
	gotoxy(54, 5);
	cin >> item;
	outtextxy(212, 102, "Enter Location : ");
	gotoxy(49, 8);
	cin >> loc;
	for (i = n; i >= loc; i--)
		arr[i + 1] = arr[i];
	arr[i + 1] = arr[i];
	arr[i] = item;
	n++;
}
void Array ::deleteFirst()
{
	int i, j, item;
	if (n == 0)
	{
		setfillstyle(1, 14);
		rectangle(0, 0, 1200, 800);
		bar(0, 0, 1200, 800);
		outtextxy(250, 10, "Array is Empty ");
	}
	else
	{
		setfillstyle(1, 16);
		rectangle(0, 0, 1200, 800);
		bar(0, 0, 1200, 800);
		outtextxy(60, 54, "Enter Element those you want to delete : ");
		gotoxy(62, 5);
		cin >> item;
		for (i = 0; i < n; i++)
		{
			if (arr[i] == item)
			{
				for (j = i; j < n - 1; j++)
					arr[j] = arr[j + 1];
				n--;
				break;
			}
		}
	}
}
void Array ::deleteAll()
{
	int i, j, item;
	clrscr();
	if (n == 0)
	{
		setfillstyle(1, 14);
		rectangle(0, 0, 1200, 800);
		bar(0, 0, 1200, 800);
		outtextxy(250, 10, "Array is Empty ");
	}
	else
	{
		setfillstyle(1, 16);
		rectangle(0, 0, 1200, 800);
		bar(0, 0, 1200, 800);
		outtextxy(70, 54, "Enter Element those you want to delete : ");
		gotoxy(64, 5);
		cin >> item;
		for (i = 0; i < n; i++)
		{
			if (arr[i] == item)
			{
				for (j = i; j < n - 1; j++)
					arr[j] = arr[j + 1];
				n--;
				i--;
			}
		}
	}
}
void Array ::linearSearch()
{
	int i, item;
	setfillstyle(1, 16);
	rectangle(0, 0, 1200, 800);
	bar(0, 0, 1200, 800);
	outtextxy(60, 54, "Enter Element Which you want to search : ");
	gotoxy(64, 5);
	cin >> item;
	for (i = 0; i < n; i++)
	{
		if (arr[i] == item)
			break;
	}
	if (i == n)
	{
		setfillstyle(1, 16);
		rectangle(0, 0, 1200, 800);
		bar(0, 0, 1200, 800);
		outtextxy(170, 55, "Item Not in list");
	}
	else
	{
		setfillstyle(1, 16);
		rectangle(0, 0, 1200, 800);
		bar(0, 0, 1200, 800);
		gotoxy(23,7);
		cout << "Item " << item << " Lise on " << i + 1 << " Location";
	}
}
void Array ::binarySearch()
{
	int i, item, sp, ep, mid, p = -1;
	setfillstyle(1, 16);
	rectangle(0, 0, 1200, 800);
	bar(0, 0, 1200, 800);
	outtextxy(60, 54, "Enter Element Which you want to search : ");
	gotoxy(64, 5);
	cin >> item;
	sp = 0;
	ep = n - 1;
	while (1)
	{
		mid = (sp + ep) / 2;
		if (arr[mid] == item)
			p = mid + 1;
		else if (item > arr[mid])
			sp = mid + 1;
		else
			ep = mid - 1;
		if (p != -1 || sp > ep)
			break;
	}
	if (p == -1)
	{
		setfillstyle(1, 16);
		rectangle(0, 0, 1200, 800);
		bar(0, 0, 1200, 800);
		outtextxy(170, 55, "Item Not in list");
	}
	else
	{
		setfillstyle(1, 16);
		rectangle(0, 0, 1200, 800);
		bar(0, 0, 1200, 800);
		outtextxy(170, 55, "Item is Present on Array");
	}
}
void Array ::selectionSort()
{
	int i, j, x;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				x = arr[i];
				arr[i] = arr[j];
				arr[j] = x;
			}
		}
	}
}
void Array ::bubbleSort()
{
	int i, j, x;
	for (i = n - 1; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				x = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = x;
			}
		}
	}
}
void Array ::insertionSort()
{
	int i, j, temp;
	for (i = 1; i < n; i++)
	{
		temp = arr[i];
		for (j = i - 1; j >= 0; j--)
		{
			if (arr[j] > temp)
				arr[j + 1] = arr[j];
			else
				break;
		}
		arr[j + 1] = temp;
	}
}
void Array ::merg(int sp, int mid, int ep)
{
	int i = sp, j = mid + 1, k = sp;
	int s1 = mid, s2 = ep;
	while (i <= s1 && j <= s2)
	{
		if (arr[i] < arr[j])
			b[k] = arr[i++];
		else
			b[k] = arr[j++];
		k++;
	}
	while (i <= s1)
		b[k++] = arr[i++];
	while (j <= s2)
		b[k++] = arr[j++];
	for (i = sp; i <= ep; i++)
		arr[i] = b[i];
}
void Array ::mergSort(int sp, int ep)
{
	//	int sp=0, ep=n-1;
	if (sp < ep)
	{
		int mid = (sp + ep) / 2;
		mergSort(sp, mid);
		mergSort(mid + 1, ep);
		merg(sp, mid, ep);
	}
	else
		return;
}
void Array ::swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
int Array ::partition(int *arr, int left, int right)
{
	int key = arr[right];
	int i = left - 1;
	for (int j = left; j <= right; j++)
	{
		if (arr[j] < key)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[right]);
	return i + 1;
}
void Array ::quickSort(int left, int right)
{
	int key;
	if (left < right)
	{
		key = partition(arr, left, right);
		quickSort(left, key - 1);
		quickSort(key + 1, right);
	}
}
void Array ::merging()
{
	int i, j, k;
	i = j = k = 0;
	while (i != n && j != s2)
	{
		if (arr[i] < B[j])
			C[k++] = arr[i++];
		else
			C[k++] = B[j++];
	}
	while (i != n)
		C[k++] = arr[i++];
	while (j != s2)
		C[k++] = B[j++];
}
void Array ::putdataMerg()
{
	int i, m = 5;
	setfillstyle(1, 16);
	rectangle(0, 0, 1200, 800);
	bar(0, 0, 1200, 800);

	outtextxy(180, 20, "The Merge Array is : ");
	for (i = 0; i < n + s2; i++)
	{
		gotoxy(28, m);
		cout << i + 1 << " Element = " << C[i];
		m += 2;
	}
}

/*void Array :: heapify(int arr[], int n, int i)
{
	int largest = i;   // Initialize largest as root Since we are using 0 based indexing
	int l = 2 * i + 1; // left = 2*i + 1
	int r = 2 * i + 2; // right = 2*i + 2

	// If left child is larger than root
	if (l < n && arr[l] > arr[largest])
		largest = l;

	// If right child is larger than largest so far
	if (r < n && arr[r] > arr[largest])
		largest = r;

	// If largest is not root
	if (largest != i)
	{
		swap(arr[i], arr[largest]);

		// Recursively heapify the affected sub-tree
		heapify(arr, n, largest);
	}
}

// main function to do heap sort
void Array :: heapSort(int arr[], int n)
{
	// Build heap (rearrange array)
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);

	// One by one extract an element from heap
	for (int i = n - 1; i >= 0; i--)
	{
		// Move current root to end
		swap(arr[0], arr[i]);

		// call max heapify on the reduced heap
		heapify(arr, i, 0);
	}
}
*/

void Election ::getVote()
{
	int vote;
	setfillstyle(1, 16);
	rectangle(0, 0, 1200, 800);
	bar(0, 0, 1200, 800);
	outtextxy(148, 22, "Please Enter Your Vote : ");
	gotoxy(51, 3);
	cin >> vote;
	if (vote >= 1 && vote <= 5)
		count[vote - 1]++;
	else
		sb++;
}
void Election ::ElectionResult()
{
	int k = 5;
	clrscr();
	setfillstyle(1, 14);
	rectangle(0, 0, 1200, 800);
	bar(0, 0, 1200, 800);
	outtextxy(220, 20, "Election Results ");
	for (int i = 0; i < 5; i++)
	{
		gotoxy(28, k);
		cout << "Candidate " << i + 1 << " Got " << count[i] << " Votes " << endl;
		k = k + 2;
	}
	gotoxy(28, k);
	cout << "Spoilt Ballots : " << sb << endl;
	getch();
}
void String ::palindrome()
{
	clrscr();
	int flag = 0;
	char str[100], rst[100];
	int length;
	setfillstyle(1,16);
	rectangle(0,0,1200,800);
	bar(0,0,1200,800);
	outtextxy(180,55,"Enter your String : ");
	gotoxy(49,5);
	cin>>str;
 //	cin.getline(str,100);

/*	strcpy(rst, str);
	strrev(rst);
	if (strcmpi(str, rst) == 0) */

			length = strlen(str);
		//	int s = 0, e = length - 1;

			for (int i = 0; i < length; i++)
			{
				if (str[i] != str[length - i - 1])
				{
					flag = 1;
					break;
				}
			}
	if (flag)
		outtextxy(180,90,"The String is Not Palindrome");
	else
		outtextxy(180,90,"The String is Palindrome");

	getch();
}
void String ::digit()
{
	clrscr();
	char str1[100];
	int length, i, num = 0;
	setfillstyle(1,16);
	rectangle(0,0,1200,800);
	bar(0,0,1200,800);
	outtextxy(180,55,"Enter your String : ");
	gotoxy(49,5);
	cin >> str1;
	length = strlen(str1);
	for (i = 0; i <= length; i++)
	{
		if (str1[i] >= '0' && str1[i] <= '9')
		{
			num++;
		}
	}
	gotoxy(24,8);
	cout << "Number of Digits in String = " << num;
	getch();
}
void String ::alpha()
{
	clrscr();
	char str2[100];
	int length, i, al = 0;
	setfillstyle(1,16);
	rectangle(0,0,1200,800);
	bar(0,0,1200,800);
	outtextxy(180,55,"Enter your String : ");
	gotoxy(49,5);
	cin >> str2;
	length = strlen(str2);
	for (i = 0; i <= length; i++)
	{
		if (str2[i] >= 'a' && str2[i] <= 'z' || str2[i] >= 'A' && str2[i] <= 'Z')
		{
			al++;
		}
	}
	gotoxy(24,8);
	cout << "Total number Alphabet in String = " << al;
	getch();
}

void String ::bigAlpha()
{
	clrscr();
	char str3[100];
	int length, i, bal = 0;
	setfillstyle(1,16);
	rectangle(0,0,1200,800);
	bar(0,0,1200,800);
	outtextxy(180,55,"Enter your String : ");
	gotoxy(49,5);
	cin >> str3;
	length = strlen(str3);
	for (i = 0; i <= length; i++)
	{
		if (str3[i] >= 'A' && str3[i] <= 'Z')
		{
			bal++;
		}
	}
	gotoxy(24,8);
	cout << "Total Number of Big Alphabet = " << bal;
	getch();
}

void String :: smallAlpha()
{
	clrscr();
	char str4[100];
	int length,i,sal=0;
	setfillstyle(1,16);
	rectangle(0,0,1200,800);
	bar(0,0,1200,800);
	outtextxy(180,55,"Enter your String : ");
	gotoxy(49,5);
	cin>>str4;
	length = strlen(str4);
	for(i=0;i<=length;i++)
	{
		if(str4[i]>='a' && str4[i]<='z')
		{
		   sal++;
		}
	}
	gotoxy(24,8);
	cout<<"Total Number of Small Alphabet = "<<sal;
	getch();
}

void String :: vowel()
{
	clrscr();
	char str5[100];
	int length,i,val=0;
	setfillstyle(1,16);
	rectangle(0,0,1200,800);
	bar(0,0,1200,800);
	outtextxy(180,55,"Enter your String : ");
	gotoxy(49,5);
	cin>>str5;
	length = strlen(str5);
	for(i=0;i<length;i++)
	{
		if(strchr("AEIOUaeiou",str5[i]))
//		if(str5[i]=='a' || str5[i]=='e' || str5[i]=='i' str5[i]=='o' || str5[i]=='u' || str5[i]=='A' || str5[i]=='E' || str5[i]== 'I' || str5[i]=='O' str5[i]=='U')
		{
			val++;
		}
	}
	gotoxy(24,8);
	cout<<"Total Number of Vawels in String  = "<<val;
	getch();
}
/*
void String :: space()
{
	char str6[100];
	int length,i,wsal=0;
	clrscr();
	cout<<"Enter your String : ";
	cin.getline(str6,100);
	length = strlen(str6);
	for(i=0;i<=length;i++)
	{
		if(str6[i]==' ')
		{
			wsal++;
		}
	}
	cout<<"Space = "<<wsal;
	getch();
}
*/
void Grade ::grading()
{
	int per, i, ns, n = 0,p1=8;
	static int gradecount[6];
	clrscr();
	setfillstyle(1,16);
	rectangle(0,0,1200,800);
	bar(0,0,1200,800);
	outtextxy(178,54,"Enter Number of Students :");
	gotoxy(59,5);
	cin >> ns;
	for (i = 1; i <= ns; i++)
	{   gotoxy(23,p1);
		cout << "Enter Percentage of " << i << " Student :";
		gotoxy(55,p1);
		cin >> per;
		if (per == 100)
			per--;
		gradecount[per / 20]++;
		p1+=1;
	}
	/*	cout<<"No. of Students contains below 40 Percentage = "<<gradecount[0]+gradecount[1]<<endl;
		cout<<"No. of Students contains 40 to 59 Percentage = "<<gradecount[2]<<endl;
		cout<<"No. of Students contains 60 to 74 Percentage = "<<gradecount[3]<<endl;
		cout<<"No. of Students contains 80 to 100 Percentage = "<<gradecount[4]+gradecount[5];
	*/
	p1=p1+1;
	for (i = 0; i < 5; i++)
	{   gotoxy(23,p1);
		cout << "No. of Students contains " << n << " to " << n + 20 << " Percentage = " << gradecount[i] << endl;
		n += 20;
		p1 = p1 + 1;
	}
	getch();
}
void main()
{
	clrscr();
	Array obj;
	int ch;
	Election ele;
	String strn;
	Grade gra;

	for (;;)
	{
		int gd = DETECT, gm;
		initgraph(&gd, &gm, "c:\\turboc3\\bgi");
		setlinestyle(0, 1, 3);
		setfillstyle(1, 14);
		rectangle(0, 0, 1200, 800);
		bar(0, 0, 1200, 800);
		settextstyle(10, 0, 2);
		setcolor(16);
		outtextxy(20, 16, "---------------------------");
		outtextxy(275, 36, "M E N U");
		outtextxy(20, 56, "---------------------------");
		settextstyle(8, 0, 1);
		setcolor(4);
		outtextxy(100, 96, "1. Add Element");

		outtextxy(100, 136, "2. Traverse the Array");

		outtextxy(100, 176, "3. Inserting in Array");

		outtextxy(100, 216, "4. Deletion in Array");

		outtextxy(100, 256, "5. Searching in Array");

		outtextxy(100, 296, "6. Sorting in Array");

		outtextxy(100, 336, "7. Mereging in Array");

		outtextxy(100, 376, "8. Example");

		outtextxy(100, 416, "9. Exit");
		setfillstyle(1, 16);
		rectangle(370, 200, 600, 230);
		bar(370, 200, 600, 230);
		outtextxy(380, 198, "Enter Your Choice : ");
		gotoxy(74, 14);
		cin >> ch;
		if (ch == 9)
			break;
		switch (ch)
		{
		case 1:
			obj.getdata();
			break;
		case 2:
			obj.putdata();
			break;
		case 3:
			clrscr();
			int ic;

			for (;;)
			{
				setfillstyle(1, 14);
				rectangle(0, 0, 1200, 800);
				bar(0, 0, 1200, 800);
				settextstyle(10, 0, 2);
				setcolor(16);
				outtextxy(20, 16, "----------------------------");
				outtextxy(275, 36, "M  E  N  U");
				outtextxy(20, 56, "----------------------------");
				settextstyle(8, 0, 1);
				setcolor(4);
				outtextxy(100, 96, "1. Sorted Array");
				outtextxy(100, 136, "2. Unsorterd Array");
				outtextxy(100, 176, "3. Back");
				setfillstyle(1, 16);
				rectangle(370, 200, 600, 230);
				bar(370, 200, 600, 230);
				outtextxy(380, 198, "Enter Your Choice : ");
				gotoxy(74, 14);
				cin >> ic;
				if (ic == 3)
					break;
				switch (ic)
				{
				case 1:
					obj.insertSorted();
					break;
				case 2:
					obj.insertUnsorted();
					break;
				}
			}
			break;

		case 4:
			clrscr();
			int dc;

			for (;;)
			{
				setfillstyle(1, 14);
				rectangle(0, 0, 1200, 800);
				bar(0, 0, 1200, 800);
				settextstyle(10, 0, 2);
				setcolor(16);
				outtextxy(20, 16, "----------------------------");
				outtextxy(275, 36, "M  E  N  U");
				outtextxy(20, 56, "----------------------------");
				settextstyle(8, 0, 1);
				setcolor(4);
				outtextxy(100, 96, "1. First Occurance");
				outtextxy(100, 136, "2. All Occurances");
				outtextxy(100, 176, "3. Back");
				setfillstyle(1, 16);
				rectangle(370, 200, 600, 230);
				bar(370, 200, 600, 230);
				outtextxy(380, 198, "Enter Your Choice : ");
				gotoxy(74, 14);
				cin >> dc;
				if (dc == 3)
					break;
				switch (dc)
				{
				case 1:
					obj.deleteFirst();
					break;
				case 2:
					obj.deleteAll();
					break;
				}
			}
			break;

		case 5:
			clrscr();
			int sc;

			for (;;)
			{
				setfillstyle(1, 14);
				rectangle(0, 0, 1200, 800);
				bar(0, 0, 1200, 800);
				settextstyle(10, 0, 2);
				setcolor(16);
				outtextxy(20, 16, "----------------------------");
				outtextxy(275, 36, "M  E  N  U");
				outtextxy(20, 56, "----------------------------");
				settextstyle(8, 0, 1);
				setcolor(4);
				outtextxy(100, 96, "1. Linear Search");
				outtextxy(100, 136, "2. Binary Search");
				outtextxy(100, 176, "3. Back");
				setfillstyle(1, 16);
				rectangle(370, 200, 600, 230);
				bar(370, 200, 600, 230);
				outtextxy(380, 198, "Enter Your Choice : ");
				gotoxy(74, 14);
				cin >> sc;
				if (sc == 3)
					break;
				switch (sc)
				{
				case 1:
					obj.linearSearch();
					break;
				case 2:
					obj.binarySearch();
					break;
				}
				getch();
			}
			break;

		case 6:
			clrscr();
			int sr;

			for (;;)
			{
				setfillstyle(1, 14);
				rectangle(0, 0, 1200, 800);
				bar(0, 0, 1200, 800);
				settextstyle(10, 0, 2);
				setcolor(16);
				outtextxy(20, 16, "----------------------------");
				outtextxy(275, 36, "M  E  N  U");
				outtextxy(20, 56, "----------------------------");
				settextstyle(8, 0, 1);
				setcolor(4);
				outtextxy(100, 96, "1. Bubble Sort");
				outtextxy(100, 136, "2. Selection Sort");
				outtextxy(100, 176, "3. Insertion Sort");
				outtextxy(100, 216, "4. Quick Sort");
				outtextxy(100, 256, "5. Merge Sort");
				//				outtextxy(100,296,"6. Heap Sort");
				outtextxy(100, 296, "6. Back");
				setfillstyle(1, 16);
				rectangle(370, 200, 600, 230);
				bar(370, 200, 600, 230);
				outtextxy(380, 198, "Enter Your Choice : ");
				gotoxy(74, 14);
				cin >> sr;
				if (sr == 6)
					break;
				switch (sr)
				{
				case 1:
					obj.bubbleSort();
					break;
				case 2:
					obj.selectionSort();
					break;
				case 3:
					obj.insertionSort();
					break;
				case 4:
					obj.quickSort(0, n - 1);
					break;
				case 5:
					obj.mergSort(0, n - 1);
					break;
					//					case 6:
					//					obj.heapSort();
					//					break;
				}
			}
			break;

		case 7:
			clrscr();
			int mm;

			for (;;)
			{
				setfillstyle(1, 14);
				rectangle(0, 0, 1200, 800);
				bar(0, 0, 1200, 800);
				settextstyle(10, 0, 2);
				setcolor(16);
				outtextxy(20, 16, "----------------------------");
				outtextxy(275, 36, "M  E  N  U");
				outtextxy(20, 56, "----------------------------");
				settextstyle(8, 0, 1);
				setcolor(4);
				outtextxy(100, 96, "1. Enter Element For Second Array");
				outtextxy(100, 136, "2. Perform Merging");
				outtextxy(100, 176, "3. Display Merge Array");
				outtextxy(100, 216, "4. Back");
				setfillstyle(1, 16);
				rectangle(370, 200, 600, 230);
				bar(370, 200, 600, 230);
				outtextxy(380, 198, "Enter Your Choice : ");
				gotoxy(74, 14);
				cin >> mm;
				if (mm == 4)
					break;
				switch (mm)
				{
				case 1:
					obj.getdataB();
					break;
				case 2:
					obj.merging();
					break;
				case 3:
					obj.putdataMerg();
					break;
				}
				getch();
			}
			break;
		case 8:
			clrscr();
			int ex;
			char choice;

			for (;;)
			{
				setfillstyle(1, 14);
				rectangle(0, 0, 1200, 800);
				bar(0, 0, 1200, 800);
				settextstyle(10, 0, 2);
				setcolor(16);
				outtextxy(20, 16, "----------------------------");
				outtextxy(275, 36, "M  E  N  U");
				outtextxy(20, 56, "----------------------------");
				settextstyle(8, 0, 1);
				setcolor(4);
				outtextxy(100, 96, "1. Election Voting");
				outtextxy(100, 136, "2. String Operation");
				outtextxy(100, 176, "3. Student Grade Count");
				outtextxy(100, 216, "4. Back");
				setfillstyle(1, 16);
				rectangle(370, 200, 600, 230);
				bar(370, 200, 600, 230);
				outtextxy(380, 198, "Enter Your Choice : ");
				gotoxy(74, 14);
				cin >> ex;
				if (ex == 4)
					break;
				switch (ex)
				{
				case 1:
					do
					{
						ele.getVote();
						outtextxy(148, 70, "Previous voter Left ? (y/n) : ");
						gotoxy(58, 6);
						cin >> choice;
					} while (choice == 'y');
					ele.ElectionResult();
					getch();
					break;
				case 2:
					int sp;
					for (;;)
					{
						setlinestyle(0, 1, 3);
						setfillstyle(1, 14);
						rectangle(0, 0, 1200, 800);
						bar(0, 0, 1200, 800);
						settextstyle(10, 0, 2);
						setcolor(16);
						outtextxy(20, 16, "---------------------------");
						outtextxy(275, 36, "M E N U");
						outtextxy(20, 56, "---------------------------");
						settextstyle(8, 0, 1);
						setcolor(4);
						outtextxy(50, 96, "1. Check Palindrome");
						outtextxy(50, 121, "2. How many Digits are there in String");
						outtextxy(50, 146, "3. How many Alphabets are there in String");
						outtextxy(50, 171, "4. How many Capital Letters are there in String");
						outtextxy(50, 196, "5. How many Small Letters are there in String");
						outtextxy(50, 221, "6. How many Valwels are there in String");
				//		outtextxy(50, 216, "7. How many Space are there in String");
						outtextxy(50, 246, "7. Back");
						setfillstyle(1, 16);
						rectangle(370, 374, 600, 404);
						bar(370, 374, 600, 404);
						outtextxy(380, 374, "Enter Your Choice : ");
						gotoxy(74, 25);
						cin >> sp;
						if (sp == 7)
							break;
						switch (sp)
						{
						case 1:
							strn.palindrome();
							break;
						case 2:
							strn.digit();
							break;
						case 3:
							strn.alpha();
							break;
						case 4:
							strn.bigAlpha();
							break;
						case 5:
							strn.smallAlpha();
							break;
						case 6:
							strn.vowel();
							break;
					 /*	case 7:
							strn.space();
							break; */
						}
						getch();
					}
					break;
				case 3:
					gra.grading();
					break;
				}
			}
		}
		getch();
	}
}
