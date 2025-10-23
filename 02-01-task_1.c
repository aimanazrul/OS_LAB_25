# include<stdio.h>
# include<dirent.h>
# include<cstdlib>
struct dirent*dptr;
int main(int argo, char*argv[])
{
	char buff[100];
	DIR * dirp;
	printf("\n\n ENTER DIRECTORY:");
	scanf("%s", buff);
	if ((dirp=opendir(buff))==NULL)
{
	printf("The given directory does not exist:);
	exit(1);
}
while(dptr=readdir(dirp))
{
	printf("%s\n",dptr->d name);
}
close(dirp);
}
