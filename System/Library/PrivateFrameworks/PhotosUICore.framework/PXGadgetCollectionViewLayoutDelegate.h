/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class PXGadgetDataSource;


@protocol PXGadgetCollectionViewLayoutDelegate <NSObject>
@property (nonatomic,readonly) PXGadgetDataSource * dataSource; 
@property (nonatomic,readonly) UIEdgeInsets insetsForSectionHeaders; 
@property (nonatomic,readonly) BOOL isTogglingSidebarNoRotating; 
@required
-(UIEdgeInsets)insetsForSectionHeaders;
-(BOOL)isTogglingSidebarNoRotating;
-(PXGadgetDataSource *)dataSource;

@end

