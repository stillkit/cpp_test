include(common/px4_base)

#user cmake 
set(config_module_list	
		modules/upload
		modules/queue_unittest
		modules/calibrate
		modules/orbsim
		modules/add_variable
		modules/airspeed
		modules/file_size
		modules/string_test
		modules/fprintf
		modules/nuttx_i2c
		modules/cct_demo
		modules/rtcm
		modules/pthread_test
		modules/sbus
		modules/mavlink
		modules/getopt
		

		cpp/cast
		cpp/const_type
		cpp/construct
		cpp/helloworld
		cpp/parent_to_child
		cpp/px4_char_dev
		cpp/refence
		cpp/static_member
		cpp/template
		cpp/template_class
		cpp/this_private
		cpp/vector
	)
