/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXLivePhotoTrimScrubberSnapStripControllerSpec, PXLivePhotoTrimScrubber, PXSnapStripView;

@interface PXLivePhotoTrimScrubberSnapStripController : NSObject {

	BOOL _allowStartEndTimeSnapIndicators;
	PXLivePhotoTrimScrubberSnapStripControllerSpec* _spec;
	PXLivePhotoTrimScrubber* _trimScrubber;
	PXSnapStripView* _snapStripView;

}

@property (nonatomic,retain) PXLivePhotoTrimScrubberSnapStripControllerSpec * spec;              //@synthesize spec=_spec - In the implementation block
@property (nonatomic,retain) PXLivePhotoTrimScrubber * trimScrubber;                             //@synthesize trimScrubber=_trimScrubber - In the implementation block
@property (nonatomic,retain) PXSnapStripView * snapStripView;                                    //@synthesize snapStripView=_snapStripView - In the implementation block
@property (assign,nonatomic) BOOL allowStartEndTimeSnapIndicators;                               //@synthesize allowStartEndTimeSnapIndicators=_allowStartEndTimeSnapIndicators - In the implementation block
-(PXLivePhotoTrimScrubberSnapStripControllerSpec *)spec;
-(void)updateSnapStripViewAnimated:(BOOL)arg1 ;
-(PXLivePhotoTrimScrubber *)trimScrubber;
-(PXSnapStripView *)snapStripView;
-(id)_snapIndicatorInfosForTimes:(id)arg1 currentTime:(SCD_Struct_PX8)arg2 style:(unsigned long long)arg3 skipSingleIndicatorWithCurrentTime:(BOOL)arg4 skipDefaultTimeIndicator:(BOOL)arg5 ;
-(id)_snapIndicatorInfosForTimes:(id)arg1 currentTime:(SCD_Struct_PX8)arg2 suggestedTime:(SCD_Struct_PX8)arg3 style:(unsigned long long)arg4 skipSingleIndicatorWithCurrentTime:(BOOL)arg5 skipDefaultTimeIndicator:(BOOL)arg6 ;
-(BOOL)allowStartEndTimeSnapIndicators;
-(void)setSpec:(PXLivePhotoTrimScrubberSnapStripControllerSpec *)arg1 ;
-(void)updateSnapStripView;
-(void)setAllowStartEndTimeSnapIndicators:(BOOL)arg1 ;
-(void)setSnapStripView:(PXSnapStripView *)arg1 ;
-(void)setTrimScrubber:(PXLivePhotoTrimScrubber *)arg1 ;
@end
