/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@class NSUUID;

@interface HMDBackingStoreUpdateObjectReference : NSOperation {

	id _object;
	NSUUID* _uuid;

}

@property (assign,nonatomic,__weak) id object;              //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                 //@synthesize uuid=_uuid - In the implementation block
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setObject:(id)arg1 ;
-(void)main;
-(NSUUID *)uuid;
-(id)object;
-(id)initWithObject:(id)arg1 uuid:(id)arg2 ;
@end

