/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKEditableSearchResultCell.h>
#import <libobjc.A.dylib/CKSearchResultCell.h>

@class UILabel, UIDateLabel, NSString, CKSearchAvatarSupplementryView;

@interface CKAttachmentSearchResultCell : CKEditableSearchResultCell <CKSearchResultCell> {

	BOOL _suppressAvatars;
	UILabel* _titleLabel;
	UIDateLabel* _dateLabel;
	NSString* _identifier;
	CKSearchAvatarSupplementryView* _avatarView;
	UIEdgeInsets marginInsets;

}

@property (assign,nonatomic) BOOL suppressAvatars;                                                      //@synthesize suppressAvatars=_suppressAvatars - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIDateLabel * dateLabel;                                                   //@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) CKSearchAvatarSupplementryView * avatarView;                               //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,readonly) CGPoint avatarOffsetLTR; 
@property (nonatomic,readonly) CGPoint avatarOffsetRTL; 
@property (nonatomic,readonly) double editModeHorizontalOffset; 
@property (assign,nonatomic) UIEdgeInsets marginInsets; 
@property (assign,setter=_ck_setEditing:,getter=_ck_isEditing,nonatomic) BOOL _ck_editing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 mode:(unsigned long long)arg3 ;
-(void)refreshForSearchTextIfNeeded:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)marginInsets;
-(UIDateLabel *)dateLabel;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(NSString *)identifier;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(BOOL)suppressAvatars;
-(CGPoint)avatarOffsetLTR;
-(double)editModeHorizontalOffset;
-(CGPoint)avatarOffsetRTL;
-(void)setSuppressAvatars:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CKSearchAvatarSupplementryView *)avatarView;
-(void)setDateLabel:(UIDateLabel *)arg1 ;
-(void)_thumbnailGenerated:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setAvatarView:(CKSearchAvatarSupplementryView *)arg1 ;
-(void)prepareForReuse;
@end
