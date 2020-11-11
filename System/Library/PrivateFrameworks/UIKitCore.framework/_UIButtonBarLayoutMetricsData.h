/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSLayoutDimension, NSLayoutAnchor;


@protocol _UIButtonBarLayoutMetricsData <NSObject>
@property (nonatomic,readonly) NSLayoutDimension * verticalSizeGuide; 
@property (nonatomic,readonly) NSLayoutDimension * minimumSpaceGuide; 
@property (nonatomic,readonly) NSLayoutDimension * flexibleSpaceGuide; 
@property (nonatomic,readonly) NSLayoutAnchor * popoverGuideTopAnchor; 
@property (nonatomic,readonly) NSLayoutDimension * groupSizeGuide; 
@property (nonatomic,readonly) NSLayoutDimension * groupSpacingGuide; 
@property (nonatomic,readonly) BOOL createsPopoverLayoutGuides; 
@property (nonatomic,readonly) BOOL allowsViewWrappers; 
@required
-(id)_upcastIfReadOnly;
-(NSLayoutDimension *)minimumSpaceGuide;
-(NSLayoutDimension *)groupSizeGuide;
-(BOOL)createsPopoverLayoutGuides;
-(NSLayoutDimension *)groupSpacingGuide;
-(NSLayoutDimension *)verticalSizeGuide;
-(BOOL)allowsViewWrappers;
-(NSLayoutDimension *)flexibleSpaceGuide;
-(NSLayoutAnchor *)popoverGuideTopAnchor;

@end
