/* you have the words: property, probability, program,
process, progress, problem, propagation, performance, perfect,
perfume,
Make an autocomplete program, where you ask the user to
enter the first letter of his word, then the program tries to
predict the word, if it is wrong ask to enter the next character,
then again try to predict, until it is right then the program
displays the percentage of the input letters out of the whole
word. */


//global variable to use them in both functions
char success = 'n'; //if success = n then continue, if success = y then exit loop
int predicted_word_length;
#include<stdio.h>
void predict(char word[]);
float get_percentage(int input_characters, int word_characters);
void main()
{
	char word[20];
	int index=0; //used to store input characters, and to know the length of input characters
	float percentage;
	while(success == 'n')
	{
		printf("Enter a letter: ");
		scanf(" %c", &word[index]);
		predict(word);
		if(success == 'n')//check if the function didnot return error, if so, we end the program
		{
			printf("\nWas that the correct word? (type y for yes, n for no): ");
			scanf(" %c", &success);
		}
		index++;//if prediction was wrong, we continue to enter new character in same string
		//if prediction was right, then increment to get correct number of input characters (because string array starts at 0)
	}
	percentage = get_percentage(index,predicted_word_length);
	printf("\nPercentage of the input letters out of the whole word: %.2f %c", percentage, '%');
}

float get_percentage(int input_characters, int word_characters)
{
	float percentage = (float) input_characters / (float) word_characters;
	percentage *= 100;
	return percentage;
}

void predict(char word[])
{
	if( (word[0]!='\0') && (word[0] == 'p') )
	{
		if( word[1] == '\0' )
		{
			printf("Suggested word is: property");
			predicted_word_length = 8;
		}
		else if ( word[1] == 'r' )
		{
			if ( word[2] == '\0' )
			{
				printf("Suggested word is: property");
				predicted_word_length = 8;
			}
			else
			{
				if( word[2] == 'o' )
				{
					if( word[3] == '\0' )
					{
						printf("Suggested word is: property");
						predicted_word_length = 8;
					}
					else
					{
						if( word[3] == 'c' )
						{
							printf("Suggested word is: process");
							predicted_word_length = 7;
						}
						else if( word[3] == 'p' )
						{
							if( word[4] == '\0')
							{
								printf("Suggested word is: property");
								predicted_word_length = 8;
							}
							else if( word[4] == 'e' )
							{
								printf("Suggested word is: property");
								predicted_word_length = 8;
							}
							else if( word[4] == 'a' )
							{
								printf("Suggested word is: propagation");
								predicted_word_length = 11;
							}
						}
						else if( word[3] == 'b' )
						{
							if( word[4] == '\0')
							{
								printf("Suggested word is: probability");
								predicted_word_length = 11;
							}
							else if( word[4] == 'a' )
							{
								printf("Suggested word is: probability");
								predicted_word_length = 11;
							}
							else if( word[4] == 'l' )
							{
								printf("Suggested word is: problem");
								predicted_word_length = 7;
							}
						}
						else if( word[3] == 'g' )
						{
							if( word[4] == '\0')
							{
								printf("Suggested word is: program");
								predicted_word_length = 7;
							}
							else if( word[4] == 'r' )
							{
								if( word[5] == '\0')
								{
								printf("Suggested word is: program");
								predicted_word_length = 7;
								}
								else if( word[5] == 'a' )
								{
									printf("Suggested word is: program");
									predicted_word_length = 7;
								}
								else if( word[5] == 'e' )
								{
									printf("Suggested word is: progress");
									predicted_word_length = 8;
								}
							}
						}
					}
				}
			}
		}
	}
	else 
	{
		printf("Program cannot predict a word starting with %c", word[0]);
		success = 'y';
	}
}

