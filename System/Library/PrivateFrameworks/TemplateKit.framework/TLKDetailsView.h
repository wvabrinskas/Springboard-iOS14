/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TemplateKit/TLKView.h>
#import <libobjc.A.dylib/TLKTextAreaViewDelegate.h>

@protocol TLKDetailsViewDelegate;
@class TLKTextAreaView, TLKRichText, TLKImage, NSArray, NSString;

@interface TLKDetailsView : TLKView <TLKTextAreaViewDelegate> {

	id<TLKDetailsViewDelegate> _delegate;

}

@property (nonatomic,retain) TLKTextAreaView * contentView; 
@property (assign,nonatomic) BOOL useCompactMode; 
@property (nonatomic,retain) TLKRichText * bannerBadge; 
@property (nonatomic,retain) TLKRichText * title; 
@property (assign,nonatomic) BOOL truncateTitleMiddle; 
@property (assign,nonatomic,__weak) id<TLKDetailsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TLKRichText * secondaryTitle; 
@property (assign,nonatomic) BOOL secondaryTitleIsDetached; 
@property (nonatomic,retain) TLKImage * secondaryTitleImage; 
@property (nonatomic,retain) NSArray * details; 
@property (nonatomic,retain) TLKRichText * footnote; 
@property (nonatomic,retain) NSString * footnoteButtonText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutMarginsDidChange;
-(id)viewForLastBaselineLayout;
-(TLKImage *)secondaryTitleImage;
-(id)viewForFirstBaselineLayout;
-(id)footnoteContainer;
-(id<TLKDetailsViewDelegate>)delegate;
-(NSArray *)details;
-(void)setSecondaryTitle:(TLKRichText *)arg1 ;
-(TLKRichText *)secondaryTitle;
-(id)footnoteLabel;
-(void)setDelegate:(id<TLKDetailsViewDelegate>)arg1 ;
-(void)setFootnote:(TLKRichText *)arg1 ;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(TLKRichText *)title;
-(TLKRichText *)footnote;
-(void)setTitle:(TLKRichText *)arg1 ;
-(void)setSecondaryTitleImage:(TLKImage *)arg1 ;
-(void)setDetails:(NSArray *)arg1 ;
-(BOOL)useCompactMode;
-(id)setupContentView;
-(void)setUseCompactMode:(BOOL)arg1 ;
-(void)footnoteButtonPressed;
-(BOOL)truncateTitleMiddle;
-(void)setTruncateTitleMiddle:(BOOL)arg1 ;
-(BOOL)secondaryTitleIsDetached;
-(void)setSecondaryTitleIsDetached:(BOOL)arg1 ;
-(NSString *)footnoteButtonText;
-(void)setFootnoteButtonText:(NSString *)arg1 ;
-(id)titleContainer;
-(id)detailsFields;
-(id)detailsStrings;
-(id)footnoteLabelString;
-(id)footnoteButton;
-(TLKRichText *)bannerBadge;
-(void)setBannerBadge:(TLKRichText *)arg1 ;
@end
