# Netlink      
Netlink Socket    
Netlink是一种特殊的socket，用于用户和内核之间进行通信（man 7 netlink）。       
通过netlink我们可以获取内核协议栈维护的路由表，arp缓存表，硬件信息等等。
本文主要是通过套接字来获取linux内核arp信息及其实时变化以及获取linux路由表项
