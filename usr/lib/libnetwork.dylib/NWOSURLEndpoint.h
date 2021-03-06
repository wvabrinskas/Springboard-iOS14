/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libnetwork.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libnetwork.dylib/NWConcrete_nw_endpoint.h>

@interface NWOSURLEndpoint : NWConcrete_nw_endpoint {

	CFURLRef url_ref;
	unsigned short port;
	char* url;
	char* scheme;
	char* hostname;
	char* path;
	char* sanitized_url;
	char url_hash[9];

}
-(unsigned short)port;
-(BOOL)isEqualToEndpoint:(id)arg1 matchInterface:(BOOL)arg2 matchParent:(BOOL)arg3 ;
-(unsigned long long)getHash;
-(id)copyDictionary;
-(const char*)hostname;
-(id)copyEndpoint;
-(unsigned)type;
-(char*)createDescription:(BOOL)arg1 ;
-(void)dealloc;
-(const char*)domainForPolicy;
@end

