/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKEntitlementStoreServer.h>

@class NSString;

@interface HDEntitlementStoreServer : HDStandardTaskServer <HKEntitlementStoreServer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)remoteInterface;
-(id)exportedInterface;
-(void)remote_fetchContainerAppExtensionEntitlementsWithCompletion:(/*^block*/id)arg1 ;
@end
