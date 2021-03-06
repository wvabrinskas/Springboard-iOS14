/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIWindow, UIView, UITraitCollection, NSArray;

@interface _UIContextMenuStyle : NSObject <NSCopying> {

	BOOL _hasInteractivePreview;
	BOOL _preventPreviewRasterization;
	BOOL _reversesActionOrderWhenAttachedToTop;
	BOOL _previewOverlapsMenu;
	BOOL __allowsImmediateSelection;
	BOOL __shouldAvoidInputViews;
	BOOL __inheritTraitsFromPresentingViewController;
	BOOL __prefersActualContentSize;
	UIWindow* _containerWindow;
	UIView* _containerView;
	unsigned long long _preferredLayout;
	UITraitCollection* _preferredTraitCollection;
	NSArray* _preferredBackgroundEffects;
	UIEdgeInsets _preferredEdgeInsets;
	UIEdgeInsets _preferredBackgroundInsets;
	SCD_Struct_UI3 __preferredAnchor;

}

@property (assign,getter=_preferredAnchor,nonatomic) SCD_Struct_UI3 _preferredAnchor;                                                        //@synthesize _preferredAnchor=__preferredAnchor - In the implementation block
@property (assign,getter=_allowsImmediateSelection,nonatomic) BOOL _allowsImmediateSelection;                                                //@synthesize _allowsImmediateSelection=__allowsImmediateSelection - In the implementation block
@property (assign,getter=_shouldAvoidInputViews,nonatomic) BOOL _shouldAvoidInputViews;                                                      //@synthesize _shouldAvoidInputViews=__shouldAvoidInputViews - In the implementation block
@property (assign,getter=_inheritTraitsFromPresentingViewController,nonatomic) BOOL _inheritTraitsFromPresentingViewController;              //@synthesize _inheritTraitsFromPresentingViewController=__inheritTraitsFromPresentingViewController - In the implementation block
@property (getter=_layoutAllowsPreview,nonatomic,readonly) BOOL _layoutAllowsPreview; 
@property (getter=_layoutAllowsMenu,nonatomic,readonly) BOOL _layoutAllowsMenu; 
@property (assign,setter=_setPrefersActualContentSize:,nonatomic) BOOL _prefersActualContentSize;                                            //@synthesize _prefersActualContentSize=__prefersActualContentSize - In the implementation block
@property (nonatomic,retain) UIWindow * containerWindow;                                                                                     //@synthesize containerWindow=_containerWindow - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                                                                         //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic) unsigned long long preferredLayout;                                                                             //@synthesize preferredLayout=_preferredLayout - In the implementation block
@property (assign,nonatomic) UIEdgeInsets preferredEdgeInsets;                                                                               //@synthesize preferredEdgeInsets=_preferredEdgeInsets - In the implementation block
@property (assign,nonatomic) BOOL hasInteractivePreview;                                                                                     //@synthesize hasInteractivePreview=_hasInteractivePreview - In the implementation block
@property (assign,nonatomic) BOOL preventPreviewRasterization;                                                                               //@synthesize preventPreviewRasterization=_preventPreviewRasterization - In the implementation block
@property (assign,nonatomic) BOOL reversesActionOrderWhenAttachedToTop;                                                                      //@synthesize reversesActionOrderWhenAttachedToTop=_reversesActionOrderWhenAttachedToTop - In the implementation block
@property (assign,nonatomic) BOOL previewOverlapsMenu;                                                                                       //@synthesize previewOverlapsMenu=_previewOverlapsMenu - In the implementation block
@property (nonatomic,retain) UITraitCollection * preferredTraitCollection;                                                                   //@synthesize preferredTraitCollection=_preferredTraitCollection - In the implementation block
@property (nonatomic,retain) NSArray * preferredBackgroundEffects;                                                                           //@synthesize preferredBackgroundEffects=_preferredBackgroundEffects - In the implementation block
@property (assign,nonatomic) UIEdgeInsets preferredBackgroundInsets;                                                                         //@synthesize preferredBackgroundInsets=_preferredBackgroundInsets - In the implementation block
+(id)defaultStyle;
-(UIWindow *)containerWindow;
-(UITraitCollection *)preferredTraitCollection;
-(void)set_inheritTraitsFromPresentingViewController:(BOOL)arg1 ;
-(BOOL)_inheritTraitsFromPresentingViewController;
-(void)setReversesActionOrderWhenAttachedToTop:(BOOL)arg1 ;
-(BOOL)reversesActionOrderWhenAttachedToTop;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(void)setPreferredBackgroundEffects:(NSArray *)arg1 ;
-(void)setPreventPreviewRasterization:(BOOL)arg1 ;
-(void)setPreferredBackgroundInsets:(UIEdgeInsets)arg1 ;
-(void)set_allowsImmediateSelection:(BOOL)arg1 ;
-(void)_setPrefersActualContentSize:(BOOL)arg1 ;
-(BOOL)preventPreviewRasterization;
-(void)setPreferredTraitCollection:(UITraitCollection *)arg1 ;
-(NSArray *)preferredBackgroundEffects;
-(void)set_shouldAvoidInputViews:(BOOL)arg1 ;
-(unsigned long long)preferredLayout;
-(void)setHasInteractivePreview:(BOOL)arg1 ;
-(UIEdgeInsets)preferredBackgroundInsets;
-(BOOL)_allowsImmediateSelection;
-(BOOL)_prefersActualContentSize;
-(BOOL)_layoutAllowsMenu;
-(SCD_Struct_UI3)_preferredAnchor;
-(void)set_preferredAnchor:(SCD_Struct_UI3)arg1 ;
-(BOOL)_layoutAllowsPreview;
-(BOOL)_shouldAvoidInputViews;
-(BOOL)hasInteractivePreview;
-(void)setPreferredLayout:(unsigned long long)arg1 ;
-(void)setContainerWindow:(UIWindow *)arg1 ;
-(BOOL)previewOverlapsMenu;
-(UIEdgeInsets)preferredEdgeInsets;
-(void)setPreviewOverlapsMenu:(BOOL)arg1 ;
-(void)setPreferredEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

