/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptCell.h>
#import <libobjc.A.dylib/CKTranscriptCollectionViewCellProtocol.h>

@class UILabel, NSAttributedString, NSString;

@interface CKTranscriptLabelCell : CKTranscriptCell <CKTranscriptCollectionViewCellProtocol> {

	BOOL _wantsContactImageLayout;
	BOOL _wantsOffsetForReplyLine;
	UILabel* _label;

}

@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (assign,nonatomic) BOOL wantsContactImageLayout;                   //@synthesize wantsContactImageLayout=_wantsContactImageLayout - In the implementation block
@property (assign,nonatomic) BOOL wantsOffsetForReplyLine;                   //@synthesize wantsOffsetForReplyLine=_wantsOffsetForReplyLine - In the implementation block
@property (nonatomic,retain) UILabel * label;                                //@synthesize label=_label - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)label;
+(id)reuseIdentifier;
-(UILabel *)label;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)clearFilters;
-(void)setWantsContactImageLayout:(BOOL)arg1 ;
-(void)setWantsOffsetForReplyLine:(BOOL)arg1 ;
-(void)configureForChatItem:(id)arg1 context:(id)arg2 ;
-(void)layoutSubviewsForAlignmentContents;
-(BOOL)wantsContactImageLayout;
-(void)addFilter:(id)arg1 ;
-(BOOL)wantsOffsetForReplyLine;
-(BOOL)hidesCheckmark;
-(CGRect)contentAlignmentRect;
-(void)performInsertion:(/*^block*/id)arg1 ;
-(void)layoutSubviewsForContents;
-(void)_fadeInLabelAtStartTime:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)setOrientation:(char)arg1 ;
-(id)animationWithKeyPath:(id)arg1 beginTime:(double)arg2 duration:(double)arg3 fromValue:(id)arg4 toValue:(id)arg5 ;
-(void)setLabel:(UILabel *)arg1 ;
-(void)prepareForReuse;
-(NSAttributedString *)attributedText;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
@end

