/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class NSString, _UILegibilitySettings, UIMorphingLabel;

@interface SBUIFaceIDCoachingView : UIView {

	unsigned long long _coachingCondition;
	NSString* _currentSizeCategory;
	_UILegibilitySettings* _legibilitySettings;
	NSString* _labelText;
	UIMorphingLabel* _label;

}

@property (nonatomic,retain) NSString * labelText;                                    //@synthesize labelText=_labelText - In the implementation block
@property (getter=_label,nonatomic,retain) UIMorphingLabel * label;                   //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned long long coachingCondition;                    //@synthesize coachingCondition=_coachingCondition - In the implementation block
@property (nonatomic,retain) NSString * currentSizeCategory;                          //@synthesize currentSizeCategory=_currentSizeCategory - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,readonly) double stringWidth; 
-(_UILegibilitySettings *)legibilitySettings;
-(id)init;
-(id)_label;
-(void)setLabelText:(NSString *)arg1 ;
-(NSString *)labelText;
-(void)layoutSubviews;
-(void)_resizeLabelToFirstSizeCategoryThatFits;
-(void)_updateLabelTextForCurrentCoachingConditionAnimated:(BOOL)arg1 ;
-(unsigned long long)coachingCondition;
-(void)setCurrentSizeCategory:(NSString *)arg1 ;
-(double)stringWidth;
-(void)setCoachingCondition:(unsigned long long)arg1 animated:(BOOL)arg2 delay:(double)arg3 ;
-(void)setLabel:(UIMorphingLabel *)arg1 ;
-(NSString *)currentSizeCategory;
-(void)setCoachingCondition:(unsigned long long)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)_contentSizeCategoryChanged;
@end

