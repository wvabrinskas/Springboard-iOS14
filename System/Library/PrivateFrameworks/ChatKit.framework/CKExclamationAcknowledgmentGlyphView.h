/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKAcknowledgmentGlyphView.h>

@class CKAcknowledgmentGlyphImageView;

@interface CKExclamationAcknowledgmentGlyphView : CKAcknowledgmentGlyphView {

	CKAcknowledgmentGlyphImageView* _leftExclamationGlyph;
	CKAcknowledgmentGlyphImageView* _rightExclamationGlyph;

}

@property (nonatomic,retain) CKAcknowledgmentGlyphImageView * leftExclamationGlyph;               //@synthesize leftExclamationGlyph=_leftExclamationGlyph - In the implementation block
@property (nonatomic,retain) CKAcknowledgmentGlyphImageView * rightExclamationGlyph;              //@synthesize rightExclamationGlyph=_rightExclamationGlyph - In the implementation block
-(double)animationDuration;
-(void)setGlyphColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)animateWithBeginTime:(double)arg1 completionDelay:(double)arg2 completion:(/*^block*/id)arg3 ;
-(long long)acknowledgmentType;
-(CGPoint)glyphOffset;
-(id)initWithFrame:(CGRect)arg1 color:(char)arg2 ;
-(void)setLeftExclamationGlyph:(CKAcknowledgmentGlyphImageView *)arg1 ;
-(void)setRightExclamationGlyph:(CKAcknowledgmentGlyphImageView *)arg1 ;
-(CKAcknowledgmentGlyphImageView *)leftExclamationGlyph;
-(CKAcknowledgmentGlyphImageView *)rightExclamationGlyph;
@end
