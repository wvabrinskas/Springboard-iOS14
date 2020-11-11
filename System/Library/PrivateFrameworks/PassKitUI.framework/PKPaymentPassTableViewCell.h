/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKTableViewCell.h>

@class UILabel, UIView, PKPaymentPass, PKPeerPaymentAccount, UIColor;

@interface PKPaymentPassTableViewCell : PKTableViewCell {

	UILabel* _mainLabel;
	UILabel* _subTextLabel;
	UIView* _cardSnapshotView;
	PKPaymentPass* _pass;
	PKPeerPaymentAccount* _peerPaymentAccount;
	UIColor* _mainLabelColor;
	UIColor* _subTextLabelColor;
	UIColor* _disabledMainLabelColor;
	UIColor* _disabledSubTextLabelColor;

}

@property (nonatomic,retain) PKPaymentPass * pass;                                   //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) PKPeerPaymentAccount * peerPaymentAccount;              //@synthesize peerPaymentAccount=_peerPaymentAccount - In the implementation block
@property (nonatomic,retain) UIColor * mainLabelColor;                               //@synthesize mainLabelColor=_mainLabelColor - In the implementation block
@property (nonatomic,retain) UIColor * subTextLabelColor;                            //@synthesize subTextLabelColor=_subTextLabelColor - In the implementation block
@property (nonatomic,retain) UIColor * disabledMainLabelColor;                       //@synthesize disabledMainLabelColor=_disabledMainLabelColor - In the implementation block
@property (nonatomic,retain) UIColor * disabledSubTextLabelColor;                    //@synthesize disabledSubTextLabelColor=_disabledSubTextLabelColor - In the implementation block
+(double)heightForCellWithMinimum:(double)arg1 hasSubTitle:(BOOL)arg2 ;
+(id)subTitleFont;
+(id)titleFont;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_updateLabelTextColors;
-(PKPeerPaymentAccount *)peerPaymentAccount;
-(void)setEnabled:(BOOL)arg1 ;
-(void)pk_applyAppearance:(id)arg1 ;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(void)layoutSubviews;
-(void)_updateLabelText;
-(void)setMainLabelColor:(UIColor *)arg1 ;
-(void)setSubTextLabelColor:(UIColor *)arg1 ;
-(void)setDisabledMainLabelColor:(UIColor *)arg1 ;
-(void)setDisabledSubTextLabelColor:(UIColor *)arg1 ;
-(void)setPeerPaymentAccount:(PKPeerPaymentAccount *)arg1 ;
-(UIColor *)mainLabelColor;
-(UIColor *)subTextLabelColor;
-(UIColor *)disabledMainLabelColor;
-(UIColor *)disabledSubTextLabelColor;
-(PKPaymentPass *)pass;
@end
