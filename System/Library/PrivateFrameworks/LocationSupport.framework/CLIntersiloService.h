/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CLIntersiloServiceProtocol.h>
#import <libobjc.A.dylib/CLIntersiloUniverse.h>

@class CLSilo, CLServiceVendor, NSString;

@interface CLIntersiloService : NSObject <CLIntersiloServiceProtocol, CLIntersiloUniverse> {

	CLSilo* _silo;
	CLServiceVendor* _vendor;
	BOOL _valid;

}

@property (nonatomic,readonly) id<CLIntersiloUniverse> universe; 
@property (assign,nonatomic) BOOL valid;                                      //@synthesize valid=_valid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLSilo * silo;                                 //@synthesize silo=_silo - In the implementation block
@property (nonatomic,readonly) CLServiceVendor * vendor;                      //@synthesize vendor=_vendor - In the implementation block
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
+(BOOL)isSupported;
+(void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2 ;
+(id)getSilo;
-(void)setValid:(BOOL)arg1 ;
-(BOOL)valid;
-(id)initWithInboundProtocol:(id)arg1 outboundProtocol:(id)arg2 ;
-(id)init;
-(id<CLIntersiloUniverse>)universe;
-(CLServiceVendor *)vendor;
-(NSString *)debugDescription;
-(void)setVendor:(CLServiceVendor *)arg1 ;
-(CLSilo *)silo;
-(void)setSilo:(CLSilo *)arg1 ;
@end
