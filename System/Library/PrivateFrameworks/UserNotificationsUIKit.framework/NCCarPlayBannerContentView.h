/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/BSUIDateLabelDelegate.h>

@protocol BSUIDateLabel, NCCarPlayBannerContentViewDelegate;
@class NSArray, UILabel, CPUIBannerViewButton, NCNotificationRequest, NSString;

@interface NCCarPlayBannerContentView : UIView <BSUIDateLabelDelegate> {

	BOOL _displayPropertiesValid;
	NSArray* _iconImageViews;
	UILabel* _titleLabel;
	double _titleAscender;
	UILabel* _subTitleLabel;
	double _subTitleAscender;
	CPUIBannerViewButton* _okButton;
	CPUIBannerViewButton* _actionButton;
	UILabel*<BSUIDateLabel> _relevanceDateLabel;
	NCNotificationRequest* _notificationRequest;
	id<NCCarPlayBannerContentViewDelegate> _delegate;

}

@property (nonatomic,readonly) NCNotificationRequest * notificationRequest;                       //@synthesize notificationRequest=_notificationRequest - In the implementation block
@property (assign,nonatomic,__weak) id<NCCarPlayBannerContentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_subtitleFont;
-(id<NCCarPlayBannerContentViewDelegate>)delegate;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setDelegate:(id<NCCarPlayBannerContentViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(BOOL)_hasSubtitle;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_titleFont;
-(id)_subTitle;
-(BOOL)canBecomeFirstResponder;
-(void)dateLabelDidChange:(id)arg1 ;
-(id)_title;
-(void)dealloc;
-(NCNotificationRequest *)notificationRequest;
-(id)initWithNotificationRequest:(id)arg1 ;
-(void)_updateButtonStates;
-(void)_setRelevanceDate:(id)arg1 allDay:(BOOL)arg2 timeZone:(id)arg3 ;
-(void)invalidateDisplayProperties;
-(void)_reloadDisplayPropertiesIfNecessary;
-(BOOL)_shouldShowOKButton;
-(void)_layoutForButton:(id)arg1 contentFrame:(CGRect)arg2 ;
-(UIEdgeInsets)_iconImageInsets;
-(id)_defaultRelevanceDateFont;
-(id)_boundedTraitCollectionForLabelFont;
-(void)updateRequestToInstance:(id)arg1 ;
@end

