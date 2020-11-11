/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIAccessibility/UIAccessibility-Structs.h>
#import <UIKitCore/UIAccessibilityCustomAction.h>

@class UIView;

@interface UIAccessibilityAddToDragSessionCustomAction : UIAccessibilityCustomAction {

	CGPoint _pt;
	UIView* _view;

}
-(id)initWithPoint:(CGPoint)arg1 inSourceView:(id)arg2 ;
-(BOOL)_accessibilityInvokeAddToSession;
-(id)_accessibilityCustomActionIdentifier;
@end
