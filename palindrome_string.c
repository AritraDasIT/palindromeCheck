#include<stdio.h>
int length(char str[10])
{
	int i=0;
	
	while(str[i]!='\0')
	{
		i++;
	}
	return i ;
}

int main()
{
	char arr[10];
	int i=0;
	int len;
	len=length(arr);
	int flag=0;
	
	printf("Enter the string: ");
	scanf("%s",arr);
	
	for(i=0;i<len;i++)
	{
		if(arr[i]!=arr[len-i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("%s is not a palindrome ",arr);
	}
	else
	{
		printf("%s is a palindrome",arr);
	}
}
