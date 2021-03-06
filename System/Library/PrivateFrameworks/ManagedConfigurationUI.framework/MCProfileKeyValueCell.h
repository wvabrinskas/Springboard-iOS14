/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UILabel, NSArray;

@interface MCProfileKeyValueCell : UITableViewCell {

	UILabel* _keyLabel;
	UILabel* _valueLabel;
	NSArray* _constraints;

}

@property (nonatomic,retain) UILabel * keyLabel;                 //@synthesize keyLabel=_keyLabel - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;               //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) NSArray * constraints;              //@synthesize constraints=_constraints - In the implementation block
-(void)_setupConstraints;
-(void)_setup;
-(NSArray *)constraints;
-(UILabel *)valueLabel;
-(UILabel *)keyLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setValueLabel:(UILabel *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)setKeyLabel:(UILabel *)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)setKeyValue:(id)arg1 ;
@end

