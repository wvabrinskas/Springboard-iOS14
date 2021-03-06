/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class PXTilingScrollInfo;


@protocol PXTilingScrollController <NSObject>
@property (assign,nonatomic,__weak) id<PXTilingScrollControllerUpdateDelegate> updateDelegate; 
@property (nonatomic,readonly) CGSize referenceSize; 
@property (nonatomic,readonly) UIEdgeInsets contentInset; 
@property (nonatomic,readonly) CGRect activeRect; 
@property (nonatomic,readonly) CGRect visibleRect; 
@property (nonatomic,readonly) CGRect constrainedVisibleRect; 
@property (nonatomic,readonly) CGRect targetRect; 
@property (assign,nonatomic) CGRect contentBounds; 
@property (nonatomic,copy) PXTilingScrollInfo * scrollInfo; 
@property (assign,nonatomic) BOOL respectsContentZOrder; 
@property (assign,nonatomic) CGSize presentedContentSize; 
@required
-(CGRect)visibleRect;
-(void)updateIfNeeded;
-(UIEdgeInsets)contentInset;
-(CGRect)constrainedVisibleRect;
-(void)setScrollInfo:(id)arg1;
-(void)setPresentedContentSize:(CGSize)arg1;
-(CGRect)targetRect;
-(PXTilingScrollInfo *)scrollInfo;
-(void)setRespectsContentZOrder:(BOOL)arg1;
-(CGSize)referenceSize;
-(BOOL)respectsContentZOrder;
-(void)setContentBounds:(CGRect)arg1;
-(CGRect)contentBounds;
-(void)setNeedsUpdate;
-(CGRect)activeRect;
-(CGSize)presentedContentSize;
-(id<PXTilingScrollControllerUpdateDelegate>)updateDelegate;
-(void)setUpdateDelegate:(id)arg1;

@end

