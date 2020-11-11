/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface PFSlowMotionTimeRangeMapper : NSObject {

	NSMutableArray* _originalLengths;
	NSMutableArray* _scaledLengths;
	NSMutableArray* _scaledRegions;

}
-(id)init;
-(float)originalTimeForScaledTime:(float)arg1 ;
-(float)scaledTimeForOriginalTime:(float)arg1 ;
-(void)addNextRange:(float)arg1 scaledLength:(float)arg2 ;
-(float)_mapTime:(float)arg1 fromLengths:(id)arg2 toLengths:(id)arg3 ;
-(void)markScaledRegionWithRate:(float)arg1 rampInStartTime:(float)arg2 rampInEndTime:(float)arg3 rampOutStartTime:(float)arg4 rampOutEndTime:(float)arg5 ;
-(void)enumerateScaledRegionsUsingBlock:(/*^block*/id)arg1 ;
@end
