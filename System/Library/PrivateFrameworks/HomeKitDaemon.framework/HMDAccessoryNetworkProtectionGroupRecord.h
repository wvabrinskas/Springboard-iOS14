/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HMDAccessoryNetworkProtectionGroup;

@interface HMDAccessoryNetworkProtectionGroupRecord : NSObject {

	BOOL _active;
	BOOL _persisted;
	HMDAccessoryNetworkProtectionGroup* _group;

}

@property (assign,getter=isActive,nonatomic) BOOL active;                     //@synthesize active=_active - In the implementation block
@property (assign,getter=isPersisted,nonatomic) BOOL persisted;               //@synthesize persisted=_persisted - In the implementation block
@property (readonly) HMDAccessoryNetworkProtectionGroup * group;              //@synthesize group=_group - In the implementation block
+(id)recordWithGroup:(id)arg1 active:(BOOL)arg2 persisted:(BOOL)arg3 ;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)isPersisted;
-(BOOL)isActive;
-(HMDAccessoryNetworkProtectionGroup *)group;
-(void)setPersisted:(BOOL)arg1 ;
-(id)initWithGroup:(id)arg1 active:(BOOL)arg2 persisted:(BOOL)arg3 ;
@end

