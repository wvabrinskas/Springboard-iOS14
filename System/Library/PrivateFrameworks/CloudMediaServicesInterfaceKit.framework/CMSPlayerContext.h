/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudMediaServicesInterfaceKit/CloudMediaServicesInterfaceKit-Structs.h>
#import <libobjc.A.dylib/CMSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CMSPlayerContext : NSObject <CMSCoding, NSCopying> {

	float _playbackSpeed;
	NSString* _activityIdentifier;
	NSString* _queueIdentifier;
	NSString* _contentIdentifier;
	long long _offsetInMillis;

}

@property (nonatomic,copy,readonly) NSString * activityIdentifier;              //@synthesize activityIdentifier=_activityIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * queueIdentifier;                 //@synthesize queueIdentifier=_queueIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentIdentifier;               //@synthesize contentIdentifier=_contentIdentifier - In the implementation block
@property (nonatomic,readonly) float playbackSpeed;                             //@synthesize playbackSpeed=_playbackSpeed - In the implementation block
@property (nonatomic,readonly) long long offsetInMillis;                        //@synthesize offsetInMillis=_offsetInMillis - In the implementation block
@property (nonatomic,readonly) BOOL offsetIsValid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceFromCMSCoded:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)contentIdentifier;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)queueIdentifier;
-(float)playbackSpeed;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)activityIdentifier;
-(id)cmsCoded;
-(id)initForActivity:(id)arg1 queue:(id)arg2 content:(id)arg3 speed:(float)arg4 offset:(long long)arg5 ;
-(long long)offsetInMillis;
-(BOOL)offsetIsValid;
-(id)initForActivity:(id)arg1 queue:(id)arg2 content:(id)arg3 speed:(float)arg4 ;
-(id)playerContextWithUpdatedSpeed:(float)arg1 ;
-(id)playerContextWithUpdatedSpeed:(float)arg1 offset:(long long)arg2 ;
-(id)playerContextWithUpdatedOffset:(long long)arg1 ;
-(BOOL)isEqualContext:(id)arg1 ;
@end
