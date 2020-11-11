/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class PXPhotosLayoutSpec, PXSelectionSnapshot;


@protocol PXPhotosSectionedLayoutHeader <NSObject>
@property (nonatomic,retain) PXPhotosLayoutSpec * spec; 
@property (assign,nonatomic) BOOL isInSelectMode; 
@property (nonatomic,retain) PXSelectionSnapshot * selectionSnapshot; 
@required
-(PXSelectionSnapshot *)selectionSnapshot;
-(BOOL)isInSelectMode;
-(void)setIsInSelectMode:(BOOL)arg1;
-(void)setSelectionSnapshot:(id)arg1;
-(PXPhotosLayoutSpec *)spec;
-(void)setSpec:(id)arg1;

@end
