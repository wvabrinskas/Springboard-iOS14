/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, GEOLocationShifter;

@interface GEOCoarseLocationProvider : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	unsigned long long _inFlightTileLoadsCount;
	GEOLocationShifter* _locationShifter;

}
-(void)fetchCoarseEquivalentForLocation:(id)arg1 callbackQueue:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)init;
-(BOOL)_snapNonMercatorCoordinateIfNecessary:(id)arg1 callbackQueue:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)_fetchBasicCoarseEquivalentForLocation:(id)arg1 fallbackIsPermanent:(BOOL)arg2 callbackQueue:(id)arg3 callback:(/*^block*/id)arg4 ;
-(void)_fetchRepresentativePointFromData:(id)arg1 location:(id)arg2 callbackQueue:(id)arg3 callback:(/*^block*/id)arg4 ;
@end

