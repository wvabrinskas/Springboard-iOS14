/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoverSheet/CSModalViewControllerBase.h>
#import <libobjc.A.dylib/CSModalViewDelegate.h>

@protocol SBFBlockStatusProvider;
@class SBFDeviceBlockTimer, NSString;

@interface CSDeviceBlockViewController : CSModalViewControllerBase <CSModalViewDelegate> {

	id<SBFBlockStatusProvider> _blockStatusProvider;
	SBFDeviceBlockTimer* _blockTimer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)presentationPriority;
-(void)_updateText;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)aggregateBehavior:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithDeviceBlockStatusProvider:(id)arg1 ;
-(void)dealloc;
-(void)aggregateAppearance:(id)arg1 ;
-(void)handleSecondaryActionForView:(id)arg1 ;
@end

