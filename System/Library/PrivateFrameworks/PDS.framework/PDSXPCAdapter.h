/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PDS.framework/PDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PDS/PDSXPCInterfaceVendor.h>
#import <PDS/PDSXPCConnectionVendor.h>

@class NSString;

@interface PDSXPCAdapter : NSObject <PDSXPCInterfaceVendor, PDSXPCConnectionVendor>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_sharedInstance;
+(id)defaultInterfaceVendor;
+(id)defaultConnectionVendor;
+(BOOL)disableXPC;
+(void)setDisableXPC:(BOOL)arg1 ;
-(id)interfaceWithProtocol:(id)arg1 ;
-(id)_init;
-(id)connectionForMachService:(id)arg1 ;
@end
