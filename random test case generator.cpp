#include<bits/stdc++.h> 
using namespace std; 

//1
void randomNumber()
{
	freopen("Random_Number.txt","w", stdout); 
   	int RUN,MAX;
	//cout<<"Enter test case : ";
	cin>>RUN;
	//cout<<"Enter range of digit : ";
	cin>>MAX;
	srand(time(NULL)); 

	for (int i=1; i<=RUN; i++) 
		printf("%d\n", rand() % MAX); 

	fclose(stdout); 
}

//2
void randomArray()
{
	freopen("Random_Array.txt","w", stdout); 
	int RUN,MAX,MAXNUM;

	//Enter test case
	cin>>RUN;
	//Enter range (size of elements present inside array)
	cin>>MAX;
    //Enter maximum number of array elements (Elements present inside array)
    cin>>MAXNUM;

	srand(time(NULL)); 

	for (int i=1; i<=RUN; i++) 
	{  
		int NUM = 1 + rand() % MAXNUM; 
 
		printf("%d\n", NUM); 

		for (int j=1; j<=NUM; j++) 
			printf("%d ", rand() % MAX); 

		printf("\n"); 
	} 

	fclose(stdout); 
}

//3
void randomCharacters()
{
	freopen("Random_characters.txt","w", stdout); 
   	 
	int RUN,MAX;
	//Enter test case
	cin>>RUN;
	//Enter range of characters
	cin>>MAX;
 
	srand(time(NULL)); 

	for (int i=1; i<=RUN; i++) 
		printf("%c\n", 'a' + rand() % MAX); 

	fclose(stdout);
}

//4
void randomString()
{
	freopen("Random_string.txt","w", stdout); 
   	 
    int RUN,MAX,MAXLEN;
    //Enter test case
    cin>>RUN;
    //Enter range of characters
	cin>>MAX;
	//Enter max length of string
	cin>>MAXLEN; 

	srand(time(NULL)); 

	int LEN;  

	for (int i=1; i<=RUN; i++) 
	{ 
		LEN = 1 + rand() % MAXLEN; 

		printf("%d\n", LEN); 
 
		for (int j=1; j<=LEN; j++) 
			printf("%c", 'a' + rand() % MAX); 

		printf("\n"); 
	} 

	fclose(stdout); 
}

//5
void randomStringArray()
{
	freopen("Random_string_array.txt","w", stdout); 
   	 
    int RUN,MAX,MAXLEN,MAXNUM;
	//Enter test case
	cin>>RUN;
	//Enter range of characters
	cin>>MAX;
	//Enter max length of string
	cin>>MAXLEN; 
	//Enter range of number of strings element in the array
	cin>>MAXNUM;
	
	srand(time(NULL)); 

	int NUM; 
	int LEN; 

	for (int i=1; i<=RUN; i++) 
	{ 
		NUM = 1 + rand() % MAXNUM; 
		printf("%d\n", NUM); 

		for (int k=1; k<=NUM; k++) 
		{ 
			LEN = 1 + rand() % MAXLEN; 

			for (int j=1; j<=LEN; j++) 
				printf("%c", 'a' + rand() % MAX); 

			printf(" "); 
		} 
		printf("\n"); 
	}
	fclose(stdout);
}

//6
void randomSortedArray()
{
	freopen("Random_sorted_array.txt","w", stdout); 
   	 
    int RUN,MAX,MAXNUM;
	//Enter test case
	cin>>RUN;
	//Enter range (size of elements present inside array)
	cin>>MAX;
    //Enter maximum number of array elements (Elements present inside array)
    cin>>MAXNUM;

	freopen("Random_Sorted_Array.txt","w", stdout); 

	srand(time(NULL)); 

	int NUM;  

	for (int i=1; i<=RUN; i++) 
	{ 
		int arr[MAXNUM]; 

		NUM = 1 + rand() % MAXNUM; 

		printf("%d\n", NUM); 

		for (int j=0; j<NUM; j++) 
			arr[j] = rand() % MAX; 

		sort (arr, arr + NUM); 

		for (int j=0; j<NUM; j++) 
			printf("%d ", arr[j]); 

		printf("\n"); 
	} 
	fclose(stdout); 
}

int main() 
{ 
   int ch;

   //Enter choice
   cin>>ch;

   switch(ch)
   {
   	//Random number
   	case 1:
    randomNumber();
	break;

    //Random array
	case 2:
    randomArray();
	break;

    //Random characters
   	case 3:
   	randomCharacters();
	break;

	//Random String
   	case 4:
    randomString();
	break;

	//Random string array
   	case 5:
    randomStringArray();
	break;		

	//Random sorted array
	case 6:
    randomSortedArray();
	break;		
   }
   return 0;
}