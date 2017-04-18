


#ifndef ARPCACHE_H_
#define ARPCACHE_H_

#define MAX_BUFSIZE 8192

int InitSocketArp(void);
int GetKerArpCache(const int nSockNum);
int MonitorArpCache(const int nSockNum);
int ParseArpData(char *cBuf, int nRecvBytes);
char *mac_ntoa(const unsigned char *mac);

#endif
