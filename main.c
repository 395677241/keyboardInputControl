#include <stdio.h>

int g_keyValue;
void * keyboardInputControl()
{
	scanf(&g_keyValue,"%d"); //scanf will block current thread, so we must use it in another thread.
}

int main()
{

	pthread_create(keyboardInputControl);
	while(1) {
		//...
		if (g_keyValue == 1) {
			//do sth special.
		}
		else if (g_keyValue == 2) {
			//do sth special.
		}
		else
		{
			//do sth.
		}	
		//...
	}	
	return 0;
}
