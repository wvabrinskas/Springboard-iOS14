/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UILabel;

@interface CKAppManagerAppTableViewHeaderView : UITableViewHeaderFooterView {

	UILabel* _headerLabel;

}

@property (nonatomic,retain) UILabel * headerLabel;              //@synthesize headerLabel=_headerLabel - In the implementation block
+(id)identifier;
-(void)layoutMarginsDidChange;
-(UILabel *)headerLabel;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

