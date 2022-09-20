



void rev_string(char *s)
{
	int ind = 0;
	int rind;
	char c;
	int length;

	for (length = 0; s[length] != '\0'; length++)
		continue;
	rind = length - 1;

	while(! (ind >= rind))
	{
		c = s[ind];
		s[ind] = s[rind];
		s[rind] = c;
		ind++;
		rind--;
	}
}
