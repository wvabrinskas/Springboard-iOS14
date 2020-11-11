/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@protocol WDCheckmarkTableViewCellDelegate;
@class UILabel, UIButton;

@interface WDCheckmarkTableViewCell : UITableViewCell {

	UILabel* _displayLabel;
	UIButton* _button;
	id<WDCheckmarkTableViewCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WDCheckmarkTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isOn,nonatomic) BOOL on; 
+(id)reuseIdentifier;
-(BOOL)isOn;
-(id<WDCheckmarkTableViewCellDelegate>)delegate;
-(void)setOn:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)clickToggle:(id)arg1 ;
-(void)setDelegate:(id<WDCheckmarkTableViewCellDelegate>)arg1 ;
-(void)_setupUI;
-(void)setDisplayText:(id)arg1 ;
@end
