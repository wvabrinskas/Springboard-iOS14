/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UIButtonBarLayoutMetricsData;
@class UIBarButtonItem, NSArray;

@interface _UIButtonBarLayout : NSObject {

	id<_UIButtonBarLayoutMetricsData> _layoutMetrics;
	BOOL _dirty;

}

@property (assign,getter=isDirty,nonatomic) BOOL dirty;                      //@synthesize dirty=_dirty - In the implementation block
@property (nonatomic,readonly) BOOL isSpaceLayout; 
@property (nonatomic,readonly) BOOL isGroupLayout; 
@property (nonatomic,readonly) UIBarButtonItem * barButtonItem; 
@property (nonatomic,readonly) NSArray * subLayouts; 
-(void)_addLayoutViews:(id)arg1 ;
-(UIBarButtonItem *)barButtonItem;
-(void)setSuppressSpacing:(BOOL)arg1 ;
-(BOOL)useGroupSizing;
-(double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1 ;
-(BOOL)_shouldBeDirty;
-(NSArray *)subLayouts;
-(void)setUseGroupSizing:(BOOL)arg1 ;
-(BOOL)isGroupLayout;
-(id)initWithLayoutMetrics:(id)arg1 ;
-(void)addLayoutGuides:(id)arg1 ;
-(BOOL)suppressSpacing;
-(BOOL)isSpaceLayout;
-(void)_addLayoutGuides:(id)arg1 ;
-(void)_configure;
-(id)_metricsData;
-(void)dirtyLayoutForPlainAppearanceChange:(BOOL)arg1 doneAppearanceChanged:(BOOL)arg2 ;
-(void)configure;
-(void)addLayoutViews:(id)arg1 layoutGuides:(id)arg2 constraintsToActivate:(id)arg3 constraintsToDeactivate:(id)arg4 ;
-(void)setDirty:(BOOL)arg1 ;
-(void)addLayoutViews:(id)arg1 ;
-(BOOL)shouldHoriziontallyCenterView:(id)arg1 ;
-(id)init;
-(BOOL)compact;
-(BOOL)isDirty;
-(id)description;
-(void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2 ;
-(void)addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2 ;
@end

