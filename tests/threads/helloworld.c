#include <stdio.h>
#include "tests/threads/tests.h"
#include "threads/init.h"
#include "threads/malloc.h"
#include "threads/synch.h"
#include "threads/thread.h"
#include "devices/timer.h"
#include <string.h>
#include "threads/interrupt.h"

static thread_func Name_thread;
static thread_func Name_thread_1;


void test_helloworld (void) {
	int i;
	msg ("Creating a threads");
	int array[5] = {19,21,13,15,17};
	const char *strings[] ={"A","B","C","D","E"};
//	for(i =0;i<5;i++){
		thread_create("A", 19, Name_thread, NULL);
		thread_create("B", 21, Name_thread_1, NULL);
		thread_create("C", 13, Name_thread, NULL);
		thread_create("D", 15, Name_thread, NULL);
		thread_create("E", 17, Name_thread, NULL);

//	}
}

static void Name_thread (void *aux UNUSED) {
	int p ;
	int sum;
	msg("Thread name  = %s is starting and priority is %d ",thread_name() , thread_get_priority());

	for(p = -5000000 ; p < 5000000; p++){
		sum+=0;
		//timer_sleep(300);

	}
	msg("Thread name  = %s is ending and priority is %d ",thread_name() , thread_get_priority());
}

static void Name_thread_1 (void *aux UNUSED) {
	int p ;
	int sum;
	msg("Thread name  = %s is starting and priority is %d ",thread_name() , thread_get_priority());

	for(p = -500000000 ; p < 500000000; p++){
		sum+=0;
		//timer_sleep(300);

	}
	msg("Thread name  = %s is ending and priority is %d ",thread_name() , thread_get_priority());
}

