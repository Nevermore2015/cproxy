#ifndef _AOSEN_CLIENT_H_
#define _AOSEN_CLIENT_H_

/*����һ�����ؿͻ���*/
int aosen_local_client(int epollfd, int fd, aosen_worker_node* worker_node, aosen_server *aosen, aosen_core_data *core_data);
#endif
