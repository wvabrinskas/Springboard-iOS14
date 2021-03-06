/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@protocol TUICandidateViewStyle;
@class NSString, UILabel;

@interface TUICandidateGroupHeader : UICollectionReusableView {

	NSString* _text;
	long long _alignment;
	id<TUICandidateViewStyle> _style;
	double _rowHeight;
	UILabel* _textLabel;
	CGRect _visibleBounds;
	CGRect _virtualLabelContainerFrame;

}

@property (nonatomic,retain) UILabel * textLabel;                            //@synthesize textLabel=_textLabel - In the implementation block
@property (assign,nonatomic) CGRect virtualLabelContainerFrame;              //@synthesize virtualLabelContainerFrame=_virtualLabelContainerFrame - In the implementation block
@property (nonatomic,copy) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) long long alignment;                            //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,retain) id<TUICandidateViewStyle> style;                //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) CGRect visibleBounds;                           //@synthesize visibleBounds=_visibleBounds - In the implementation block
@property (assign,nonatomic) double rowHeight;                               //@synthesize rowHeight=_rowHeight - In the implementation block
+(id)reuseIdentifier;
-(CGRect)visibleBounds;
-(void)setText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)commonInit;
-(void)setRowHeight:(double)arg1 ;
-(NSString *)text;
-(void)setAlignment:(long long)arg1 ;
-(void)layoutSubviews;
-(double)rowHeight;
-(id<TUICandidateViewStyle>)style;
-(long long)alignment;
-(UILabel *)textLabel;
-(id)initWithCoder:(id)arg1 ;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)setVisibleBounds:(CGRect)arg1 ;
-(void)updateGroupHeaderLabelPosition;
-(void)setVirtualLabelContainerFrame:(CGRect)arg1 ;
-(CGRect)virtualLabelContainerFrame;
-(void)setStyle:(id<TUICandidateViewStyle>)arg1 ;
@end

