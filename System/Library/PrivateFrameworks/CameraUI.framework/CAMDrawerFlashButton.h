/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraUI/CAMControlDrawerMenuButton.h>

@interface CAMDrawerFlashButton : CAMControlDrawerMenuButton {

	BOOL _flashUnavailable;
	long long _flashMode;

}

@property (assign,getter=isFlashUnavailable,nonatomic) BOOL flashUnavailable;              //@synthesize flashUnavailable=_flashUnavailable - In the implementation block
@property (assign,nonatomic) long long flashMode;                                          //@synthesize flashMode=_flashMode - In the implementation block
-(void)setFlashMode:(long long)arg1 ;
-(long long)flashMode;
-(long long)controlType;
-(id)imageNameForCurrentState;
-(BOOL)isExpandable;
-(BOOL)isFlashUnavailable;
-(BOOL)shouldUseActiveTintForCurrentState;
-(BOOL)shouldUseSlash;
-(BOOL)shouldShowSlashForCurrentState;
-(void)setFlashMode:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setFlashUnavailable:(BOOL)arg1 ;
-(void)didSelectMenuItem:(id)arg1 ;
-(BOOL)isMenuItemSelected:(id)arg1 ;
-(id)loadMenuItems;
@end

