/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SleepDaemon/SleepDaemon-Structs.h>
#import <libobjc.A.dylib/HKSPDictionarySerializable.h>

@protocol HKSPSyncAnchor;
@class NSString;

@interface HDSPSleepMessage : NSObject <HKSPDictionarySerializable> {

	id<HKSPSyncAnchor> _syncAnchor;

}

@property (nonatomic,copy,readonly) id<HKSPSyncAnchor> syncAnchor;              //@synthesize syncAnchor=_syncAnchor - In the implementation block
@property (nonatomic,readonly) unsigned long long messageType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)messageType;
-(void)encodeWithCoder:(id)arg1 ;
-(id<HKSPSyncAnchor>)syncAnchor;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSyncAnchor:(id)arg1 ;
@end
