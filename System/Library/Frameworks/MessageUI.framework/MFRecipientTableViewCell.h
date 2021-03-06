/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class MFComposeRecipient, UIColor, UILabel, NSArray;

@interface MFRecipientTableViewCell : UITableViewCell {

	MFComposeRecipient* _recipient;
	UIColor* _tintColor;
	BOOL _shouldHideDetailLabel;
	BOOL _shouldHighlightCompleteMatches;
	BOOL _shouldDimIrrelevantInformation;
	UILabel* _titleLabel;
	UILabel* _detailLabel;
	NSArray* _activeConstraints;

}

@property (nonatomic,readonly) UILabel * titleLabel;                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * detailLabel;                          //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,retain) NSArray * activeConstraints;                      //@synthesize activeConstraints=_activeConstraints - In the implementation block
@property (assign,nonatomic) BOOL shouldHighlightCompleteMatches;              //@synthesize shouldHighlightCompleteMatches=_shouldHighlightCompleteMatches - In the implementation block
@property (assign,nonatomic) BOOL shouldDimIrrelevantInformation;              //@synthesize shouldDimIrrelevantInformation=_shouldDimIrrelevantInformation - In the implementation block
+(double)height;
+(id)_defaultTintColor;
+(id)identifier;
+(double)_realDetailButtonAccessoryMargin;
+(double)_deviceSpecificLayoutMargin;
+(double)_constrainedWidthForTitleViewWithAccessoryWidth:(double)arg1 containerWidth:(double)arg2 ;
+(double)_constrainedWidthForDetailViewWithAccessoryWidth:(double)arg1 containerWidth:(double)arg2 ;
+(id)defaultTitleStringAttributes;
+(id)highlightedTitleStringAttributes;
+(id)regularTitleStringAttributes;
+(id)groupDetailStringAttributes;
+(id)defaultDetailStringAttributes;
+(id)highlightedDetailStringAttributes;
+(id)_attributedStringRepresentationOfCompleteMatchesForRecipient:(id)arg1 constrainedToWidth:(double)arg2 overflowRecipients:(out id*)arg3 useHighlighting:(BOOL)arg4 ;
+(id)_tintedAttributedString:(id)arg1 toColor:(id)arg2 shouldDim:(BOOL)arg3 ;
+(id)_copyAttributedStringRepresentationOfGroupRecipient:(id)arg1 withSortedRecipientList:(id)arg2 ;
+(id)labelDetailStringAttributes;
+(double)heightWithRecipient:(id)arg1 width:(double)arg2 ;
+(id)cellForRecipient:(id)arg1 ;
+(id)_attributedStringRepresentationOfPartialEmailMatchForSingleRecipient:(id)arg1 useHighlighting:(BOOL)arg2 ;
+(double)detailLineHeight;
-(UILabel *)titleLabel;
-(void)setOpaque:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)shouldDimIrrelevantInformation;
-(BOOL)shouldHighlightCompleteMatches;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setShouldHighlightCompleteMatches:(BOOL)arg1 ;
-(void)setRecipient:(id)arg1 ;
-(UILabel *)detailLabel;
-(id)recipient;
-(void)updateActiveConstraints;
-(void)setShouldDimIrrelevantInformation:(BOOL)arg1 ;
-(void)setTintColor:(id)arg1 animated:(BOOL)arg2 ;
-(void)animateSnapshotOfLabel:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)tintColor;
-(NSArray *)activeConstraints;
-(void)setActiveConstraints:(NSArray *)arg1 ;
@end

