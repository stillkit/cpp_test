
px4_add_module(
	MODULE modules__pthread_test
	SRCS
		pthread_test_main.c
		pthread_run1.c
		pthread_run2.c
		pthread_mutex_test.c
		pthread_join_test.c
	)
