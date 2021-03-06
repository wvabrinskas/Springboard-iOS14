/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ICClientInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _bundleIdentifier;
	NSString* _processName;
	NSString* _clientIdentifier;
	NSString* _clientVersion;
	NSString* _requestingBundleIdentifier;
	NSString* _requestingBundleVersion;
	NSString* _bagProfile;
	NSString* _bagProfileVersion;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                        //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * processName;                             //@synthesize processName=_processName - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientIdentifier;                        //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientVersion;                           //@synthesize clientVersion=_clientVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientBundleIdentifier; 
@property (nonatomic,copy,readonly) NSString * requestingBundleIdentifier;              //@synthesize requestingBundleIdentifier=_requestingBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestingBundleVersion;                 //@synthesize requestingBundleVersion=_requestingBundleVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * bagProfile; 
@property (nonatomic,copy,readonly) NSString * bagProfileVersion; 
+(BOOL)supportsSecureCoding;
+(id)clientInfoForMusicKitRequestWithClientIdentifier:(id)arg1 clientVersion:(id)arg2 bundleIdentifier:(id)arg3 ;
+(id)defaultInfo;
+(id)clientInfoForMusicKitRequestWithClientIdentifier:(id)arg1 clientVersion:(id)arg2 ;
+(id)_clientInfoForCloudDaemonOriginatedMusicKitRequestWithRequestingBundleIdentifier:(id)arg1 ;
-(NSString *)clientBundleIdentifier;
-(id)_clientInfoCopyWithClass:(Class)arg1 ;
-(NSString *)bagProfile;
-(NSString *)clientVersion;
-(NSString *)requestingBundleVersion;
-(unsigned long long)hash;
-(NSString *)clientIdentifier;
-(NSString *)processName;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)bagProfileVersion;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)initWithSystemApplicationType:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)requestingBundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

