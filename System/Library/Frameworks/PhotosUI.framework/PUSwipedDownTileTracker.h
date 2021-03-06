/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PUInteractiveTileTracker.h>

@class UIPanGestureRecognizer, PUTileController, PHSwipeDownTracker, PUTileLayoutInfo;

@interface PUSwipedDownTileTracker : PUInteractiveTileTracker {

	UIPanGestureRecognizer* _panGestureRecognizer;
	PUTileController* _designatedTileController;
	PHSwipeDownTracker* __swipeDownTracker;
	PUTileLayoutInfo* __trackedTileLayoutInfo;

}

@property (setter=_setSwipeDownTracker:,nonatomic,retain) PHSwipeDownTracker * _swipeDownTracker;                      //@synthesize _swipeDownTracker=__swipeDownTracker - In the implementation block
@property (setter=_setTrackedTileLayoutInfo:,nonatomic,retain) PUTileLayoutInfo * _trackedTileLayoutInfo;              //@synthesize _trackedTileLayoutInfo=__trackedTileLayoutInfo - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * panGestureRecognizer;                                          //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,retain) PUTileController * designatedTileController;                                              //@synthesize designatedTileController=_designatedTileController - In the implementation block
-(PHSwipeDownTracker *)_swipeDownTracker;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)_setSwipeDownTracker:(id)arg1 ;
-(PUTileLayoutInfo *)_trackedTileLayoutInfo;
-(void)_setTrackedTileLayoutInfo:(id)arg1 ;
-(PUTileController *)designatedTileController;
-(void)setDesignatedTileController:(PUTileController *)arg1 ;
-(id)initWithPanGestureRecognizer:(id)arg1 tilingView:(id)arg2 ;
-(id)initWithTilingView:(id)arg1 ;
-(void)updateGestureRecognizerTracking;
-(void)completeTracking;
-(void)startTileControllerTracking;
-(void)updateTileControllerTracking;
-(id)tileControllerToTrack;
@end

