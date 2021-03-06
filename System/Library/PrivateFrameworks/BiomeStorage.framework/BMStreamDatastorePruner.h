/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStorage.framework/BiomeStorage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class BMStreamDatastore, BMStreamsAccessClient;

@interface BMStreamDatastorePruner : NSObject {

	BMStreamDatastore* _inner;
	BMStreamsAccessClient* _accessClient;

}
-(id)streamIdentifier;
-(Class)eventClass;
-(void)removeEventsFrom:(double)arg1 to:(double)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)removeEventsFrom:(double)arg1 to:(double)arg2 callback:(/*^block*/id)arg3 ;
-(void)syncMappedFiles;
-(void)eventsFrom:(double)arg1 to:(double)arg2 shouldDeleteUsingBlock:(/*^block*/id)arg3 ;
-(id)newEnumeratorFromStartTime:(double)arg1 ;
-(id)initWithStream:(id)arg1 config:(id)arg2 ;
-(id)fetchEventsFrom:(double)arg1 to:(double)arg2 ;
-(id)newEnumeratorFromBookmark:(id)arg1 ;
-(void)dealloc;
@end

