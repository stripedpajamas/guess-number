#include <stdio.h>

int main() {
	printf("Think of a number between 1 and 100. Press enter when ready.\n");
	getchar();

	int low = 1;
	int high = 100;
	int guess;
	int guessCount = 0;
	char c;
	int done = 0;
	while (high > low) {
		guess = (high + low) / 2;
		guessCount++;
		printf("Is your number %d? (H)igh / (L)ow / (Y)es  ", guess);
		scanf(" %c", &c);
		switch (c) {
			case 'h':
				high = guess - 1;
				break;
			case 'l':
				low = guess + 1;
				break;
			case 'y':
				done = 1;
				break;
		}
		if (done) {
			break;
		}
	}
	printf("I think it's %d. (Took %d guesses)\n", (high + low) / 2, guessCount);

	return 0;
}
