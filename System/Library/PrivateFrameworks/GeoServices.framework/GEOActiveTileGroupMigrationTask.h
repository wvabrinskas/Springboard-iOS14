/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class GEOActiveTileGroupMigrationTaskOptions;


@protocol GEOActiveTileGroupMigrationTask <NSProgressReporting>
@property (nonatomic,readonly) long long estimatedWeight; 
@property (nonatomic,retain) id<NSObject> transaction; 
@property (nonatomic,retain) GEOActiveTileGroupMigrationTaskOptions * options; 
@optional
-(id)stateWithHints:(os_state_hints_s*)arg1;

@required
-(void)startWithCompletionHandler:(/*^block*/id)arg1 callbackQueue:(id)arg2;
-(void)setOptions:(id)arg1;
-(void)setTransaction:(id)arg1;
-(GEOActiveTileGroupMigrationTaskOptions *)options;
-(id<NSObject>)transaction;
-(void)populateTileGroup:(id)arg1;
-(long long)estimatedWeight;
-(void)cancel;
-(void)removeOldData:(id)arg1;

@end

