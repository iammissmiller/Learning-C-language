int main()
{
	FILE* fp = fopen("test.txt", "r");

	if (fp == NULL) {
		/* Handle open error */
	}

	/* Do some processing with file*/

	/* no way to check if rewind is successful */
	rewind(fp);

	/* Do some more precessing with file */

	return 0;
}
