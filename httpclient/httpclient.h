#pragma once;  
#include <string>
using namespace std;
//�ú������dll��Ŀ�ڲ�ʹ��__declspec(dllexport)����  
//��dll��Ŀ�ⲿʹ��ʱ����__declspec(dllimport)����  
//��DLL_IMPLEMENT��SimpleDLL.cpp�ж���  
#ifdef DLL_IMPLEMENT  
#define DLL_API __declspec(dllexport)  
#else  
#define DLL_API __declspec(dllimport)  
#endif  
DLL_API int add(int x, int y); //�򵥷���  
DLL_API int http_client_init(); //��ʼ��
DLL_API int http_client_post( string& Urlstr,string& Pdata , string& Rdata);
DLL_API int http_client_get( string& Urlstr, string& Rdata);