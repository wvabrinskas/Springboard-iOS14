/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SIMSetupSupport/SIMSetupSupport-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIActivityIndicatorView;

@interface TSCellularSetupLoadingView : UIView {

	BOOL _isRemotePlan;
	UILabel* _firstLabel;
	UILabel* _secondLabel;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) UILabel * firstLabel;                           //@synthesize firstLabel=_firstLabel - In the implementation block
@property (nonatomic,retain) UILabel * secondLabel;                          //@synthesize secondLabel=_secondLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic) BOOL isRemotePlan;                              //@synthesize isRemotePlan=_isRemotePlan - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSecondLabel:(UILabel *)arg1 ;
-(UILabel *)secondLabel;
-(void)layoutSubviews;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)_setupLabels;
-(void)_setupActivityIndicator;
-(void)setFirstLabel:(UILabel *)arg1 ;
-(UILabel *)firstLabel;
-(void)setIsRemotePlan:(BOOL)arg1 ;
-(BOOL)isRemotePlan;
-(void)spinnerStopAnimating;
-(void)spinnerStartAnimating;
@end
