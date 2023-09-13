void *memchr(const void *s, int c, size_t n)
{
	unsigned char *str = (unsigned char*)s;
	unsigned char c = (unsigned char)c;

	while(i < n && s != '\0')
	{
		if (s[i] = c)
			return (str + i);
		i++;
	}
}
