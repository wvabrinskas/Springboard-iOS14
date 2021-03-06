/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton;

@interface PLCropOverlayPreviewBottomBar : UIView {

	long long _backgroundStyle;
	UIButton* _cancelButton;
	UIButton* _doneButton;
	UIButton* _playbackButton;
	UIButton* _fileResizingButton;

}

@property (assign,nonatomic) long long backgroundStyle;                    //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,readonly) UIButton * cancelButton;                    //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,readonly) UIButton * doneButton;                      //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,readonly) UIButton * playbackButton;                  //@synthesize playbackButton=_playbackButton - In the implementation block
@property (nonatomic,readonly) UIButton * fileResizingButton;              //@synthesize fileResizingButton=_fileResizingButton - In the implementation block
-(UIButton *)doneButton;
-(UIButton *)cancelButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)safeAreaInsetsDidChange;
-(void)setBackgroundStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_updateBackgroundStyle;
-(void)layoutSubviews;
-(void)setBackgroundStyle:(long long)arg1 ;
-(long long)backgroundStyle;
-(id)initWithCoder:(id)arg1 ;
-(UIButton *)playbackButton;
-(void)dealloc;
-(void)_commonPLCropOverlayEditPhotoBottomBarInitialization;
-(UIButton *)fileResizingButton;
@end

