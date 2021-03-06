/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UINavigationControllerPalette.h>

@class UISearchBar, UIView;

@interface _UINavigationControllerManagedSearchPalette : _UINavigationControllerPalette {

	BOOL _ignoreGeometryChanges;
	/*^block*/id _resetAfterSearchFieldFade;
	UISearchBar* __searchBar;

}

@property (nonatomic,readonly) UIView * viewForAsymmetricFade; 
@property (assign,nonatomic) BOOL ignoreGeometryChanges;                                         //@synthesize ignoreGeometryChanges=_ignoreGeometryChanges - In the implementation block
@property (nonatomic,copy) id resetAfterSearchFieldFade;                                         //@synthesize resetAfterSearchFieldFade=_resetAfterSearchFieldFade - In the implementation block
@property (assign,setter=_setSearchBar:,nonatomic,__weak) UISearchBar * _searchBar;              //@synthesize _searchBar=__searchBar - In the implementation block
@property (assign,setter=_setShadowAlpha:,nonatomic) double _shadowAlpha; 
-(BOOL)_shouldUpdateBackground;
-(void)_setSearchBar:(id)arg1 ;
-(void)setIgnoreGeometryChanges:(BOOL)arg1 ;
-(UISearchBar *)_searchBar;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)setResetAfterSearchFieldFade:(id)arg1 ;
-(void)_updateLayoutForCurrentConfiguration;
-(id)resetAfterSearchFieldFade;
-(void)setFrame:(CGRect)arg1 ;
-(id)_initWithNavigationController:(id)arg1 forEdge:(unsigned long long)arg2 ;
-(void)_popDisableLayoutFlushingForTransition;
-(void)setBounds:(CGRect)arg1 ;
-(void)_pushDisableLayoutFlushingForTransition;
-(BOOL)_supportsSpecialSearchBarTransitions;
-(void)setCenter:(CGPoint)arg1 ;
-(double)_shadowAlpha;
-(void)_propagateBackgroundToContents;
-(void)_setShadowAlpha:(double)arg1 ;
-(UIView *)viewForAsymmetricFade;
-(BOOL)ignoreGeometryChanges;
@end

