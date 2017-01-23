char *my_strchr(const cahr *str, char ch)
{
	int j= 0;
	while((*(str + j) != ch) && ( *(str + j) != '\0'))
		j++;
	if(j == my_strlen(str))
		return 0;
	else 
		return (str + j);
}
