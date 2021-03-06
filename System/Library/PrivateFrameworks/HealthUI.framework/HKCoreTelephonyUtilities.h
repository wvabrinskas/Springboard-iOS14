/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <HealthUI/HealthUI-Structs.h>
@class NSObject;

@interface HKCoreTelephonyUtilities : NSObject {

	CTServerConnectionRef _ctServerConnection;
	NSObject*<OS_dispatch_queue> _ctServerQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> ctServerQueue;              //@synthesize ctServerQueue=_ctServerQueue - In the implementation block
-(id)init;
-(CTServerConnectionRef)ctServerConnection;
-(void)dealloc;
-(BOOL)isEmergencyServicePhoneNumber:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)ctServerQueue;
-(void)setCtServerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

