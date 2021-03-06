/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FBSOrientationObserver, NSMutableArray;

@interface CRKInterfaceOrientationMonitor : NSObject {

	FBSOrientationObserver* mObserver;
	NSMutableArray* mCompletionBlocks;
	BOOL mIsWaitingForFirstUpdate;
	unsigned long long _interfaceOrientation;

}

@property (assign,nonatomic) unsigned long long interfaceOrientation;              //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
-(id)init;
-(unsigned long long)interfaceOrientation;
-(void)setInterfaceOrientation:(unsigned long long)arg1 ;
-(void)dealloc;
-(/*^block*/id)makeUpdateHandler;
-(void)updateInterfaceOrientationWithNotification:(id)arg1 ;
-(void)updateInterfaceOrientationWithBSOrientation:(long long)arg1 ;
-(unsigned long long)DMFInterfaceOrientationFromBSInterfaceOrientation:(long long)arg1 ;
-(void)updateInterfaceOrientationWithDMFOrientation:(unsigned long long)arg1 ;
-(void)interfaceOrientationWithCompletion:(/*^block*/id)arg1 ;
@end

