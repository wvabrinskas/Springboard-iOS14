/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libnetwork.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libnetwork.dylib/NWConcrete_nw_endpoint.h>

@interface NWOSAddressEndpoint : NWConcrete_nw_endpoint {

	sockaddr_storage address;
	ether_addr ethernet_address;
	char* hostname;
	int original_fd;
	unsigned short priority;
	unsigned calculated_hostname : 1;

}
-(unsigned short)port;
-(BOOL)isEqualToEndpoint:(id)arg1 matchInterface:(BOOL)arg2 matchParent:(BOOL)arg3 ;
-(unsigned long long)getHash;
-(id)copyDictionary;
-(const char*)hostname;
-(id)copyEndpoint;
-(unsigned)type;
-(unsigned short)priority;
-(char*)createDescription:(BOOL)arg1 ;
-(void)setPriority:(unsigned short)arg1 ;
-(void)dealloc;
@end
