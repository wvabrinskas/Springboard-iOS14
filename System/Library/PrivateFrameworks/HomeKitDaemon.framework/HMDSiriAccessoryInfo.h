/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface HMDSiriAccessoryInfo : NSObject {

	BOOL _supportsDragonSiri;
	id _targetsAccessory;

}

@property (assign,nonatomic,__weak) id targetsAccessory;              //@synthesize targetsAccessory=_targetsAccessory - In the implementation block
@property (assign,nonatomic) BOOL supportsDragonSiri;                 //@synthesize supportsDragonSiri=_supportsDragonSiri - In the implementation block
+(id)infoWithTargetableAccessory:(id)arg1 ;
-(void)setTargetsAccessory:(id)arg1 ;
-(id)targetsAccessory;
-(BOOL)supportsDragonSiri;
-(BOOL)isActiveAndSupportsDragonSiri;
-(void)setSupportsDragonSiri:(BOOL)arg1 ;
@end
