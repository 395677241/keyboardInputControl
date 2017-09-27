#include <stdio.h>
#include <pthread.h>

int g_keyValue;
static void * keyboardInputControl()
{
	while(1)
		scanf("%d", &g_keyValue); //scanf will block current thread, so we must use it in another thread.
	return NULL;
}

int main()
{
	pthread_t pth_id;
	pthread_create(&pth_id, NULL, keyboardInputControl, NULL);

	while(1) {
		//...
		if (g_keyValue == 1) {
			printf("Current keyboard setting is %d.\n", g_keyValue);
			//do sth special.
		}
		else if (g_keyValue == 2) {
			printf("Current keyboard setting is %d.\n", g_keyValue);
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
