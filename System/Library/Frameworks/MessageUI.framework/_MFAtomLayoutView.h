/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol MFAtomTextViewAtomLayout;
@class UIView;

@interface _MFAtomLayoutView : UIView {

	UIView*<MFAtomTextViewAtomLayout> _delegateView;

}

@property (nonatomic,readonly) UIEdgeInsets atomInsets; 
@property (nonatomic,retain) UIView*<MFAtomTextViewAtomLayout> delegateView;              //@synthesize delegateView=_delegateView - In the implementation block
+(id)layoutViewWithDelegateView:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(CGRect)boundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(id)viewForLastBaselineLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)atomInsets;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView*<MFAtomTextViewAtomLayout>)delegateView;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)selectionBounds;
-(id)initWithDelegateView:(id)arg1 ;
-(void)setDelegateView:(UIView*<MFAtomTextViewAtomLayout>)arg1 ;
-(void)setMaskBounds:(CGRect)arg1 ;
@end

