#include "DxLib.h"
#include "coutDx.hpp"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	ChangeWindowMode(TRUE);
	if (DxLib_Init() == -1) return -1;

	const char char_ = 'a';
	const unsigned char uchar_ = 'a';
	const signed char schar_ = 'a';
	const unsigned short ushort_ = 1;
	const short short_ = -1;
	const unsigned int uint_ = 1;
	const int int_ = -1;
	const unsigned long ulong_ = 1;
	const long long_ = -1;
	const unsigned long long ulonglong_ = 1;
	const long long longlong_ = -1;
	const float float_ = 1.0f;
	const double double_ = 1.0;
	const long double longdouble_ = 1.0;
	const char* const char_ptr_ = "Hello World!";
	const std::string string_ = "Hello World!";

	coutDx << char_ << endlDx;
	coutDx << uchar_ << endlDx;
	coutDx << schar_ << endlDx;
	coutDx << ushort_ << endlDx;
	coutDx << short_ << endlDx;
	coutDx << uint_ << endlDx;
	coutDx << int_ << endlDx;
	coutDx << ulong_ << endlDx;
	coutDx << long_ << endlDx;
	coutDx << ulonglong_ << endlDx;
	coutDx << longlong_ << endlDx;
	coutDx << float_ << endlDx;
	coutDx << double_ << endlDx;
	coutDx << longdouble_ << endlDx;
	coutDx << char_ptr_ << endlDx;
	coutDx << string_ << endlDx;

	WaitKey();
	DxLib_End();
	return 0;
}