/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SBUIActiveOrientationObserver.h>

@protocol SSActiveInterfaceOrientationObserverDelegate;
@class NSString;

@interface SSActiveInterfaceOrientationObserver : NSObject <SBUIActiveOrientationObserver> {

	id<SSActiveInterfaceOrientationObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SSActiveInterfaceOrientationObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopObserving;
-(void)beginObserving;
-(id<SSActiveInterfaceOrientationObserverDelegate>)delegate;
-(id)_sbUIUserAgent;
-(void)_observeActiveInterfaceOrientationChangeToOrientation:(long long)arg1 withDuration:(double)arg2 ;
-(void)_unregisterForActiveInterfaceOrientationChanges;
-(void)setDelegate:(id<SSActiveInterfaceOrientationObserverDelegate>)arg1 ;
-(void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1 ;
-(void)_registerForActiveInterfaceOrientationChanges;
-(void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3 ;
@end
