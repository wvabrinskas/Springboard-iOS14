/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class VideosExtrasBackgroundViewController, NSMapTable;

@interface VideosExtrasElementViewController : UIViewController {

	VideosExtrasBackgroundViewController* _backgroundViewController;
	NSMapTable* _bannerButtonMap;
	BOOL _wide;

}

@property (assign,getter=isWide,nonatomic) BOOL wide;              //@synthesize wide=_wide - In the implementation block
+(id)_borderView;
-(id)backgroundViewController;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)isWide;
-(void)setWide:(BOOL)arg1 ;
-(void)dealloc;
-(void)_prepareLayout;
-(void)_startBackgroundAudio;
-(void)configureBackgroundWithElements:(id)arg1 ;
-(unsigned long long)extrasSize;
-(void)_configureBannerWithElement:(id)arg1 ;
-(void)_didActivateButtonWithItem:(id)arg1 ;
-(id)_installBackdrop:(id)arg1 ;
@end

