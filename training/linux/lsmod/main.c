#include<stdio.h>

int main()
{
	struct module *ptr;

	FILE *fp;
	fp = fopen("/proc/modules","r");

	ptr = list_for_each_entry(fp, , next)
