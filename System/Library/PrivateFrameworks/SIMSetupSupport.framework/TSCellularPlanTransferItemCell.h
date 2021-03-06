/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class UILabel;

@interface TSCellularPlanTransferItemCell : UITableViewCell {

	UILabel* _title;
	UILabel* _planInfo;

}

@property (retain) UILabel * title;                 //@synthesize title=_title - In the implementation block
@property (retain) UILabel * planInfo;              //@synthesize planInfo=_planInfo - In the implementation block
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setIcon:(BOOL)arg1 ;
-(UILabel *)title;
-(void)setTitle:(UILabel *)arg1 ;
-(UILabel *)planInfo;
-(void)setDisable;
-(void)setPlanInfo:(UILabel *)arg1 ;
@end

