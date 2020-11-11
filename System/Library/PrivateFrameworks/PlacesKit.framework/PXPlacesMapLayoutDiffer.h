/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXPlacesMapLayoutResult;
@class NSMutableArray;

@interface PXPlacesMapLayoutDiffer : NSObject {

	NSMutableArray* _changes;
	id<PXPlacesMapLayoutResult> _sourceLayoutResult;
	id<PXPlacesMapLayoutResult> _targetLayoutResult;

}

@property (nonatomic,readonly) id<PXPlacesMapLayoutResult> sourceLayoutResult;              //@synthesize sourceLayoutResult=_sourceLayoutResult - In the implementation block
@property (nonatomic,readonly) id<PXPlacesMapLayoutResult> targetLayoutResult;              //@synthesize targetLayoutResult=_targetLayoutResult - In the implementation block
-(void)_computeChanges;
-(id)initWithSourceLayoutResult:(id)arg1 targetLayoutResult:(id)arg2 ;
-(id)computeChanges;
-(void)_addTargetLayoutItem:(id)arg1 ;
-(void)_removeSourceLayoutItem:(id)arg1 ;
-(void)_relateSourceLayoutItem:(id)arg1 withTargetLayoutItem:(id)arg2 ;
-(id<PXPlacesMapLayoutResult>)sourceLayoutResult;
-(id<PXPlacesMapLayoutResult>)targetLayoutResult;
@end
