#ifndef __AOSEN_HTTP_H__
#define __AOSEN_HTTP_H__
#include <stdio.h>
#include <stdlib.h>

#include <aosen/aosen_core.h>


/*���Content_Length�ֶ�, �ɹ����س��� ʧ�ܷ���0*/
int aosen_http_get_content_length(const char *read_buf);
/*�������������Ƿ�����ϣ�������Ϸ���1��û�з���0*/
int aosen_http_check_server_send_done(const char *read_buf);
#endif
