/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libnetwork.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/OS_nw_resolver_service.h>

@protocol OS_nw_endpoint, OS_dnssd_getaddrinfo;
@class NSObject, NSString;

@interface NWConcrete_nw_resolver_service : NSObject <OS_nw_resolver_service> {

	NSObject*<OS_nw_endpoint> service_host;
	NSObject*<OS_nw_endpoint> alternative_origin;
	NSObject*<OS_dnssd_getaddrinfo> gai;
	unsigned short priority;
	unsigned short port;
	unsigned short flags;
	unsigned sensitive_redacted : 1;
	unsigned host_matches_origin : 1;
	unsigned port_matches_origin : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
@end
