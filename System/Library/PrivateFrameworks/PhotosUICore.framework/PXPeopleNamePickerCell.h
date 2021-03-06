/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class UILabel, NSArray;

@interface PXPeopleNamePickerCell : UITableViewCell {

	UILabel* _titleLabel;
	NSArray* _baseConstraints;

}

@property (nonatomic,retain) NSArray * baseConstraints;                  //@synthesize baseConstraints=_baseConstraints - In the implementation block
@property (nonatomic,__weak,readonly) UILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
-(UILabel *)titleLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(NSArray *)baseConstraints;
-(void)setBaseConstraints:(NSArray *)arg1 ;
@end

