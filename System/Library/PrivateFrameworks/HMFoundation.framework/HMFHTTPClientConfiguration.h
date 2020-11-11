/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HMFHTTPClientConfiguration : HMFObject <NSCopying> {

	BOOL _requiresEncryption;
	BOOL _allowsAnonymousConnection;
	BOOL _allowsCellularAccess;
	BOOL _supportsWakeOnLAN;
	BOOL _monitorsReachability;

}

@property (assign) BOOL requiresEncryption;                     //@synthesize requiresEncryption=_requiresEncryption - In the implementation block
@property (assign) BOOL allowsAnonymousConnection;              //@synthesize allowsAnonymousConnection=_allowsAnonymousConnection - In the implementation block
@property (assign) BOOL allowsCellularAccess;                   //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (assign) BOOL supportsWakeOnLAN;                      //@synthesize supportsWakeOnLAN=_supportsWakeOnLAN - In the implementation block
@property (assign) BOOL monitorsReachability;                   //@synthesize monitorsReachability=_monitorsReachability - In the implementation block
+(id)defaultConfiguration;
-(id)init;
-(BOOL)requiresEncryption;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(BOOL)allowsCellularAccess;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRequiresEncryption:(BOOL)arg1 ;
-(void)setAllowsAnonymousConnection:(BOOL)arg1 ;
-(void)setSupportsWakeOnLAN:(BOOL)arg1 ;
-(void)setMonitorsReachability:(BOOL)arg1 ;
-(BOOL)allowsAnonymousConnection;
-(BOOL)supportsWakeOnLAN;
-(BOOL)monitorsReachability;
@end
