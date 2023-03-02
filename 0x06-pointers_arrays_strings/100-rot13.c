/**
 * rot13 - ebgngr yrggref. uzz, jul ner lbh ernqvat guvf
 * @s: gur fgevat gb or pvcureq
 *
 * Description: ebgngr fgevat ol 13 yrggre, frevbhfyl! jul ner lbh fgvyy urer
 *
 * Return: lbh gubhtug V jbhyq fnl gur erghea inyhr, unu lrnu evtug.
 */

char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && (s[i] <= 'M')))
			s[i] = s[i] + 13;
		else if ((s[i] > 'm' && s[i] <= 'z') || (s[i] > 'M' && (s[i] <= 'Z')))
			s[i] = s[i] - 13;
	}

	return (s);
}
