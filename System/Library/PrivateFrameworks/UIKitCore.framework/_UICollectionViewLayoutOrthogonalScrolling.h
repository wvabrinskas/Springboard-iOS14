/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UICollectionViewLayoutOrthogonalScrolling <NSObject>
@required
-(CGRect*)_orthogonalScrollingContentRectForSection:(long long)arg1;
-(CGVector*)_scrollingUnitVectorForOrthogonalScrollingSection:(long long)arg1;
-(double)_orthogonalScrollingDecelerationRateForSection:(long long)arg1;
-(BOOL)_orthogonalScrollingElementShouldAppearAboveForAttributes:(id)arg1;
-(id)_orthogonalScrollingSections;
-(CGRect*)_orthogonalScrollingLayoutRectForSection:(long long)arg1;
-(double)_orthogonalScrollingPagingDimensionForSection:(long long)arg1;
-(BOOL)_orthogonalScrollingShouldCenterCustomPagingSizeForSection:(long long)arg1;
-(NSDirectionalEdgeInsets*)_orthogonalScrollingContentInsetsForSection:(long long)arg1;
-(unsigned long long)_orthogonalScrollingAxis;
-(CGPoint*)_offsetForOrthogonalScrollingSection:(long long)arg1;
-(BOOL)_hasOrthogonalScrollingSections;
-(BOOL)_shouldConfigureForPagingForOrthogonalScrollingSection:(long long)arg1;
-(BOOL)_shouldOrthogonalScrollingSectionDecorationScrollWithContentForIndexPath:(id)arg1 elementKind:(id)arg2;
-(void)_setOffset:(CGPoint)arg1 forOrthogonalScrollingSection:(long long)arg2;
-(id)_extendedAttributesQueryIncludingOrthogonalScrollingRegions:(CGRect)arg1;
-(CGRect*)_orthogonalFrameWithOffsetElidedForItemWithLayoutAttributes:(id)arg1 frame:(CGRect)arg2;
-(BOOL)_shouldOrthogonalScrollingSectionSupplementaryScrollWithContentForIndexPath:(id)arg1 elementKind:(id)arg2;
-(CGPoint*)_orthogonalScrollingTargetContentOffsetForOffset:(CGPoint)arg1 section:(long long)arg2;
-(BOOL)_orthogonalScrollingUsesTargetContentOffsetForSection:(long long)arg1;
-(id)_orthogonalScrollingStateForSection:(long long)arg1;
-(id)_orthogonalScrollingTrace;

@end
