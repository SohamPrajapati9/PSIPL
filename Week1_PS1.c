#include <stdio.h>

/*char cvt(char ans[], char inp[], int start, int end){
	int first = 0;
	int last = 0;
	for(int i = start;i<end;i++){
		if((inp[i]=='+' || inp[i]=='-' || inp[i]=='*' || inp[i]=='/') && (inp[i-1]=='+' || inp[i-1]=='-' || inp[i-1]=='*' || inp[i-1]=='/')){
			+ans[end-1]=inp[-1];
			begin = i;
			i++;
			while(inp[i]!='+' || inp[i]!='-' || inp[i]!='*' || inp[i]!='/'){
				i++;
			}
			last = i;
			
		}
	}
}*/

int main(){
	char inp[100];
	printf("Write in Prefix form :\n");
	fgets(inp,100,stdin);
	int size=0;
	while(inp[size]!='\n' && inp[size]!=' '){
		size++;
	}
	int operators = size-1;
	int operands = 0;
	char ans[100];
	for(int i = 0;i<size;i++){
		if(inp[i]>='a' && inp[i]<='z'){
			ans[operands]=inp[i];
			operands++;
		}
		if(inp[i]=='+' || inp[i]=='-' || inp[i]=='*' || inp[i]=='/'){
			ans[operators]=inp[i];
			operators--;
		}
	}
	printf("Suffix form is:\n");
	for(int i = 0;i<size;i++){
		printf("%c",ans[i]);
	}
	printf("\n");
	return 0;
}
