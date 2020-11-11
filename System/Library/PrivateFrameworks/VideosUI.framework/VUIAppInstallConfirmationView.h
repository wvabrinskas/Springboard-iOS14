/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUIAppInstallLockup, UILabel, VUIBuyButtonLockup, NSLayoutConstraint, NSString, UIButton;

@interface VUIAppInstallConfirmationView : UIView {

	BOOL _didLayout;
	VUIAppInstallLockup* _lockupView;
	UILabel* _imageSubtitleView;
	VUIBuyButtonLockup* _buyLockup;
	UILabel* _titleView;
	UILabel* _messageView;
	NSLayoutConstraint* _buttonHeightConstraint;
	NSString* _title;
	NSString* _message;
	UIButton* _actionButton;
	UIButton* _cancelButton;
	UIButton* _appStoreButton;
	UIButton* _secondaryLinkButton;

}

@property (nonatomic,retain) VUIAppInstallLockup * lockupView;              //@synthesize lockupView=_lockupView - In the implementation block
@property (nonatomic,copy) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                              //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) UIButton * actionButton;                       //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                       //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIButton * appStoreButton;                     //@synthesize appStoreButton=_appStoreButton - In the implementation block
@property (nonatomic,retain) UIButton * secondaryLinkButton;                //@synthesize secondaryLinkButton=_secondaryLinkButton - In the implementation block
+(CGSize)iconSize;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIButton *)actionButton;
-(void)setActionButton:(UIButton *)arg1 ;
-(NSString *)message;
-(void)layoutSubviews;
-(void)setAppName:(id)arg1 ;
-(void)setIAP:(id)arg1 ;
-(NSString *)title;
-(void)setAppIcon:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setAppStoreButton:(UIButton *)arg1 ;
-(UIButton *)appStoreButton;
-(id)_buttonWithTitleForTV:(id)arg1 textStyle:(id)arg2 ;
-(void)setAgeRating:(id)arg1 ;
-(void)_layoutForTvos;
-(void)_layoutForIos;
-(void)setAppSubtitle:(id)arg1 ;
-(VUIAppInstallLockup *)lockupView;
-(void)setLockupView:(VUIAppInstallLockup *)arg1 ;
-(UIButton *)secondaryLinkButton;
-(void)setSecondaryLinkButton:(UIButton *)arg1 ;
@end
