/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIKit-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class NSIndexPath, UITableViewCell, NSMutableArray;

@interface UITableViewCellAccessibilityElement : UIAccessibilityElement {

	NSIndexPath* _indexPath;
	UITableViewCell* _tableViewCell;
	NSMutableArray* _mockChildren;
	BOOL _usingRealTableViewCell;

}

@property (nonatomic,retain) NSIndexPath * indexPath;                                //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,retain) UITableViewCell * tableViewCell;                        //@synthesize tableViewCell=_tableViewCell - In the implementation block
@property (nonatomic,readonly) UITableViewCell * realTableViewCell; 
@property (nonatomic,readonly) UITableViewCell * existingTableViewCell; 
@property (assign,nonatomic) BOOL usingRealTableViewCell;                            //@synthesize usingRealTableViewCell=_usingRealTableViewCell - In the implementation block
-(id)accessibilityLabel;
-(BOOL)accessibilityScrollToVisibleWithChild:(id)arg1 ;
-(BOOL)_accessibilitySupportsActivateAction;
-(id)_privateAccessibilityCustomActions;
-(id)_accessibilityUserTestingProxyView;
-(void)_accessibilityMarkElementForVisiblePointHitTest:(BOOL)arg1 ;
-(id)_accessibilityUserTestingVisibleAncestor;
-(void)_accessibilityCut;
-(id)_accessibilityLineNumberAndColumnForPoint:(CGPoint)arg1 ;
-(NSRange)_accessibilityRangeForLineNumberAndColumn:(id)arg1 ;
-(CGRect)_accessibilityBoundsForRange:(NSRange)arg1 ;
-(id)_accessibilityDataDetectorScheme:(CGPoint)arg1 ;
-(void)_accessibilitySelect;
-(BOOL)_accessibilityHasNativeFocus;
-(BOOL)_accessibilityCanBecomeNativeFocused;
-(BOOL)_accessibilityViewHierarchyHasNativeFocus;
-(id)accessibilityLocalizationBundleID;
-(id)accessibilityLocalizationBundlePath;
-(id)accessibilityLocalizedStringTableName;
-(BOOL)_accessibilityHasTextOperations;
-(void)_accessibilityCopy;
-(void)accessibilityElementDidBecomeFocused;
-(BOOL)_accessibilityRetainsCustomRotorActionSetting;
-(BOOL)_allowCustomActionHintSpeakOverride;
-(void)_accessibilityPaste;
-(BOOL)_accessibilityIsTableCell;
-(NSRange)_accessibilityIndexPathAsRange;
-(id)_accessibilityTextOperations;
-(id)_accessibilityTextViewTextOperationResponder;
-(id)accessibilityDragSourceDescriptors;
-(BOOL)_accessibilityShouldIncludeRowRangeInElementDescription;
-(long long)_accessibilityUserTestingChildrenCount;
-(CGPoint)_accessibilityMinScrubberPosition;
-(CGPoint)_accessibilityMaxScrubberPosition;
-(id)_accessibilityAbsoluteValue;
-(id)_accessibilityCapturedImages;
-(BOOL)_accessibilityIsAwayAlertElement;
-(BOOL)accessibilityRespondsToUserInteraction;
-(BOOL)_accessibilityBackingElementIsValid;
-(id)accessibilityDropPointDescriptors;
-(NSIndexPath *)indexPath;
-(void)_accessibilitySelectAll;
-(long long)_accessibilityScannerActivateBehavior;
-(id)_accessibilityEquivalenceTag;
-(unsigned long long)accessibilityTraits;
-(BOOL)shouldGroupAccessibilityChildren;
-(id)_accessibilitySpeakThisString;
-(void)accessibilityElementDidLoseFocus;
-(BOOL)isAccessibilityElement;
-(id)_accessibilityCustomActionGroupIdentifier;
-(BOOL)_accessibilityImplementsDefaultRowRange;
-(id)description;
-(long long)_accessibilityCompareElement:(id)arg1 toElement:(id)arg2 ;
-(id)accessibilityUserInputLabels;
-(double)_accessibilityAllowedGeometryOverlap;
-(void)_accessibilityUndo;
-(void)_accessibilityRedo;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(id)accessibilityLocalizedStringKey;
-(id)_accessibilitySemanticContextForElement:(id)arg1 ;
-(CGRect)accessibilityFrame;
-(BOOL)_accessibilityIsInTableCell;
-(NSRange)accessibilityRowRange;
-(id)_accessibilityTableViewCellContentSubviews;
-(id)accessibilityHeaderElements;
-(unsigned long long)_accessibilityAutomationType;
-(BOOL)accessibilityPerformEscape;
-(id)accessibilityCustomActions;
-(BOOL)accessibilityPerformMagicTap;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(long long)accessibilityElementCount;
-(BOOL)_accessibilitySetNativeFocus;
-(id)accessibilityHint;
-(id)_accessibilityProxyView;
-(CGPoint)accessibilityActivationPoint;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(id)accessibilityLanguage;
-(BOOL)accessibilityActivate;
-(BOOL)_accessibilityUserTestingIsDefaultButton;
-(BOOL)_accessibilityUserTestingIsCancelButton;
-(BOOL)_accessibilityUserTestingIsDestructiveButton;
-(BOOL)_accessibilityUserTestingIsPreferredButton;
-(UITableViewCell *)tableViewCell;
-(id)accessibilityIdentifier;
-(void)setTableViewCell:(UITableViewCell *)arg1 ;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_accessibilityIsSpeakThisElement;
-(BOOL)_accessibilityIsScannerGroup;
-(unsigned long long)_accessibilityScanningBehaviorTraits;
-(id)accessibilityValue;
-(void)dealloc;
-(UITableViewCell *)realTableViewCell;
-(id)_accessibilityUserTestingChildren;
-(BOOL)_accessibilityCanPerformEscapeAction;
-(BOOL)_accessibilityIsOutsideParentBounds;
-(void)unregisterAllChildren;
-(void)registerMockChild:(id)arg1 ;
-(UITableViewCell *)existingTableViewCell;
-(void)unregisterMockChild:(id)arg1 ;
-(BOOL)usingRealTableViewCell;
-(CGRect)_accessibilityChargedLineBoundsForRange:(NSRange)arg1 ;
-(void)setUsingRealTableViewCell:(BOOL)arg1 ;
@end
