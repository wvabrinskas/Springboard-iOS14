/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CarPlayUI/_CPUIBaseTableCell.h>

@class UIImageView, UILabel, NSArray;

@interface CPUIMessageCell : _CPUIBaseTableCell {

	UIImageView* _unreadImageView;
	UIImageView* _leadingGlyphView;
	UIImageView* _primaryImageView;
	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UILabel* _trailingLabel;
	UIImageView* _trailingImageView;
	UIImageView* _trailingGlyphView;
	NSArray* _constraints;

}

@property (nonatomic,retain) UIImageView * unreadImageView;                //@synthesize unreadImageView=_unreadImageView - In the implementation block
@property (nonatomic,retain) UIImageView * leadingGlyphView;               //@synthesize leadingGlyphView=_leadingGlyphView - In the implementation block
@property (nonatomic,retain) UIImageView * primaryImageView;               //@synthesize primaryImageView=_primaryImageView - In the implementation block
@property (nonatomic,retain) UILabel * primaryLabel;                       //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,retain) UILabel * secondaryLabel;                     //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,retain) UILabel * trailingLabel;                      //@synthesize trailingLabel=_trailingLabel - In the implementation block
@property (nonatomic,retain) UIImageView * trailingImageView;              //@synthesize trailingImageView=_trailingImageView - In the implementation block
@property (nonatomic,retain) UIImageView * trailingGlyphView;              //@synthesize trailingGlyphView=_trailingGlyphView - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                        //@synthesize constraints=_constraints - In the implementation block
+(double)minimumHeight;
+(double)rowHeight;
-(NSArray *)constraints;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(UILabel *)primaryLabel;
-(void)setPrimaryLabel:(UILabel *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setUnread:(BOOL)arg1 ;
-(UIImageView *)trailingImageView;
-(void)setSecondaryLabel:(UILabel *)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(UILabel *)secondaryLabel;
-(void)setTrailingImageView:(UIImageView *)arg1 ;
-(void)applyConfiguration:(id)arg1 ;
-(void)configureCell;
-(UILabel *)trailingLabel;
-(UIImageView *)primaryImageView;
-(UIImageView *)trailingGlyphView;
-(UIImageView *)leadingGlyphView;
-(UIImageView *)unreadImageView;
-(void)setUnreadImageView:(UIImageView *)arg1 ;
-(void)setLeadingGlyphView:(UIImageView *)arg1 ;
-(void)setPrimaryImageView:(UIImageView *)arg1 ;
-(void)setTrailingLabel:(UILabel *)arg1 ;
-(void)setTrailingGlyphView:(UIImageView *)arg1 ;
@end
