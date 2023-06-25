#pragma once
class Data;

enum MessageTypes { ESCAPE_PRESSED,
					OBJECT_CREATED,
					STOP_MAIN_LOOP,
					WINDOW_CREATED,
					WINDOW_USER_POINTER_SET, 
					};

class Message
{
public:
	int type;
	Data* data;
};