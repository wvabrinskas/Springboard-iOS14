/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIKit-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>
#import <UIKit/UIAccessibilityElementMockViewDelegateProtocol.h>

@class NSMutableArray;

@interface UITableViewSectionElement : UIAccessibilityElement <UIAccessibilityElementMockViewDelegateProtocol> {

	BOOL _isHeader;
	long long _section;
	NSMutableArray* _children;

}

@property (assign,nonatomic) long long section;              //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) BOOL isHeader;                  //@synthesize isHeader=_isHeader - In the implementation block
-(void)setSection:(long long)arg1 ;
-(void)accessibilityScrollToVisibleWithChild:(id)arg1 ;
-(BOOL)accessibilityScrollToVisible;
-(long long)section;
-(BOOL)isHeader;
-(BOOL)isAccessibilityElement;
-(id)description;
-(CGRect)accessibilityFrame;
-(BOOL)_accessibilityIsNotFirstElement;
-(void)setIsHeader:(BOOL)arg1 ;
-(id)accessibilityElements;
-(id)accessibilityIdentifier;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)initWithAccessibilityContainer:(id)arg1 ;
-(void)dealloc;
-(void)_accessibilityClearChildren;
-(void)updateMockView:(id)arg1 ;
-(id)accessibilityChildren;
-(void)_acccessibilityClearChildCache;
-(id)_textChildWithTitle:(id)arg1 ;
-(id)_accessibilityAccessibleElementsInView:(id)arg1 ;
@end

