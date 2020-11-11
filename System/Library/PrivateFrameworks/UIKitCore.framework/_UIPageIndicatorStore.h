/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UIPageIndicatorStoreDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@class UIImage, NSMutableArray;

@interface _UIPageIndicatorStore : NSObject {

	SCD_Struct_UI34 _update;
	double _fittingWidth;
	CGSize _cachedSize;
	id<_UIPageIndicatorStoreDelegate> _delegate;
	UIImage* _preferredImage;
	double _indicatorSpacing;
	NSMutableArray* _store;

}

@property (nonatomic,retain) NSMutableArray * store;                                         //@synthesize store=_store - In the implementation block
@property (assign,nonatomic,__weak) id<_UIPageIndicatorStoreDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * preferredImage;                                       //@synthesize preferredImage=_preferredImage - In the implementation block
@property (assign,nonatomic) double indicatorSpacing;                                        //@synthesize indicatorSpacing=_indicatorSpacing - In the implementation block
@property (nonatomic,readonly) UIImage * indicatorImage; 
-(id)indicatorImageForPage:(long long)arg1 ;
-(long long)lastPage;
-(CGSize)indicatorSizeForPage:(long long)arg1 ;
-(id)customIndicatorImageForPage:(long long)arg1 ;
-(id)init;
-(void)updateImage:(id)arg1 forPage:(long long)arg2 ;
-(id<_UIPageIndicatorStoreDelegate>)delegate;
-(CGSize)contentSizeForNumberOfPages:(long long)arg1 ;
-(void)validateDataStore;
-(long long)objectIndexForPage:(long long)arg1 ;
-(long long)numberOfVisibleIndicatorsForStartIndex:(long long)arg1 fittingWidth:(double)arg2 ;
-(double)indicatorPositionForContinuousPage:(double)arg1 ;
-(void)setPreferredImage:(UIImage *)arg1 ;
-(void)_removeImageForPage:(long long)arg1 ;
-(double)indicatorContentWidthForRange:(NSRange)arg1 ;
-(void)setDelegate:(id<_UIPageIndicatorStoreDelegate>)arg1 ;
-(long long)_objectIndexForPage:(long long)arg1 lower:(long long)arg2 upper:(long long)arg3 ;
-(CGSize)sizeForMaximumContentSizeFittingWidth:(double)arg1 ;
-(void)_insertImage:(id)arg1 forPage:(long long)arg2 ;
-(NSMutableArray *)store;
-(double)indicatorSpacing;
-(void)_resetStore;
-(void)setStore:(NSMutableArray *)arg1 ;
-(void)invalidateLayoutCache;
-(void)updateStoreForNumberOfPages:(long long)arg1 ;
-(CGSize)indicatorSize;
-(UIImage *)indicatorImage;
-(void)setIndicatorSpacing:(double)arg1 ;
-(UIImage *)preferredImage;
@end
