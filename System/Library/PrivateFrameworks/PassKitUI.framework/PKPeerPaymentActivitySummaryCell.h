/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKTableViewCell.h>

@class UILabel, PKSuperscriptedCurrencyAmountLabel, UIImageView, PKActivityEventPeerPaymentTransaction, CNAvatarViewController, NSString;

@interface PKPeerPaymentActivitySummaryCell : PKTableViewCell {

	UILabel* _titleView;
	UILabel* _subtitleView;
	UILabel* _timeView;
	PKSuperscriptedCurrencyAmountLabel* _amountLabel;
	UIImageView* _unreadIndicatorView;
	PKActivityEventPeerPaymentTransaction* _event;
	CNAvatarViewController* _avatarViewController;
	NSString* _contactName;

}

@property (nonatomic,retain) PKActivityEventPeerPaymentTransaction * event;              //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) CNAvatarViewController * avatarViewController;              //@synthesize avatarViewController=_avatarViewController - In the implementation block
@property (nonatomic,retain) NSString * contactName;                                     //@synthesize contactName=_contactName - In the implementation block
+(double)height;
+(id)unreadIndicatorImage;
+(double)separatorLeadingInset;
-(NSString *)contactName;
-(PKActivityEventPeerPaymentTransaction *)event;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)layoutSubviews;
-(void)setContactName:(NSString *)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setAvatarViewController:(CNAvatarViewController *)arg1 ;
-(CNAvatarViewController *)avatarViewController;
-(void)_updateViews;
-(void)prepareForReuse;
-(void)setEvent:(PKActivityEventPeerPaymentTransaction *)arg1 ;
-(void)dealloc;
@end
