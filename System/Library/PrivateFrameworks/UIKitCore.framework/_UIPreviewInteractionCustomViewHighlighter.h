/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIPreviewInteractionHighlighting.h>

@class UIView, NSString;

@interface _UIPreviewInteractionCustomViewHighlighter : NSObject <_UIPreviewInteractionHighlighting> {

	BOOL _customViewFlipsHorizontalAxis;
	UIView* _customView;

}

@property (nonatomic,retain) UIView * customView;                             //@synthesize customView=_customView - In the implementation block
@property (assign,nonatomic) BOOL customViewFlipsHorizontalAxis;              //@synthesize customViewFlipsHorizontalAxis=_customViewFlipsHorizontalAxis - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)customView;
-(id)highlightShouldBeginInContainerView:(id)arg1 presentationContainerView:(id)arg2 previewingContext:(id)arg3 ;
-(void)setCustomViewFlipsHorizontalAxis:(BOOL)arg1 ;
-(BOOL)customViewFlipsHorizontalAxis;
-(void)prepareHighlightWithPreviewingContext:(id)arg1 ;
-(void)finalizeHighlightForPreviewingContext:(id)arg1 ;
-(void)setCustomView:(UIView *)arg1 ;
@end
