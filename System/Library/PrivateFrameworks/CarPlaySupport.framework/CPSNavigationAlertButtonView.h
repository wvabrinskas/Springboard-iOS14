/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class CPSNavigationAlertFocusButton;

@interface CPSNavigationAlertButtonView : UIView {

	CPSNavigationAlertFocusButton* _primaryButton;
	CPSNavigationAlertFocusButton* _secondaryButton;

}

@property (nonatomic,retain) CPSNavigationAlertFocusButton * primaryButton;                //@synthesize primaryButton=_primaryButton - In the implementation block
@property (nonatomic,retain) CPSNavigationAlertFocusButton * secondaryButton;              //@synthesize secondaryButton=_secondaryButton - In the implementation block
-(CPSNavigationAlertFocusButton *)primaryButton;
-(CPSNavigationAlertFocusButton *)secondaryButton;
-(void)setPrimaryButton:(CPSNavigationAlertFocusButton *)arg1 ;
-(void)setSecondaryButton:(CPSNavigationAlertFocusButton *)arg1 ;
-(id)initWithPrimaryAction:(id)arg1 secondaryAction:(id)arg2 progressView:(id)arg3 ;
@end

