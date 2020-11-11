/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UISplittableInputView.h>
#import <UIKitCore/_UIRemoteKeyboardInputViewPlaceholder.h>

@class UIView, NSString;

@interface _UIRemoteKeyboardPlaceholderView : UIView <UISplittableInputView, _UIRemoteKeyboardInputViewPlaceholder> {

	UIView* _mirroredView;
	CGSize _fixedSize;
	/*^block*/id _sizeBlock;
	UIView* _fallbackView;
	UIView* _associatedView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGSize fixedSize; 
@property (retain,readonly) UIView * placeheldView; 
@property (nonatomic,retain) UIView * fallbackView;                 //@synthesize fallbackView=_fallbackView - In the implementation block
@property (nonatomic,retain) UIView * associatedView;               //@synthesize associatedView=_associatedView - In the implementation block
+(id)placeholderForView:(id)arg1 ;
+(id)placeholderWithWidth:(double)arg1 height:(double)arg2 ;
+(id)placeholderWithSizer:(/*^block*/id)arg1 ;
-(id)initWithSize:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(CGRect)_compatibleBounds;
-(void)_setLeftOffset:(double)arg1 gapWidth:(double)arg2 ;
-(void)willBeginSplitTransition;
-(CGSize)fixedSize;
-(void)updateMergedSubviewConstraints;
-(CGSize)rightContentViewSize;
-(void)_setProgress:(double)arg1 boundedBy:(double)arg2 ;
-(NSString *)description;
-(BOOL)refreshPlaceholder;
-(BOOL)isEqual:(id)arg1 ;
-(void)_isPlaceholderViewSelector;
-(UIView *)associatedView;
-(void)layoutSplitSubviewsWithLeftContentSize:(CGSize)arg1 rightContentSize:(CGSize)arg2 ;
-(CGSize)leftContentViewSize;
-(void)layoutMergedSubviews;
-(void)didEndSplitTransition;
-(void)_endSplitTransitionIfNeeded:(BOOL)arg1 ;
-(void)setFixedSize:(CGSize)arg1 ;
-(void)_beginSplitTransitionIfNeeded:(double)arg1 gapWidth:(double)arg2 ;
-(UIView *)fallbackView;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIView *)placeheldView;
-(void)setAssociatedView:(UIView *)arg1 ;
-(void)setFallbackView:(UIView *)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)updateSplitSubviewContraintsWithLeftContentSize:(CGSize)arg1 rightContentSize:(CGSize)arg2 ;
@end
