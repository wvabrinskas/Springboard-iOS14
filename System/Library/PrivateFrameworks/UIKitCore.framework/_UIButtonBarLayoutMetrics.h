/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIButtonBarLayoutMetricsData.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSLayoutDimension, NSLayoutAnchor, NSLayoutYAxisAnchor, NSString;

@interface _UIButtonBarLayoutMetrics : NSObject <_UIButtonBarLayoutMetricsData, NSCopying> {

	BOOL _locked;
	BOOL _createsPopoverLayoutGuides;
	BOOL _allowsViewWrappers;
	NSLayoutDimension* _verticalSizeGuide;
	NSLayoutDimension* _minimumSpaceGuide;
	NSLayoutDimension* _flexibleSpaceGuide;
	NSLayoutYAxisAnchor* _popoverGuideTopAnchor;
	NSLayoutDimension* _groupSizeGuide;
	NSLayoutDimension* _groupSpacingGuide;

}

@property (nonatomic,retain) NSLayoutDimension * verticalSizeGuide;                    //@synthesize verticalSizeGuide=_verticalSizeGuide - In the implementation block
@property (nonatomic,retain) NSLayoutDimension * minimumSpaceGuide;                    //@synthesize minimumSpaceGuide=_minimumSpaceGuide - In the implementation block
@property (nonatomic,retain) NSLayoutDimension * flexibleSpaceGuide;                   //@synthesize flexibleSpaceGuide=_flexibleSpaceGuide - In the implementation block
@property (nonatomic,retain) NSLayoutYAxisAnchor * popoverGuideTopAnchor;              //@synthesize popoverGuideTopAnchor=_popoverGuideTopAnchor - In the implementation block
@property (nonatomic,retain) NSLayoutDimension * groupSizeGuide;                       //@synthesize groupSizeGuide=_groupSizeGuide - In the implementation block
@property (nonatomic,retain) NSLayoutDimension * groupSpacingGuide;                    //@synthesize groupSpacingGuide=_groupSpacingGuide - In the implementation block
@property (assign,nonatomic) BOOL createsPopoverLayoutGuides;                          //@synthesize createsPopoverLayoutGuides=_createsPopoverLayoutGuides - In the implementation block
@property (assign,nonatomic) BOOL allowsViewWrappers;                                  //@synthesize allowsViewWrappers=_allowsViewWrappers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPopoverGuideTopAnchor:(NSLayoutYAxisAnchor *)arg1 ;
-(void)setVerticalSizeGuide:(NSLayoutDimension *)arg1 ;
-(id)_upcastIfReadOnly;
-(void)setAllowsViewWrappers:(BOOL)arg1 ;
-(id)_copyWithModifications:(/*^block*/id)arg1 ;
-(NSLayoutDimension *)minimumSpaceGuide;
-(NSString *)description;
-(void)setCreatesPopoverLayoutGuides:(BOOL)arg1 ;
-(void)setFlexibleSpaceGuide:(NSLayoutDimension *)arg1 ;
-(void)setGroupSpacingGuide:(NSLayoutDimension *)arg1 ;
-(NSLayoutDimension *)groupSizeGuide;
-(BOOL)createsPopoverLayoutGuides;
-(NSLayoutDimension *)groupSpacingGuide;
-(NSLayoutDimension *)verticalSizeGuide;
-(void)setMinimumSpaceGuide:(NSLayoutDimension *)arg1 ;
-(BOOL)allowsViewWrappers;
-(NSLayoutDimension *)flexibleSpaceGuide;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setGroupSizeGuide:(NSLayoutDimension *)arg1 ;
-(NSLayoutYAxisAnchor *)popoverGuideTopAnchor;
@end
