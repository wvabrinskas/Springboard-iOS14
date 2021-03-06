/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PUTileTransitionCoordinator.h>

@protocol PUTilingCoordinateSystem;
@interface PUSingleAssetLayoutTransitionCoordinator : PUTileTransitionCoordinator {

	id<PUTilingCoordinateSystem> _fixedCoordinateSystem;

}

@property (nonatomic,retain) id<PUTilingCoordinateSystem> fixedCoordinateSystem;              //@synthesize fixedCoordinateSystem=_fixedCoordinateSystem - In the implementation block
-(id)initialLayoutInfoForAppearingTileController:(id)arg1 toLayoutInfo:(id)arg2 ;
-(id)_layoutInfoWithDefaultDisappearance:(id)arg1 ;
-(id)finalLayoutInfoForDisappearingTileController:(id)arg1 fromLayoutInfo:(id)arg2 ;
-(void)setFixedCoordinateSystem:(id<PUTilingCoordinateSystem>)arg1 ;
-(id<PUTilingCoordinateSystem>)fixedCoordinateSystem;
@end

